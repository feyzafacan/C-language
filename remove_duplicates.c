#include <stdio.h>


void remove_duplicates(){
    int size;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("enter the elements of array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    int newArray[size]; // new array
    int newSize = 0; // new array size

    //outer loop
    for (int i = 0; i<size; i++){
        int isDuplicate = 0;

        //inner loop
        for(int j=0; j< newSize; j++){
            if(array[i] == newArray[j]){
                isDuplicate= 1; // if element in the array
                break;
            }
        }
        // if element unique, add the new array
        if (isDuplicate == 0){
            newArray[newSize] = array[i];
            newSize++;
        }
    }

    //print after removal
    printf("Array after removal of duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");
}
int main(){

    remove_duplicates();

    return 0;
}