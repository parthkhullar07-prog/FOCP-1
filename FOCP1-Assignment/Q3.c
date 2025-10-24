#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);
    c=a+(~b+1);
    printf("The Difference is %d",c);
    return 0;
}
