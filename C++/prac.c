#include <stdio.h>
#include <stdint.h>

int main(){
    int8_t a,b;
    a=0x00000001;
    b=0b00000010;
    printf("%i",a+b);
    return 0;
}