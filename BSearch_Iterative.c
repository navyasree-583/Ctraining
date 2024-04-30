#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  while(low<=high){
    int mid = (low+high)/2;
    if(x==array[mid]) {
      return mid;
    }
    else if(x>array[mid]){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  } 
 return -1;
}

int main(void) {
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