## Python + C

Using ctypes, provides two examples of interop between Python and C.

- hello.c and compile_hello.sh - uses gcc (c only)
- inner.c and outer.py - uses g++ (and uses extern to force func to be available under same name)
