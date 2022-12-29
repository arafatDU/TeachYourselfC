#include<stdio.h>

void mystrcat(char *p1,char *p2);

int main()
{

    char first_name[50]="Samdani ";
    char last_name[]="Mozumder";
    mystrcat(first_name,last_name);
    printf(first_name);

    return 0;
}
void mystrcat(char *p1,char *p2){
    while(*p1){
        p1++;
    }
    while(*p2){
        *p1++=*p2++;
    }
    *p1='\0';


}