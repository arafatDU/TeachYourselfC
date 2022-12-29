#include<stdio.h>

int main()
{

    char space[100],str[100],*ptr,*ptr2;
    gets(space);
    ptr=space;
    ptr2=str;

    while(*ptr){
        if(*ptr==32){
            while(*ptr){
                *ptr2++=*++ptr;
                
            }
            *ptr2='\0';
            break;
        }
        ptr++;
    }
    
    printf(str);

    return 0;
}