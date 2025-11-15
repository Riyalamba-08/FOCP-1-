#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n],x;
    for(int i=0 ; i<n ; i++){
        printf("Enter %d Element : ",i);
        scanf("%d",&arr[i]);
    }
    x=arr[n-1];
    for(int j=n-1 ; j>=0 ; j--){
        arr[j]=arr[j-1];
    }
    arr[0]=x;
    for(int k=0 ; k<n ; k++){
        printf("%d\n",arr[k]);
    }
    return 0;
}
