library := linux
project := lib$(library)
architecture := x86_64
C.freestanding := yes

headers_library = $(call find,$(include_liblinux_directory),file?)

sources_library = $(call find,$(source_directory),file?)
sources_start = $(call find,$(start_architecture_directory),file?)
sources_examples = $(call glob,$(examples_directory)/*.c)

examples = $(basename $(notdir $(sources_examples)))

include make/file
