# Basics

## C, C++ 
GCC stands for GNU compiler collection.

---
`gcc file.c -o file`     #compile c file and link it

`./file `                #execute the c code

===

`g++ file.cpp -o file`   #compile c++ file and link it

[if there are several cpp files, then `g++ file1.cpp file2.cpp -o file`]

`./file `                #execute the c++ code


---
`g++ -c file.cpp`        #compile cpp without building, this will generate object file file.o

`g++ file.o -o file`     #make object file executable

`./file`                 #execute the c++ file

