#include <stdio.h>
#include <string.h>

int main () {
    char name[25]; //bytes
    int age;

    // & is the address of operator
    printf("\nWhat's your name?\n");
    scanf("%s", &name);
    // fgets(name, 25, stdin);      // To include white spaces in the input.
    // name[strlen(name)-1] = '\0'; // To get rid of the new line character add using the fgets function.

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old", age);
    return 0;
}