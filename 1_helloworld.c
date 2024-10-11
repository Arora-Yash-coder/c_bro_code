// Include is a preprocessor command which tells the compiler to include the contents of a file.
// stdio.h contains some useful i/o functions.
#include <stdio.h>

// Entry point of the program.
// Anything within the main fucntion is read procedurally
int main() {

    // \n is and escape sequence for a new line character.
    printf("I Like Pizza.\n");
    printf("It's really good.");

    // This returns the exit status of our program.
    // If there is an error we return -1.
    return 0;
}

// Some extra notes: 
// To check out the version of gcc compiler run gcc --version to find out the version of your c compiler.
// Change the active working directory to the folder containing the c file.
// Compile the c file using command gcc filename.c
// run the compiled file using command filename.exe