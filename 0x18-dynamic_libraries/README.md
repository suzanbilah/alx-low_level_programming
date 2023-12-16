Dynamic Library README
Table of Contents
Introduction
Dynamic Libraries
What is a Dynamic Library?
How Does it Work?
Creating a Dynamic Library
Using a Dynamic Library
Environment Variable $LD_LIBRARY_PATH
Overview
Usage
Static vs. Shared Libraries
Basic Usage Commands
nm
ldd
ldconfig
Conclusion
Introduction
This README provides an overview of dynamic libraries, their creation, usage, and differences from static libraries. Additionally, it covers the use of the $LD_LIBRARY_PATH environment variable and basic commands (nm, ldd, ldconfig) for managing dynamic libraries.

Dynamic Libraries
What is a Dynamic Library?
A dynamic library, also known as a shared library, is a file containing compiled code that can be loaded and executed by a program at runtime. Unlike static libraries, dynamic libraries are not linked with the executable during compilation but are loaded dynamically when needed.

How Does it Work?
Dynamic libraries are linked to a program at runtime, allowing multiple programs to share a single copy of the library in memory. This promotes efficient use of system resources and facilitates updates without recompiling every dependent program.

Creating a Dynamic Library
To create a dynamic library, compile the source code with the -shared flag, indicating the intention to produce a shared library

Using a Dynamic Library
To use a dynamic library during compilation, include the library's header file and specify its location with the -l flag

At runtime, the dynamic linker searches for the library, and the environment variable $LD_LIBRARY_PATH helps in locating shared libraries.

Environment Variable $LD_LIBRARY_PATH
Overview
$LD_LIBRARY_PATH is an environment variable that specifies directories to search for shared libraries before the default system paths. It aids in locating dynamic libraries during runtime.

Usage
Set $LD_LIBRARY_PATH using the following command
Static vs. Shared Libraries
Static libraries are linked with the executable during compilation, resulting in a larger executable. In contrast, shared libraries are loaded at runtime, reducing redundancy and allowing multiple programs to share a single copy in memory.

Basic Usage Commands
nm
The nm command displays symbol information from object files or libraries. Use it to list symbols in a dynamic libraryldd
ldd shows shared library dependencies for an executable or dynamic library:

ldconfig
ldconfig updates the shared library cache, which is consulted by the dynamic linker to locate shared libraries:
