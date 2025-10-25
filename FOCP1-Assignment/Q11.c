#include<stdio.h>
int main(){
    int arr[10],a=0,b=0;
    int even_array[10],odd_array[10];
    for(int i=0 ; i<10 ; i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int k=0 ; k<10 ; k++){
        if(arr[k]%2==0){
            even_array[a]=arr[k];
            a=a+1;
        }
        else{
            odd_array[b]=arr[k];
            b=b+1;
        }
    }
    printf("Even Array");
    for(int p=0 ; p<a ; p++){
        printf("%d\n",even_array[p]);
    }
    printf("Odd Array");
    for(int l=0 ; l<b ; l++){
        printf("%d\n",odd_array[l]);
    }
    return 0;
}
