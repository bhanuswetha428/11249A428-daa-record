#include <stdio.h>

struct Item {
    int weight;
    int value;
    float ppw; // profit per weight ratio
};

void sort(struct Item items[], int n)
{
    struct Item temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (items[j].ppw < items[j + 1].ppw)
            {
                temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    float capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);
    struct Item items[n];
    printf("Enter weight and value of each item: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
        items[i].ppw = (float)items[i].value / items[i].weight;
    }
    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    sort(items, n);

    float totalProfit = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (capacity >= items[i].weight)
        {
            totalProfit += items[i].value;
            capacity -= items[i].weight;
        }
        else
        {
            totalProfit += items[i].ppw * capacity;
            break;
        }
    }
    printf("Maximum profit = %.2f\n", totalProfit);
    return 0;
}
OUTPUT
Enter number of items: 3
Enter weight and value of each item:
Item 1: 10 60
Item 2: 20 100
Item 3: 30 120
Enter knapsack capacity: 50
Maximum profit = 240.00