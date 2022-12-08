#include<stdio.h>
#include<conio.h>

int main()
{   
    char ch;
    for(int i=1;i<=10;i++){
        printf("\nEnter a letter:");
        ch=getche();

        for(int i=1;i<=ch;i++){
            printf("%c ",'.');
        }
    }

    return 0;
}