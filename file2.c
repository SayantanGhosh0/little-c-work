#include<stdio.h>

int main()
{
        FILE *fp;
    fp=fopen("file.txt","w+");

    fputs("Its me Sayantan Ghosh",fp);

    fseek(fp,+10,SEEK_CUR);

    fputs("Its me Sayantan Ghosh SECOND",fp);

    fseek(fp,-5,SEEK_END);

    fputs("It's Me SAYANTAN GHOSH 3rd",fp);
    fclose(fp);
    return 0;
}
