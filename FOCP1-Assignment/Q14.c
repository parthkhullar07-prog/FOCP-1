#include<stdio.h>
int main(){
    int n,a,c=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0 ; j<n ; j++){
        a=1;
        if(arr[j]<=1){
                a=0;
                break;
            }
        for(int k=2 ; k<arr[j] ; k++){
            if(arr[j]%k==0){
                a=0;
                break;
            }        
        }
        if(a==1){
            c++;
        }
    }
    printf("The Count of Prime Numbers is %d",c);
    return 0;
}
