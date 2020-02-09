# DynObjLoader
A cross-platform library for dynamic loading of pre-compiled C++ objects. You can use this to develop loadable plugins into your project. The plugins should be built for the same OS and then loaded using this library.

This project is provides a C++ wrapper around "dlfcn.h" to enable loading binaries into the code-space of programs using this library. For windows, we use "dlfcn-win32", an implementation of dlfcn for Windows, form (here)[https://github.com/dlfcn-win32/dlfcn-win32].  


## Installation

For Linux or MacOS, just use the header file "DynObjectLoader.h".
It contains the C++ wrapper for the dynamic loading of objects.

For Windows, first, use the provided MS Visual Studio project file to build the static-link library.
Once built, the static-link library will be locaed in the (./lib/) folder.
In your project, use the header file "DynObjectLoader.h" in the (./include/) folder and link against the library.


## Quick-start Example

In the provided example in (./example/), we load (instantiate) a pre-compiled C++ class (MyObject.bin) within another program (loader.exe). The loader and loaded object should however agree on the base type, which is in this clase a base class named (ObjectBase).

