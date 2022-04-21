#include "Sort.h"

template<typename T>
void BubbleSort(T &arr, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-1-i; j++){  // Cause the top i elements have been ordered
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}