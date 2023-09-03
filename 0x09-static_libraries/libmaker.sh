#!/bin/bash

# Name of the output library
output_lib="libmy.a"

# List of object files
obj_files=(
    "0-isupper.o"
    "1-isdigit.o"
    "100-atoi.o"
    "2-strncpy.o"
    "3-strspn.o"
    "4-strpbrk.o"
    "9-strcpy.o"
    "0-memset.o"
    "1-memcpy.o"
    "2-strchr.o"
    "3-islower.o"
    "4-isalpha.o"
    "5-strstr.o"
    "0-strcat.o"
    "1-strncat.o"
    "2-strlen.o"
    "3-strcmp.o"
    "4-puts.o"
    "6-abs.o"
)

# Check if there are any object files
if [ ${#obj_files[@]} -eq 0 ]; then
    echo "No object files found in the current directory."
    exit 1
fi

# Create the library from object files
ar rcs "$output_lib" "${obj_files[@]}"

# Check if the library was successfully created
if [ $? -eq 0 ]; then
    echo "Library '$output_lib' created successfully."
else
    echo "Error creating library '$output_lib'."
    exit 1
fi

