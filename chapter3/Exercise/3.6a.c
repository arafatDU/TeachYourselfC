#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    for(num=2;num<=1000;num++){
        for(int i;i<=num/2;i++){
           if(num%i!=0){
            printf("%d ",num);
           }
        }
    }

    return 0;
}