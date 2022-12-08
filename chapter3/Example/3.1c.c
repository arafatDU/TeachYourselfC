#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Do you wish to continue? Y/n:");
    ch=getche();
    if(ch=='Y'){
        printf("\n#Installing-----------\n");
        printf("60%%-------------------");
    }
    else{
        printf("\nProcess Stopped!");
    }
    return 0;
}