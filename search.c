// binary search algorithm
// we consider only sorted arrays
// question 17

#include <stdio.h>


int binarySearch(int arr[], int low, int high, int target){
    while(low < high){
        int mid = (low + high) / 2;

        if (arr[mid] == target){
            return mid;
        }

        else if (arr[mid] > target){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}


void search(){

    int  size;
    printf("please enter size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("please enter an array: ");
    for(int i = 0; i < size; i++ ){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("please enter target value: ");
    scanf("%d", &target);

    int n;
    int result = binarySearch(arr, 0, size-1, target);

    if (result != -1){
        printf("element is present at index %d.", result);
    } else{
        printf("element is not present in array.");
    }

}

int main(){

    search();

    return 0;
}