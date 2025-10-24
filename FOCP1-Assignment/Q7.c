#include<stdio.h>
int main(){
    for(int i=1 ; i<=5 ; i++){
        for(int j=0 ; j<i ; j++){
            printf("%d",j%2);
        }
        for(int k=5 ; k>i ; k--){
            printf(" ");
        }
        for(int l=5 ; l>i ; l--){
            printf(" ");
        }
        for(int t=0 ; t<i ; t++){
            printf("%d",t%2);
        }
        printf("\n");
    }
    return 0;
}
