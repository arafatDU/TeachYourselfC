#include<stdio.h>

int main()
{

    char text[][80]={
        "when","in","the",
        "course","of","human",
        "events",""
    };

    for(int i=0;text[i][0]!='\0';i++){
        for(int j=0;text[i][j]!='\0';j++){
            printf("%c ",text[i][j]);
        }
    }

    return 0;
}