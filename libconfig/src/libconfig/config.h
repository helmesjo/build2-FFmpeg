#pragma once

#include <stdio.h>
#include <errno.h>

/* Print a greeting for the specified name into the specified
 * stream. On success, return the number of characters printed.
 * On failure, set errno and return a negative value.
 */
static inline int
say_hello (FILE *f, const char* name)
{
  if (f == NULL || name == NULL || *name == '\0')
  {
    errno = EINVAL;
    return -1;
  }

  return fprintf (f, "Hello, %s!\n", name);
}
