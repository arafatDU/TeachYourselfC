#include<stdio.h>
#include<conio.h>

int main()
{

    char ch;
    int num=0,punc=0,letter=0;
    printf("Enter a character(enter to stop):");

    do{
        ch=getche();

        switch(ch){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                     num++;
                     break;
            case '.':
            case ',':
            case '?':
            case '!':
            case ';':
            case ':':
                     punc++;
                     break;
            default:
                    letter++;
        }
    }while(ch!='\r');

    printf("%d digits\n",num);
    printf("%d punctuation marks\n",punc);
    printf("%d letters\n",letter);

    return 0;
}