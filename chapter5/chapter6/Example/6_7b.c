#include<stdio.h>

void mystrcpy(char *p1,char *p2);

int main()
{

    char name[]="Samdani Mozumder";
    char copy[30];
    mystrcpy(name,copy);
    printf(copy);

    return 0;
}
void mystrcpy(char *p1,char *p2){
    while(*p1){
        *p2=*p1;
        p2++;
        p1++;
    }
    *p2='\0';
}