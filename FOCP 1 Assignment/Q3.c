#include<stdio.h>
int main(){
    int x, y,z;
    printf("Enter first number");
    scanf("%d", &x);
    printf("Enter second number");
    scanf("%d", &y);
    z = x+(~y+1);
    printf("The difference is %d", z);
    return 0;

}
