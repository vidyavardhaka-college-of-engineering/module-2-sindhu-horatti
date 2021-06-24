//INPUT - 4 30 20 10 60
//OUTPUT: The largest and smallest elements are 60 and 10

#include <stdio.h>

int main()
{
    int arr[100], n, i, small, large;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    large = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] >large)
        {
            large= arr[i];
        }
    }
    printf(" The largest and smallest elements are %d and %d ", large,small);
    return 0;
}
