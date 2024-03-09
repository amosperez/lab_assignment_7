#include <stdio.h>


void bubbleSort(int array[], int size);
void selectionSort(int array[], int size);

void printArray(int array[], int size);

int main(){

        int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
        int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

        // bubbleSort(array1, 9);
        // bubbleSort(array2, 9);

        selectionSort(array1, 9);
        selectionSort(array2, 9);
    
}

void bubbleSort(int array[], int size){

    int arrayFreq[100] = {0};

    int lastIndex;
    int left;
    int right;
    int temp;

    for(int i = 0; i<size-1; i++){
        lastIndex = size-i-1;

        for(int j = 0; j<lastIndex; j++){
            left = j;
            right = j+1;
            if(array[left]>array[right]){
                arrayFreq[array[left]]++;
                arrayFreq[array[right]]++;

                temp = array[left];
                array[left] = array[right];
                array[right] = temp;
            }
            // printArray(array, size);
        }
        // printf("\n\n");
    }
    for(int i = 0; i<100; i++){
        if(arrayFreq[i]>0){
            printf("%d: # of times %d is swapped.\n", arrayFreq[i], i);
        }
    }
    printf("\n\n");
}

void selectionSort(int array[], int size){
    int arrayFreq[100] = {0};

    int minimum;
    int temp;

    for(int i = 0; i<size-1; i++){
        minimum = i;
        for(int j = i+1; j<size; j++){
            if(array[j] < array[minimum]){
                minimum = j;
            }
        }
        if(array[i]!=array[minimum]){
            arrayFreq[array[i]]++;
            arrayFreq[array[minimum]]++;
        }


        temp = array[i];
        array[i] = array[minimum];
        array[minimum] = temp;
        // printArray(array, size);
    }
    for(int i = 0; i<100; i++){
        if(arrayFreq[i]>0){
            printf("%d: # of times %d is swapped.\n", arrayFreq[i], i);
        }
    }
    printf("\n\n");
}


void printArray(int array[], int size){
    for(int i = 0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}