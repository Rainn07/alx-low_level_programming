#!/bin/bash

# Name of the output library
output_lib="liball.a"

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Check if there are any .c files
if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an object file
for source_file in $c_files; do
    object_file="${source_file%.c}.o"
    gcc -c "$source_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Compilation of $source_file failed."
        exit 1
    fi
    object_files+=("$object_file")
done

# Create the library from object files
ar rcs "$output_lib" "${object_files[@]}"

# Check if the library was successfully created
if [ $? -eq 0 ]; then
    echo "Library '$output_lib' created successfully."
else
    echo "Error creating library '$output_lib'."
    exit 1
fi

