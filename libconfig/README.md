# libconfig - A C library

The `libconfig` C library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libconfig` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libconfig ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libconfig%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libconfig.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
