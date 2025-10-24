#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);
    for(int i=1 ; i<=a && i<=b ; i++){
        if(a%i==0 && b%i==0 && i>c){
            c=i;
        }
    }
    printf("HCF is %d",c);
    return 0;
}
