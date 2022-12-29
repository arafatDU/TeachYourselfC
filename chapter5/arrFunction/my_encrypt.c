#include<stdio.h>

void my_encrypt(char *p);

int main() {
    char pass[80];

    printf("Enter your Password: ");
    scanf("%s",pass);

    my_encrypt(pass);
    printf("%s",pass);

    return 0;
}


void my_encrypt(char *p){
    for(int i=0; p[i] != '\0'; i++) {
        p[i] += 5;
        if(p[i] > 'z') p[i] -= 26;
    }
}