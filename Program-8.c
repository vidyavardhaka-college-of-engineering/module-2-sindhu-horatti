//INPUT- 4 10 20 20 30 20
//OUTPUT - The number of times the  key element  is repeated  is 2
#include<stdio.h>
int main(){
  int n,flag=0,i,key,a[10],c=0;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  scanf("%d",&key);
  
    for(i=0;i<n;i++)
  {
    if(key==a[i]) 
    {
      flag=1;
      c++;
    }
  }
  if(flag==1)
   printf("The number of times the  key element  is repeated  is %d",c);
    return(0);
}


