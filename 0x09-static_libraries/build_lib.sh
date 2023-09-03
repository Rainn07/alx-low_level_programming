#!/bin/bash

# Array of function source files
source_files=(
0-isupper.c
1-isdigit.c
100-atoi.c
2-strncpy.c
3-strspn.c
4-strpbrk.c
9-strcpy.c
0-memset.c
1-memcpy.c
2-strchr.c
3-islower.c
4-isalpha.c
5-strstr.c
0-strcat.c
1-strncat.c
2-strlen.c
3-strcmp.c
4-puts.c
6-abs.c
_putchar.c
)

# Output library name
output_library=libmy.a

# Compile each source file into an object file
for source_file in "${source_files[@]}"; do
  object_file="${source_file%.c}.o"
  gcc -c "$source_file" -o "$object_file"
  if [ $? -ne 0 ]; then
    echo "Compilation of $source_file failed."
    exit 1
  fi
done

# Create the static library
ar rcs "$output_library" "${source_files[@]%.c}.o"

# Clean up: Remove the object files
rm -f "${source_files[@]%.c}.o"

