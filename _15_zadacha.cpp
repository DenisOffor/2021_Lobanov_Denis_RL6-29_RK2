#include "_15_zadacha.h"

//Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным), при этом метод должен циклически сместить все элементы массива на n позиций.

void changeShift(int* arr, int size, int shift){
  int temp = 0;
  while(shift--){
      temp = arr[size - 1];
      if(size > 0)
        for (int i = size -1; i > 0; --i){
            arr[i] = arr[i - 1];
          }
      arr[0] = temp;
    }
}
