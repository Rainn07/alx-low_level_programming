#!bin/bash
#Complie each .c file into an object file
for file in *.c; do
	gcc -c "$file"
done

ar rcs liball.a *.o
