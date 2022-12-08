#include<stdio.h>
#include<conio.h>
int main(){
    char letter;
    char smallest='z';
    for(int i=0;i<10;i++){
        letter=getche();
        if(smallest>letter)
        {
            smallest=letter;
        }
    }

    printf("\nThe smallest character is %c",smallest);

return 0;
}