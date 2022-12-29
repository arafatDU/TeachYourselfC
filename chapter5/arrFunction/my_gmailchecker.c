#include<stdio.h>

int my_gmailchecker(char *p);

int main() {
    char mail[100];
    printf("\t\t#########################\n\t\t|\tLog In\t\t|\n\t\t#########################\n\n Email: ");
    scanf("%s",mail);
    

    if(my_gmailchecker(mail)) printf("Email Format is Correct\n");
    else printf("Email Format is Incorrect\n");

    return 0;

}

int my_gmailchecker(char *p) {
    int index,flag1=0,flag2=0;
    for(int i=0; p[i] != '\0'; i++) {
        if(p[i] == '@') {
            index =i;
            flag1 = 1;
        }
    }
    if(flag1 && p[index+1]=='g' && p[index+2]=='m' && p[index+3]=='a' && p[index+4]=='i' && p[index+5]=='l' && p[index+6]=='.' && p[index+7]=='c' && p[index+8]=='o' && p[index+9]=='m') flag2=1;

    return flag2;  
}