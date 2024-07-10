#include "mbed.h"

int main() {
    // Initialize variables
    int a = 10;
    int b = 20;
    int c = 30;
    int d, e;

    // Add values of a and b, store in d, and print d
    d = a + b;
    printf("Value of d (a + b): %d\n", d);

    // Subtract c from d, store in e, and print e
    e = d - c;
    printf("Value of e (d - c): %d\n", e);

    return 0;
}