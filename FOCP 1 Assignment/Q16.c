#include<stdio.h>
int main(){
    int x,y,z,s;
    int arr[10]={1,2,3,4,5,6,7};
    while(1){
    printf("1.Front \n2.Middle \n3.End \n4.Exit");
    scanf("%d",&x);
    z=sizeof(arr)/sizeof(arr[0]);
    if(x==1){
        printf("Before Insertion\n");
        for(int i=0 ; i<z ;i++){
            printf("%d\n",arr[i]);
        }
        for(int j=z-1 ; j>=0 ;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=90;
        printf("After Insertion\n");
        for(int k=0 ; k<z ; k++){
            printf("%d\n",arr[k]);
        }
    }
    else if(x==2){
        printf("Enter the index value where the number is to be added : ");
        scanf("%d",&y);
        printf("Before Insertion\n");
        for(int i=0 ; i<z ; i++){
            printf("%d\n",arr[i]);
        }
        for(int j=z-1 ; j>y ; j--){
            arr[j]=arr[j-1];
        }
        arr[y]=90;
        printf("After Insertion\n");
        for(int k=0 ;k<z ; k++){
            printf("%d\n",arr[k]);
        }
    }
    else if(x==3){
        printf("Before Insertion\n");
        for(int i=0 ; i<z ; i++){
            printf("%d\n",arr[i]);
        }
        printf("Enter the Last Element : ");
        scanf("%d",&s);
        arr[z-1]=s;
        printf("After Insertion\n");
        for(int j=0 ; j<z ; j++){
            printf("%d\n",arr[j]);
        }
    }
    else{
        break;
    }
    }
    return 0;
}
