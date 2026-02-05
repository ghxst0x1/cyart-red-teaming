#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void secret_function() {
    printf("\n[+] Success! Control flow hijacked. Access granted.\n");
    exit(0);
}

void vulnerable() {
    char buffer[64];
    printf("Enter input: ");
    read(0, buffer, 200); 
}

int main() {
    vulnerable();
    printf("Exiting normally.\n");
    return 0;
}
