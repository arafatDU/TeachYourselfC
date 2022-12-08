#include<stdio.h>
#include<conio.h>
int main()
{

    float i;
    char ch;
    printf("Compute tip:");

    for(i=1.0;i<=100.0;i++){
        printf("%f %f %f %f\n",i,i+i*0.1,i+i*0.15,i+i*0.2);
        printf("More?(Y/N):");
        ch=getche();
        printf("\n");
        if(ch=='N') break;
    }

    return 0;
}