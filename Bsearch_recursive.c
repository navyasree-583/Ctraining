#include <stdio.h>
int binarySearch(int [], int, int, int);
int binarySearch(int array[], int x, int low, int high) {
  while(low<=high){
    int mid=(low+high)/2;
    if(array[mid] == x)
        return mid;
    else if(x>array[mid])
        binarySearch(array, x, mid+1, high);
    else 
        binarySearch(array, x, low, mid-1);
  }
  return -1;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x=9;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d\n", result);
  return 0;
}
