#include <stdio.h>

void rotate(){

    int size;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("enter the elements of array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    int num_rotate;
    printf("how many times you want to rotate to the left: ");
    scanf("%d", &num_rotate);

    // rotate to left

    int temp[num_rotate]; // to keep values before rotate

    // copy first num_rotate of elements to array of temp
    for(int i=0; i<num_rotate; i++){
        temp[i] = array[i];
    }

    // rotate the original array tp the left
    for (int i=0; i< size - num_rotate; i++ ){
        array[i] = array[i+num_rotate];
    }

    // add the temp array elements to the end of array
    for (int i = 0; i<num_rotate;i++){
        array[size-num_rotate+i] = temp[i];
    }

    // print the rotated array
    printf("rotated array: ");
    for(int i=0; i<size;i++){
        printf("%d ", array[i]);
    }

}
int main(){

    rotate();

    return 0;
}