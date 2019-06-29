# cpp-config-parser

A simple utility for parsing custom configuration files in C++.

Any text file can be read, as long as it's in the form of:
PARAMATER_NAME VALUE

Parameters and values are separated by whitespace.

Use # to make comments. Comments can be made at the end of lines or can have an entire line.

Blank lines are ignored.

You can use this simply by including ConfigParser.hpp (i.e., ConfigParser.cpp and ConfigParser.h aren't needed, they're just here in case you want them).

### Demo Files

Compile the demo files with the makefile. The run them using:

`./demo demo.cfg`

`./demo2 demo2.cfg`
