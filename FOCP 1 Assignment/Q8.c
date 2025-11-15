#include<stdio.h>
int main(){
    int n,x=0,y=1,z;
    printf("Enter The number till which you want the series : ");
    scanf("%d",&n);
    for(int i =1 ; i<=n ;i++){
        printf("%d ",x);
        z=x+y;
        x=y;
        y=z;
    }
    return 0;
}
