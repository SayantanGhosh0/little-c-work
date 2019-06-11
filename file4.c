#include<stdio.h>

int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    if(argc !=2)
    {
        printf("File name not entered");
        return 0;
    }

    if((fp = fopen(argv[1],"w+"))==NULL)
    {
        printf("File couldn't be created");
        return 0;
    }

    do
    {
        ch = getchar();
        fputc(ch,fp);
    }while(ch!='$');

    rewind(fp);

    ch= fgetc(fp);

    while(ch!=EOF)
    {
        putchar(ch);
        ch=fgetc(fp);
    }

    fclose(fp);

    return 0;
}
