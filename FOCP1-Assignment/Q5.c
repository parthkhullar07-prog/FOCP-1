#include<stdio.h>
int main(){
    int a,b;
    printf("Enter X Coordinate : ");
    scanf("%d",&a);
    printf("Enter Y Coordinate : ");
    scanf("%d",&b);
    if(a>0 && b>0){
        printf("The coordinate (%d,%d) lies in 1st Quadrant",a,b);
    }
    else if(a<0 && b>0){
        printf("The coordinate (%d,%d) lies in 2nd Quadrant",a,b);
    }
    else if(a<0 && b<0){
        printf("The coordinate (%d,%d) lies in 3rd Quadrant",a,b);   
    }
    else if(a>0 && b<0){
        printf("The coordinate (%d,%d) lies in 4th Quadrant",a,b);   
    }
    else{
        printf("The coordinate (%d,%d) is at origin",a,b);
    }
    return 0;
}
