#include<stdio.h>
int main(){
    int arr[10],b=0;
    for(int i=0 ; i<10 ; i++){
        printf("Enter %d Element : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<10 ; i++){
        if(arr[i]==99){
            printf("Index Value for the first occurence of 99 is %d",i);
            b=1;
            break;
        }
    }
    if(b==0){
        printf("Element 99 not present in Array");
    }
    return 0;
}
