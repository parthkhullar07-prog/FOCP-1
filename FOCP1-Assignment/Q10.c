#include<stdio.h>
int main(){
    int marks[10],b=0;
    for(int i=0 ; i<10 ; i++){
        printf("Enter %d Marks : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0 ; i<10 ; i++){
        if(marks[i]==99){
            b=b+1;
            printf("Student %d\n",i+1);  
        }
    }
    if(b==0){
        printf("No Studnet scored 99 marks");
    }
    else{
        printf("The Number of Students who scored 99 marks are %d",b);
    }
    return 0;
}
