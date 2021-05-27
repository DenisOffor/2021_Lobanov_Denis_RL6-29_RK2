#include "_9_zadacha.h"

//Написать бинарный поиск (рекурсивно)

int BinaryFind(int* arr,int left, int right, int number){
  int i = (left + right) / 2;
  if(left == right){
      if(number == arr[i])
        return i + 1;
      return -1;
    }
  int c_el = arr[i];
  if(number == c_el){
      return i + 1;
    }
  if(number < c_el){
      return BinaryFind(arr, 0, i - 1 , number);
    }
  if(number > c_el){
      return BinaryFind(arr, i + 1, right, number);
    }
}

void quicksort(int *arr, int size)
{
  int left = 0;
  int right = size - 1;
  int c_el = arr[size / 2];

  while(left <= right){
      while(arr[left] < c_el)
        left++;

      while(arr[right] > c_el)
        right--;

      if(left <= right){
          swapp(&arr[left],&arr[right]);
          left++;
          right--;
        }
    }

  if(right > 0)
    quicksort(&arr[0], left);
  if(left < size)
    quicksort(&arr[right + 1], size - left);

}


void swapp(int *one, int *two)
{
  int temp = *two;
  *two = *one;
  *one = temp;
}
