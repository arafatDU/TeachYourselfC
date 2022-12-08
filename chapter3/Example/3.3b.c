#include<conio.h>
#include<stdio.h>
int main(){
    int i;

    printf("Enter an Integer: ");
    scanf("%d",&i);

    for(;i;i--) printf("%d ",i);//if i reaches the value 0,the code ends.

    return 0;   
}