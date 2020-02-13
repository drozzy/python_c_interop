from ctypes import cdll, c_int
from ctypes import c_char_p

inner_lib = cdll.LoadLibrary("inner.so")

for i in range(10):
    inner_lib.do_inner_stuff(i)

# Wrong way:
# print(inner_lib.state)

# Right way:
state = c_int.in_dll(inner_lib, "state")
print("State variable is:")
print(state.value)

print("Modifying state to 1000:")
state.value = 1000

print("Calling do_inner_stuff with i=1: ")
inner_lib.do_inner_stuff(1)