#include<stdio.h>
#include<string.h>

int main()
{

    char name[80]="Pointers is easy";
    char copy[80];
    char *p1,*p2;

    p1=name+strlen(name)-1;
    p2=copy;

    while(p1>=name){
        *p2=*p1;
        p2++;
        p1--;
    }
    *p2='\0';

    printf("Copied string:%s\n",copy);

    return 0;
}