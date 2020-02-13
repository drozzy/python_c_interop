## Python + C

Using ctypes, provides two examples of interop between Python and C.

# Hello example

Uses gcc (c only). Run by:

    sh compile_hello.sh
    python hello.py

# Outer/inner example

Uses g++ (and uses extern to force func to be available under same name). Run by:

    sh compile_inner.sh
    python outer.py