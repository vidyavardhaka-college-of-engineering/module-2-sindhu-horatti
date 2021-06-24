//INPUT -3 1 2 3
//OUTPUT- Total number of even numbers and odd numbers in the array are 1 and 2
#include<stdio.h>
int main()
{
    int arr[10];
    int i, num, evennum, oddnum;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    evennum = 0; 
    oddnum  = 0; 
    for(i=0; i<num; i++)
    {
        if(arr[i]%2 == 0) 
        {
           evennum ++;
        }
        else
        {
            oddnum++; 
        }
}
printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum  );
return(0);    
}
