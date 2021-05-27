#include "_1_zadacha.h"

//найти сумму чисел расположенных на чётных/нечётных позициях в массиве (рекурсивно)

void output(int* arr, int size){
  for(int i = 0; i < size; i++){
      std::cout << arr[i] << " ";
    }
  std::cout << "\n";
}

int SumEl(int* arr, int size, bool ChetOrNechet){
  if((size--) % 2 == ChetOrNechet) //остаток 0 - четные, 1 - нечетные
    size --;
  if(size < 0)
    return 0;
  return arr[size] + SumEl(arr, size, ChetOrNechet);
}

