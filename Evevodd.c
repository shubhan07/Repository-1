//Even and odd numbers in a list
#include <stdio.h>
int main() {
    int n, i,ec,oc;
    ec = 0;
    oc = 0;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the list:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Even numbers in the list:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            ec +=1;
        }
    }
    printf("\nCount of even numbers: %d\n", ec);
    
    printf("\nOdd numbers in the list:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            oc +=1;
        }x
    }
    printf("\nCount of odd numbers: %d\n", oc);
    
    return 0;
}
