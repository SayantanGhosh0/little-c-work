#include<stdio.h>

struct student{
    int age;
    char grade;
    char name[40];
};

struct marks{
    int mark[10];

};


typedef struct{
    int hour;
    int min;
    int sec;
}time;

int main()
{
    struct student s1;
    struct student s2;

    return 0;
}
