//linear search 
//INPUT- 4 1 2 3 4 3
//OUTPUT - 3


#include <stdio.h>
int main()
{
  int array[100], search, c, n;
  scanf("%d", &n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search) 
    {
      printf("%d",c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not present in the array",search );

  return 0;
}
