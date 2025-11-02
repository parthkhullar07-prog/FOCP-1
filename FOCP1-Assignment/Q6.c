#include<stdio.h>
#include<math.h>
int main(){
    int a;
    while(1){
        printf("1.Binary -> Decimal\n2.Decimal -> Binary\n3.Break");
        scanf("%d",&a);
        if(a==1){
            int b;
            printf("Enter Binary Number : ");
            scanf("%d",&b);
            int d = 0, i = 0, r;
            while (b != 0){
                r = b % 10;
                d += r * pow(2, i);
                b /= 10;
                i++;
            }
        printf("Number in Decimal is %d\n",d);
        }
        else if(a==2){
            int d;
            printf("Enter Decimal Number : ");
            scanf("%d",&d);
            int b=0,r, i = 1;
            while (d != 0){
                r = d % 2;
                d /= 2;
                b += r * i;
                i *= 10;
            }
            printf("Number In Binary is %d\n",b);
        }
        else{
            break;
        }
    }
    return 0;
}
