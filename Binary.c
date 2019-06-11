 #include <stdio.h>

int bsearch(int [], int , int,int);

void  main()

{

     int sresult,keyval, a[100],n,i;

     printf("enter the size of n \n");

     scanf("%d",&n);

     printf("enter the array elementsin assending order \n");

     for(i=0;i<n;i++)

     scanf("%d",&a[i]);

     printf("Enter key to be searched\n");

     scanf("%d",&keyval);

     sresult = bsearch(a,0,n-1,keyval);

     if (sresult >= 0)

     printf("Key found at array index %d", sresult);

     else

     printf("Key not found\n");

}

int bsearch(int arr[], int left, int right, int key)

{

      int middle;

      if(left <= right)

      {

         middle = (left+right)/2;

         if (key < arr[middle])

             return bsearch(arr,left,middle-1,key);

         else if (key > arr[middle])

             return bsearch(arr,middle+1,right,key);

         return middle;  // key = arr[middle]

      }

      return -1;

}
