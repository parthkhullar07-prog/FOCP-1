#include<stdio.h>
int main(){
    int a;
    while(1){
        printf("1.Temporary Variable\n2.Arithmetic Operation\n3.Bitwise Operator\n4.Pointer Manipulation\n5.Break");
        scanf("%d",&a);
        if (a==1){
            int b,c,d;
            printf("Enter First Number : ");
            scanf("%d",&b);
            printf("Enter Second Number : ");
            scanf("%d",&c);
            d=b;
            b=c;
            c=d;
            printf("First Number %d , Second Number %d\n",b,c);

        }
        else if(a==2){
            int b,c;
            printf("Enter First Number : ");
            scanf("%d",&b);
            printf("Enter Second Number : ");
            scanf("%d",&c);
            b=b+c;
            c=b-c;
            b=b-c;
            printf("First Number %d , Second Number %d\n",b,c);
        }
        else if(a==3){
            int b,c;
            printf("Enter First Number : ");
            scanf("%d",&b);
            printf("Enter Second Number : ");
            scanf("%d",&c);
            b = b ^ c;
            c = b ^ c;
            b = b ^ c;
            printf("First Number %d , Second Number %d\n",b,c);
        }
        else if(a==4){
            int b,c;
            printf("Enter First Number : ");
            scanf("%d",&b);
            printf("Enter Second Number : ");
            scanf("%d",&c);
            int *Addb=&b;
            int *Addc=&c;
            int d;
            d=*Addc;
            *Addc=*Addb;
            *Addb=d;
            printf("First Number %d , Second Number %d\n",*Addb,*Addc);
        }
        else{
            break;
        }
    }
    return 0;
}
