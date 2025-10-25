#include<stdio.h>
int main(){
    int a,b,c,d;
    int arr[10]={1,2,3,4,5,6,7};
    while(1){
    printf("1.Front \n2.Middle \n3.End \n4.Exit");
    scanf("%d",&a);
    c=sizeof(arr)/sizeof(arr[0]);
    if(a==1){
        printf("Before Insertion\n");
        for(int i=0 ; i<c ;i++){
            printf("%d\n",arr[i]);
        }
        for(int j=c-1 ; j>=0 ;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=90;
        printf("After Insertion\n");
        for(int k=0 ; k<c ; k++){
            printf("%d\n",arr[k]);
        }
    }
    else if(a==2){
        printf("Enter the index value where the number is to be added : ");
        scanf("%d",&b);
        printf("Before Insertion\n");
        for(int i=0 ; i<c ; i++){
            printf("%d\n",arr[i]);
        }
        for(int j=c-1 ; j>b ; j--){
            arr[j]=arr[j-1];
        }
        arr[b]=90;
        printf("After Insertion\n");
        for(int k=0 ;k<c ; k++){
            printf("%d\n",arr[k]);
        }
    }
    else if(a==3){
        printf("Before Insertion\n");
        for(int i=0 ; i<c ; i++){
            printf("%d\n",arr[i]);
        }
        printf("Enter the Last Element : ");
        scanf("%d",&d);
        arr[c-1]=d;
        printf("After Insertion\n");
        for(int j=0 ; j<c ; j++){
            printf("%d\n",arr[j]);
        }
    }
    else{
        break;
    }
    }
    return 0;
}
