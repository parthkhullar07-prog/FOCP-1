#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d=0;
    double e=0.0;
    printf("Enter Number");
    scanf("%d",&a);
    b=a;
    while(a!=0){
        a=a/10;
        d=d+1;
    }
    a=b;
    while(a!=0){
        c=a%10;
        e=e+pow(c,d);
        a=a/10;
    }
    if((int)e==b){
        printf("Armstrong Number %d",b);
    }
    else{
        printf("Not Armstrong Number %d",b);
    }
    return 0;
}
