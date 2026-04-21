PROGRAM 
#include <stdio.h>

void perm(int arr[], int start, int stop)
{
    int temp;
    if(start == stop)
    {
        for (int i=0; i<stop; i++) printf("\t%d", arr[i]);
        printf("\n");
    }
    else
    {
        for(int i=start; i<stop; i++)
        {
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
            
            perm(arr, start+1, stop);
            
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}

void main()
{
    int n, i, a[10];
    printf("Enter total no element");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    perm(a, 0, n);
}
OUTPUT 
Enter total no element: 3
1 2 3
1   2   3
    1   3   2
    2   1   3
    2   3   1
    3   2   1
    3   1   2