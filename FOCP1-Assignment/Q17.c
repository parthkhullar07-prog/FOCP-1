#include<stdio.h>
int main(){
    int a,b,c;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    b=sizeof(arr)/sizeof(arr[0]);
    while(1){
        printf("1.Delete from start\n2.Delete from middle\n3.Delete from end\n4.Exit");
        scanf("%d",&a);
        if(a==1){
            printf("Before Deletion\n");
            for(int i=0 ; i<b ; i++){
                printf("%d\n",arr[i]);
            }
            for(int i = 0 ; i < b ; i++){
                arr[i]=arr[i+1];
            }
            arr[b-1]=0;
            printf("After Deletion\n");
            for(int i=0 ; i<b ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else if(a==2){
            printf("Before Deletion\n");
            for(int i=0 ; i<b ; i++){
                printf("%d\n",arr[i]);
            }
            printf("Enter the index of the elment to be deleted : ");
            scanf("%d",&c);
            for(int i=c ; i<b ; i++){
                arr[i]=arr[i+1];
            }
            arr[b-1]=0;
            printf("After Deletion\n");
            for(int i=0 ; i<b ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else if(a==3){
            printf("Before Deletion\n");
            for(int i=0 ; i<b ; i++){
                printf("%d\n",arr[i]);
            }
            arr[b-1]=0;
            printf("After Deletion\n");
            for(int i=0 ; i<b ; i++){
                printf("%d\n",arr[i]);
            }
        }
        else{
            break;
        }
    }
    return 0;
}
