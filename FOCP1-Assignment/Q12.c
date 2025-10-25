#include<stdio.h>
int main(){
    int arr[10],a;
    for(int i=0 ; i<10 ; i++){
        printf("Enter the %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    a=arr[0];
    for(int j=0 ; j<10 ; j++){
        if(arr[j]>a){
            a=arr[j];
        }
    }
    printf("The Maximum Score is %d\n",a);
    for(int l=0 ; l<10 ; l++){
        if(a>arr[l]){
            a=arr[l];
        }
    }
    printf("The Minimum Score is %d",a);
    return 0;
}
