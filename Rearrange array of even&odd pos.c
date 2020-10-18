#include<stdio.h> 
void rearrange(int* arr1, int n) 
{ 
     int temp,i;
    for ( i = 0; i < n - 1; i++) 
    { 
        if (i % 2 == 0 && arr1[i] > arr1[i + 1]) 
           { 
                  temp = arr1[i];
                   arr1[i] = arr1[i+1];
                   arr1[i+1] = temp;
           }
        if (i % 2 != 0 && arr1[i] < arr1[i + 1]) 
           { 
                  temp = arr1[i];
                   arr1[i] = arr1[i+1];
                   arr1[i+1] = temp;
           }
    } 
} 
  
void dispArray(int arr1[], int size) 
{ 
	int i ;
    for ( i = 0; i < size; i++) 
        printf("%d  ", arr1[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr1[] = { 6, 4, 2, 1, 8, 3 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]);
    printf("The Given Array is: \n"); 
    dispArray(arr1, n); 
    rearrange(arr1, n); 
    printf("The new array after rearranging: \n"); 
    dispArray(arr1, n); 
    return 0; 
}
