#include<stdio.h>
int main(){
    int arr[10],x=0,y=0;
    int even_array[10],odd_array[10];
    for(int i=0 ; i<10 ; i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int k=0 ; k<10 ; k++){
        if(arr[k]%2==0){
            even_array[x]=arr[k];
            x=x+1;
        }
        else{
            odd_array[y]=arr[k];
            y=y+1;
        }
    }
    printf("Even Array");
    for(int p=0 ; p<x ; p++){
        printf("%d\n",even_array[p]);
    }
    printf("Odd Array");
    for(int l=0 ; l<y ; l++){
        printf("%d\n",odd_array[l]);
    }
    return 0;
}
