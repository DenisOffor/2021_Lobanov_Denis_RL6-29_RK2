#include "_4_and_5_zadachi.h"

//функцию сортировки элементов массива распложенных на чётных/нечётных позициях

void sort(int* array, int size, bool ChetOrNechet){
  for(int i = ChetOrNechet; i < size; i += 2)
    for(int j = i + 2; j < size; j += 2){
        if(array[i] > array[j])
          swap(&array[i], &array[j]);
      }
}

void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}
