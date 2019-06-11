

 #include <stdio.h>

 int  lsearch(int [], int , int);

 int main()

{

     int sresult,i;

     int keyval,n,a[100];

     printf("\n enter size of arry\n");

     scanf("%d",&n);

     printf("\n enter the arry");

     for(i=0;i<n;i++)

     scanf("%d",&a[i]);

     printf("\n Enter key to be searched\n");

     scanf("%d",&keyval);

     sresult = lsearch(a,n,keyval);

     if (sresult >= 0)

     printf("\n Key found at array index %d\n", sresult);

     else

     printf("\n Key not found\n");

     return 0;

}

int lsearch(int arr[], int len, int key)

{

    int i;

   for (i=0; i < len; i++)

   {

       if (arr[i]==key)

      return i;

          }

        if (i == len) // key not found

        return -1;

}
