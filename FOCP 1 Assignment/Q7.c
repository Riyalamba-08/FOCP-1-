#include<stdio.h>
int main(){
    for(int i=1 ; i<=5 ; i++){
        for(int j=0 ; j<i ; j++){
            printf("%d",j%2);
        }
        for(int x=5 ; x>i ; x--){
            printf(" ");
        }
        for(int y=5 ; y>i ; y--){
            printf(" ");
        }
        for(int z=0 ; z<i ; z++){
            printf("%d",z%2);
        }
        printf("\n");
    }
    return 0;
}
