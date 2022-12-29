#include<stdio.h>

void my_decrypt(char *p);

int main() {
    char pass[80];

    printf("Enter Decrypted Password: ");
    scanf("%s",pass);

    my_decrypt(pass);
    printf("%s",pass);

    return 0;
}


void my_decrypt(char *p){
    for(int i=0; p[i] != '\0'; i++) {
        p[i] -= 5;
        if(p[i] < 'a') p[i] += 26;
    }
}