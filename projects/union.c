#include <stdio.h>

// Define a union named MyUnion
union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Declare a variable of type MyUnion
    union MyUnion myVar;

    // Access and assign values to members
    //u can acces a varibale one at a time run and find error
    myVar.intValue = 42;
     myVar.floatValue = 3.14;
    myVar.charValue = 'A';
    printf("%d",myVar.intValue);
// The members share the same memory space
    printf("Size of MyUnion: %lu bytes\n", sizeof(union MyUnion));

    return 0;
}
