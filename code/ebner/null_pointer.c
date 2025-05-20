#include <stdio.h>


int main() {
    
    int *pointer = NULL;

    *pointer = 42; // Segmentation fault 

    return *pointer;

}

