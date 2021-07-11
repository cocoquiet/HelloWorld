#include <stdio.h>

int main() {
    float helloWorld[4] = {
        0x1.D8CA90p+89,
        0x1.AE40DEp+95,
        0x1.C8D8E4p-61,
        0x0.000000p+00,
    };

    printf("%s", helloWorld);
}