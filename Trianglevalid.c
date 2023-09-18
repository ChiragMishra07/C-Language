#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the angle1 ");
    scanf("%d",&a);
    printf("Enter the angle2");
    scanf("%d",&b);
    printf("Enter the angle3 ");
    scanf("%d",&c);
    
    if((a+b+c)==180)
     printf("This is a valid triangle");
     else
    printf("This is an invalid triangle");
    
        
    return 0;
}
