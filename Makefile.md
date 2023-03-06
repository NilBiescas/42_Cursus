The "-MMD" option is used with the compiler to generate dependencies for each object file. 
It generates a separate dependency file for each source file, with a ".d" extension. 
The purpose of these dependency files is to track the dependencies between source files and header files.
When a C source file includes a header file, the compiler needs to know about the dependencies between 
these files to build the project correctly. By using the "-MMD" option, the compiler generates a dependency 
file for each source file that lists the header files it depends on.This dependency information 
is then used by the Makefile to determine which source files need to be recompiled when a header 
file changes. If a header file has been modified since the last time the project was compiled, 
the Makefile will know which source files depend on that header file and will rebuild those source files as necessary.
Overall, using the "-MMD" option is a useful way to track dependencies between source files and header 
files and ensure that your project is built correctly even when header files change.
