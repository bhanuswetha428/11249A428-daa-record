PROGRAM
#include <stdio.h>

void firstFit (int items[], int n, int capacity)
{
    int bin[n];
    int binCount = 0;

    // Initialize all bins with full capacity
    for (int i = 0; i < n; i++)
        bin[i] = capacity;

    // Process each item
    for (int i = 0; i < n; i++)
    {
        int placed = 0;

        // Check existing bins
        for (int j = 0; j < binCount; j++)
        {
            if (bin[j] >= items[i])
            {
                bin[j] -= items[i];
                printf("Item %d placed in Bin %d\n", items[i], j + 1);
                placed = 1;
                break;
            }
        }

        // Create new bin if item is not fitted in any existing bin
        if (!placed)
        {
            bin[binCount] -= items[i];
            printf("Item %d placed in Bin %d\n", items[i], binCount + 1);
            binCount++;
        }
    }
    printf("Total bins used = %d\n", binCount);
}

int main()
{
    int n, capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter bin capacity: ");
    scanf("%d", &capacity);
    int items[n];
    printf("Enter item sizes:\n");
    for (int i = 0; i < n; i++)
    {
        int itemSize;
        printf("Item %d: ", i + 1);
        scanf("%d", &itemSize);
        if (itemSize <= capacity)
        {
            items[i] = itemSize;
        }
        else
        {
            printf("Item size exceeds bin capacity. Please enter a valid size.\n");
            i--;
        }
    }
    firstFit(items, n, capacity);
    return 0;
}
OUTPUT
Enter number of items: 5
Enter bin capacity: 10
Enter item sizes:
Item 1: 2
Item 2: 5
Item 3: 4
Item 4: 7
Item 5: 1
Item 2 placed in Bin 1
Item 5 placed in Bin 1
Item 4 placed in Bin 2
Item 7 placed in Bin 3
Item 1 placed in Bin 1
Total bins used = 3