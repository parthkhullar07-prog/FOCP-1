#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0 ;i<a;i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0 ; j<a ; j++){
        if(j==0){
            if(arr[j]>arr[j+1]){
                printf("%d\n",arr[j]);
            }
        }
        else if(j>0 && j<a-1){
            if(arr[j]>arr[j+1] && arr[j]>arr[j-1]){
                printf("%d\n",arr[j]);
            }
        }
        else{
            if(arr[j]>arr[j-1]){
                printf("%d\n",arr[j]);
            }
        }
    }
    return 0;
}
