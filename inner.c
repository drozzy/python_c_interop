// Removed the main function and only kept the state and inner functions.
// Python should loop and call the inner function with the appropriate value.

#include <stdio.h>  
#include<math.h>

// Nasty business needed to make this function be visible under the SAME
// name in python, otherwise c++ will mangle it. 
extern "C" {
   void do_inner_stuff(int i);
}

int state = 0;

void do_inner_stuff(int i){
    state += i;
    printf("State is: %d\n", state);
}