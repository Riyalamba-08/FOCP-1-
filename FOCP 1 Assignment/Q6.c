#include<stdio.h>
#include<math.h>
int main(){
    int x;
    while(1){
        printf("1.Binary -> Decimal\n2.Decimal -> Binary\n3.Break");
        scanf("%d",&x);
        if(x==1){
            int y;
            printf("Enter Binary Number : ");
            scanf("%d",&y);
            int s = 0, i = 0, r;
            while (y != 0){
                r = y % 10;
                s += r * pow(2, i);
                y /= 10;
                i++;
            }
        printf("Number in Decimal is %d\n",s);
        }
        else if(x==2){
            int s;
            printf("Enter Decimal Number : ");
            scanf("%d",&s);
            int y=0,r, i = 1;
            while (s != 0){
                r = s % 2;
                s /= 2;
                y += r * i;
                i *= 10;
            }
            printf("Number In Binary is %d\n",y);
        }
        else{
            break;
        }
    }
    return 0;
}
