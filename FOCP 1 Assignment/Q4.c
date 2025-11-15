#include<stdio.h>
int main(){
    int x;
    while(1){
        printf("1.Temporary Variable\n2.Arithmetic Operation\n3.Bitwise Operator\n4.Pointer Manipulation\n5.Break");
        scanf("%d",&x);
        if (x==1){
            int y,z,s;
            printf("Enter First Number : ");
            scanf("%d",&y);
            printf("Enter Second Number : ");
            scanf("%d",&z);
            s=y;
            y=z;
            z=s;
            printf("First Number %d , Second Number %d\n",y,z);

        }
        else if(x==2){
            int y,z;
            printf("Enter First Number : ");
            scanf("%d",&y);
            printf("Enter Second Number : ");
            scanf("%d",&z);
            y=y+z;
            z=y-z;
            y=y-z;
            printf("First Number %d , Second Number %d\n",y,z);
        }
        else if(x==3){
            int y,z;
            printf("Enter First Number : ");
            scanf("%d",&y);
            printf("Enter Second Number : ");
            scanf("%d",&z);
            y = y ^ z;
            z = y ^ z;
            y = y ^ z;
            printf("First Number %d , Second Number %d\n",y,z);
        }
        else if(x==4){
            int y,z;
            printf("Enter First Number : ");
            scanf("%d",&y);
            printf("Enter Second Number : ");
            scanf("%d",&z);
            int *Addy=&y;
            int *Addz=&z;
            int s;
            s=*Addz;
            *Addz=*Addy;
            *Addy=s;
            printf("First Number %d , Second Number %d\n",*Addy,*Addz);
        }
        else{
            break;
        }
    }
    return 0;
}
