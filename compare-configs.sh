#!/usr/bin/env bash

# Check if arguments are provided
if [ $# -ne 2 ]; then
    echo "Usage: $0 <lhs_file> <rhs_file>"
    exit 1
fi

lhs_file="$1"
rhs_file="$2"

# Function to extract variable and value from a define statement
extract_var_val() {
    local line="$1"
    # Remove leading/trailing whitespace and #define part
    line=$(echo "$line" | sed -E 's/^[[:space:]]*#[[:space:]]*define[[:space:]]+//')

    # Split into variable and value, handling values with spaces
    var=$(echo "$line" | awk '{print $1}')
    val=$(echo "$line" | awk '{$1=""; print substr($0, 2)}')
    echo "$var $val"
}

# Read all defines from rhs into an associative array
declare -A rhs_defines
while IFS= read -r line; do
    if [[ "$line" =~ ^[[:space:]]*#[[:space:]]*define[[:space:]] ]]; then
        var_val=$(extract_var_val "$line")
        var=$(echo "$var_val" | cut -d' ' -f1)
        val=$(echo "$var_val" | cut -d' ' -f2-)
        rhs_defines["$var"]="$val"
    fi
done < "$rhs_file"

# Process each line in lhs file
while IFS= read -r line; do
    if [[ "$line" =~ ^[[:space:]]*#[[:space:]]*define[[:space:]] ]]; then
        var_val=$(extract_var_val "$line")
        lhs_var=$(echo "$var_val" | cut -d' ' -f1)
        lhs_val=$(echo "$var_val" | cut -d' ' -f2-)

        if [[ -v rhs_defines[$lhs_var] ]]; then
            rhs_val=${rhs_defines[$lhs_var]}  # Correct syntax for indexing
            if [ "$lhs_val" == "$rhs_val" ]; then
                echo "Success: $lhs_var = $lhs_val"
            else
                echo "Fail: $lhs_var = $lhs_val in LHS, $rhs_val in RHS"
            fi
        fi
    fi
done < "$lhs_file"
