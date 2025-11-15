#include<stdio.h>
int main(){
    int n,x,y=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0 ; j<n ; j++){
        x=1;
        if(arr[j]<=1){
                x=0;
                break;
            }
        for(int k=2 ; k<arr[j] ; k++){
            if(arr[j]%k==0){
                x=0;
                break;
            }        
        }
        if(x==1){
            y++;
        }
    }
    printf("The count of prime numbers is %d",y);
    return 0;
}
