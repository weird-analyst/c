#include<stdio.h>


int main()
{
    int hello = 5;
    int *hp = &hello;
    printf("%p\n", hp);
    return 0;
}
