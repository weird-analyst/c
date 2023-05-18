#include<stdio.h>

long long int factorial(int n){
    if(n==1) return(1);
    else return(n*factorial(n-1));
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("The factorial of %d is %lld", n, factorial(n));
    return 0;
}
