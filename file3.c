#include <stdio.h>

int main()
{
        FILE *fp;
    fp=fopen("file.txt","w+");

    fputs("Its me Sayantan Ghosh",fp);

    fseek(fp,0,SEEK_END);

    fputs("Its me Sayantan Ghosh SECOND",fp);

    fclose(fp);
    return 0;
}
