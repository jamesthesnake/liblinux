# Project information and file system structure
include make/project
include make/structure

# Custom make functions for convenience
include make/functions

# Integration with project shell scripts
include make/scripts

# Compiler and archiver configuration
include make/compiler
include make/archiver

# List of sources, examples, objects and targets
include make/sources
include make/examples
include make/objects
include make/all_targets

# Phony targets
include make/phony

# Special variables

.DEFAULT_GOAL := libraries
.PHONY: $(phony_targets)
