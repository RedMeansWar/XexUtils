# XexUtils
XexUtils is a library to make XEX applications and/or libraries.

## Installation

### With a pre-compiled binary
- Download the latest binary and header files from the [releases](https://github.com/ClementDreptin/XexUtils/releases).
- Add `/path/to/XexUtils/lib` to `Configuration Properties > Linker > General > Additional Libary Directories`.
- Add `/path/to/XexUtils/include` to `Configuration Properties > C/C++ > General > Additional Include Directories`.

### Compiling from source
- Clone the repo:
```
git clone https://github.com/ClementDreptin/XexUtils /path/to/XexUtils
```
- Add it as project on Visual Studio:
Right click on the solution name in the solution explorer then `Add > Existing Project...` and select `XexUtils.vcxproj` in `/path/to/XexUtils`.
- Add it as a reference to your main project:
Right click on your main project in the solution explorer then `References... > Add New Reference...` and select `XexUtils`.
