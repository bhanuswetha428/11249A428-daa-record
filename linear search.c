PROGRAM
#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }
 OUTPUT 1 
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Enter element to search: 30
Element found at position 3
OUTPUT 2
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Enter element to search: 60
Element not found
    return 0;
}
