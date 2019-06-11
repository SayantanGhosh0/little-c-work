/*so this program inputs from the code itself and distribute
it into its variables*/

#include<stdio.h>

int main()
{
    char info[] = "Trivandrum Kerala 100000";

    char city[25];
    char state[25];
    int pop;
    sscanf(info,"%s %s %d", city,state,&pop);
    printf("%d people live in %s %s",pop,city,state);
    return 0;
}
