#include<stdio.h>

float a[5]={1.0,2.0,3.0,4.0,5.0};

int main()
{
        float sum = 0,avg;
        int i;

        for(i=0;i<5;i++)
        {
            sum+=*(a+i);
        }
        avg=sum/5;

        printf("\n The average of values: %f",avg);

        for(i=0;i<5;i++)
        {
            printf("\nDeviation from avg for value %d is %f",i+1,*(a+i)-avg);
        }
}
