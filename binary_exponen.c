#include<stdio.h>
#include<math.h>

int main()
{
    //Program to Find x^n using binary exponentiation
    double x; //base
    int n; //power
    double ans = 1; //final answer
    int power2 =0; //to keep track of power of 2

    printf("Input x and n:\n");
    scanf("%lf %d", &x, &n);


    while(n){
        ans *= pow(x, (double)((n%2)*(pow(2, power2))));    
        n /= 2;
        power2++;
    }
    
    printf("x^n = %lf\n", ans);
    
    
    return 0;
}
