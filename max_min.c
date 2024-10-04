#include <stdio.h>


void max_min() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("enter the elements of array: ");
    for(int i= 0; i< size; i++){
        scanf("%d", &arr[i]);
    }


    int minimum = arr[0];
    int maximum = arr[0];

    for(int i = 0; i<size; i++){

        if (arr[i] < minimum){
            minimum = arr[i];
        }
        else if (arr[i] > maximum ){
            maximum = arr[i];
        }
    }
    printf("minimum element is: %d\n"
           "maximum element is: %d\n", minimum, maximum);

}

int main(){

    max_min();

    return 0;
}
