#include<stdio.h>
#include<math.h>

int main(){

    double n;
    int power;
    int powerr;
    long long int ans = 1;
    int pow_2 = 0;



    scanf("%lf %d", &n, &power);

    while(power){

        ans = ans*pow(n,(double)(power%2)*pow(2,pow_2));

        pow_2 ++;
        power /= 2;
    }

    printf("%lld", ans);

    return 0;
}