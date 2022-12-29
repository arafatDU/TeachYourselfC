#include<stdio.h>
#include<string.h>

void my_encrypt(char *p);
void my_decrypt(char *p);
int my_gmailchecker(char *p);

struct student
{
    char name[80];
    int roll;
    float cgpa;
}bsse14[4],temporary;


int main() {
    
    char mail[]= "arafat@gmail.com";
    char pass[]= "helloiit";

    my_encrypt(pass);

    FILE *fp;
    fp = fopen("password.txt","w");

    fprintf(fp, "%s\n%s", mail,pass);

    fclose(fp);


    char user_mail[80], user_pass[40];

    printf("\t\t#########################\n\t\t|\tLog In\t\t|\n\t\t#########################\n\n");
    printf("---------------------\n*\n*-->Email: ");
    scanf("%s",user_mail);
    printf("*-->Password: ");
    scanf("%s",user_pass);


    char check_mail[80],check_pass[40];

    fp = fopen("password.txt","r");
    fscanf(fp,"%s",check_mail);
    fscanf(fp,"%s",check_pass);
    
    my_decrypt(check_pass);
    printf("\nFrom file:\n\t%s\n\t%s\n", check_mail,check_pass);

    fclose(fp);



    int flagm=0, flagp=0;
    if(!strcmp(check_mail,user_mail) && my_gmailchecker(user_mail)) flagm=1;
    else printf("Incorrect Gmail!\n");

    if(!strcmp(check_pass,user_pass)) flagp = 1;
    else printf("Incorrect Password\n");

    if(flagm && flagp) {
        printf("Log in successfully.\n");
        // now start main work ... calculate cgpa and sort the structure by cgpa
        //input from file and store in structure
        FILE *fpp;
        fpp = fopen("student.txt", "r");

        for(int i=0; i<4; i++){
            fscanf(fpp, "%s", bsse14[i].name);
            fscanf(fpp, "%d", &bsse14[i].roll);
            fscanf(fpp, "%f", &bsse14[i].cgpa);
        }
        fclose(fpp);

        //now sorting structure by cgpa wise
        for(int i=0; i<4; i++) {
            for(int j=i+1; j<4; j++){
                if(bsse14[i].cgpa < bsse14[j].cgpa) {
                    temporary = bsse14[i];
                    bsse14[i] = bsse14[j];
                    bsse14[j] = temporary;
                }
            }
        }

        // output in the same file as cgpa wise
        fpp = fopen("student.txt","w");

        for(int i=0; i<4; i++){
            fprintf(fpp, "%s %d %f\n", bsse14[i].name,bsse14[i].roll, bsse14[i].cgpa);
        }







    }





    return 0;
}


void my_encrypt(char *p){
    for(int i=0; p[i] != '\0'; i++) {
        p[i] += 1;
        //if(p[i] > 'z') p[i] -= 26;
    }
}


void my_decrypt(char *p){
    for(int i=0; p[i] != '\0'; i++) {
        p[i] -= 1;
        //if(p[i] < 'a') p[i] += 26;
    }
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
