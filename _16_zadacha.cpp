#include "_16_zadacha.h"

//Написать метод, в который передается не пустой одномерный целочисленный массив, метод должен вернуть истину если в массиве есть место, в котором сумма левой и правой части массива равны.
//checkBalance([1, 1, 1, || 2, 1]) → true,
//checkBalance ([2, 1, 1, 2, 1]) → false,
//checkBalance ([10, || 1, 2, 3, 4]) → true.
//Абстрактная граница показана символами ||, эти символы в массив не входят.

bool CheckBalance(int* arr, int size, int ind_c_el){
  int left_sum = 0;
  int right_sum = 0;
  for(int i = 0; i < size / 2; i++){
      left_sum = sum(&arr[0], ind_c_el);
      right_sum = sum(&arr[ind_c_el], size - ind_c_el);
      if(left_sum == right_sum){
          return true;
        }
      if(left_sum > right_sum){
          --ind_c_el;
        }
      if(left_sum < right_sum){
          ++ind_c_el;
        }
    }
  return false;
}

int sum(int* arr, int size){
  int sum = 0;
  for(int i = 0; i < size; i++)
    sum += arr[i];
  return sum;
}

