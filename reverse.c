#include <stdio.h>

void reverse(){
    int size;

    printf("enter a size of the array:");
    scanf("%d", &size);

    int arr[size];

    printf("enter the elements of the array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for( int i= 0; i< size / 2 ; i++){
        //change first and last element
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    // print the reversed array
    printf("Reversed array is: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}


int main(){

    reverse();

    return 0;
}