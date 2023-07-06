#include <stdio.h>

void __attribute__((section(".gnu.warning"))) strip_warning() {
    system("strip iamafile");
}

int main() {
    printf("This is a C program.\n");
    return 0;
}
