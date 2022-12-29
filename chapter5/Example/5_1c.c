#include<stdio.h>
#include<conio.h>

int main(void){
    int msg[80], i;

    printf("Enter message(less than 80 characters)\n");
    for ( i = 0; i < 80; i++)
    {
        msg[i]= getche();
        if(msg[i] == '\r') break;
    } 
    printf("--------------\n");
    for ( i = 0; msg[i] != '\r'; i++) printf("%c", msg[i]+1);
    
    

    return 0;
}