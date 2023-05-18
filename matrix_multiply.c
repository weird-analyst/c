#include<stdio.h>

int main(){
    //Defining Elemenets of Matrix A and B
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    int b11, b12, b13, b21, b22, b23, b31, b32, b33;

    //Inputting Matrix A
    scanf("%d %d %d %d %d %d %d %d %d", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);

    //Inputting Matrix B
    scanf("%d %d %d %d %d %d %d %d %d", &b11, &b12, &b13, &b21, &b22, &b23, &b31, &b32, &b33);

    //D = (A*A') + (B*B')
    //Defining Elements of Matrix D
    int d11, d12, d13, d21, d22, d23, d31, d32, d33;

    //Computing D
    d11 = (a11*a11 + a12*a12 + a13*a13) + (b11*b11 + b12*b12 + b13*b13); 
    /*
    
        SIMILIARLY DECLARE OTHERS 
    
    */

    //To print Matrix D
    printf("%d %d %d\n%d %d %d\n%d %d %d", d11, d12, d13, d21, d22, d23, d31, d32, d33);

    return 0;

}