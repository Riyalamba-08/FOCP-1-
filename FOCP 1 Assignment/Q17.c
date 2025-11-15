#include<stdio.h>
int main(){
    int x,y,z;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    y=sizeof(arr)/sizeof(arr[0]);
    while(1){
        printf("1.Delete from start\n2.Delete from middle\n3.Delete from end\n4.Exit");
        scanf("%d",&x);
        if(x==1){
            printf("Before Deletion\n");
            for(int i=0 ; i<y ; i++){
                printf("%d\n",arr[i]);
            }
            for(int i = 0 ; i < y ; i++){
                arr[i]=arr[i+1];
            }
            arr[y-1]=0;
            printf("After Deletion\n");
            for(int i=0 ; i<y ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else if(x==2){
            printf("Before Deletion\n");
            for(int i=0 ; i<y ; i++){
                printf("%d\n",arr[i]);
            }
            printf("Enter the index of the elment to be deleted : ");
            scanf("%d",&z);
            for(int i=z ; i<y ; i++){
                arr[i]=arr[i+1];
            }
            arr[y-1]=0;
            printf("After Deletion\n");
            for(int i=0 ; i<y ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else if(x==3){
            printf("Before Deletion\n");
            for(int i=0 ; i<y ; i++){
                printf("%d\n",arr[i]);
            }
            arr[y-1]=0;
            printf("After Deletion\n");
            for(int i=0 ; i<y ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else{
            break;
        }
    }
    return 0;
}
