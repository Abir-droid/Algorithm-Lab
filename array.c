#include<stdio.h>
int main(){
    int a[10], i, n, sum = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("The array elements are:\n");
    for(i=0; i<n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    for(i=0; i<n; i++){
        sum += a[i];
    }
    printf("Sum of array elements = %d\n", sum);

    float avg = (float)sum / n;
    printf("Average of array elements = %.2f\n", avg);

    //largest value without declaring extra variable
    for(i=0; i<n; i++){
        if(a[0] < a[i]){
            a[0] = a[i];
        }
    }
    printf("Largest element in the array = %d\n", a[0]);

    //searching element with linear search using search variable
    int search;
    printf("Enter element to search: ");
    scanf("%d", &search);
    for(i=0; i<n; i++){
        if(search == a[i]){
            printf("Found at location %d\n", i);
            break;
        }
    }
    if(i == n){
        printf("Element not found\n");
    }

    return 0;
}