#include "_15_zadacha.h"

//Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным), при этом метод должен циклически сместить все элементы массива на n позиций.

void changeShift(int* arr, int size, int shift){
  if(size <= 1)
    return;
  int temp = 0;
  if(shift < 0){
      while(shift++){
          temp = arr[0];
            for (int i = 0; i < size - 1; i++){
                arr[i] = arr[i + 1];
              }
          arr[size - 1] = temp;
        }
    }
  else{
      while(shift--){
          temp = arr[size - 1];
            for (int i = size -1; i > 0; --i){
                arr[i] = arr[i - 1];
              }
          arr[0] = temp;
        }
    }
}
