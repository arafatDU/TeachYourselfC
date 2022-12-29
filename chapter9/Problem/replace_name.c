#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp,*temp;

    char buffer[80];
    char replace[80];
    int replace_line = 0;

    printf("Replace line number: ");
    scanf("%d", &replace_line);

    fflush(stdin);

    printf("New Name: ");
    fgets(replace, 80 , stdin);

    fp = fopen("result.txt", "r");
    temp = fopen("tempfile.txt", "w");

    if(fp == NULL || temp ==NULL){
        printf("Error openning files.\n");
        return 1;
    }

    int keep_reading = 1;
    int current_line = 1;

    do{
        fgets(buffer, 80, fp);

        if(feof(fp)) keep_reading = 0;
        else if(current_line == replace_line) fputs(replace, temp);
        else fputs(buffer,temp);

        current_line++;

    } while(keep_reading);

    fclose(fp);
    fclose(temp);

    remove("result.txt");
    rename("tempfile.txt", "result.txt");

}