#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x; //*ptr ==> pointer var jiska kaam kisi hor var ka address store kre...

    printf("Address of x : %p\n", ptr); // %p se hexadecimal me address ayga
    printf("Address of x : %u\n", ptr); // %u se sirf no milnege address me 

    printf("Value of x : %u\n", x);
    printf("Value of x : %u\n", *ptr);
    
    return 0;
}