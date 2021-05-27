#include "_13_zadacha.h"

void RekursArray(int* arr, int size){
  if(size == 0)
    return;
  RekursArray(++arr, --size);
  std:: cout << *(arr - 1) << " ";
}
