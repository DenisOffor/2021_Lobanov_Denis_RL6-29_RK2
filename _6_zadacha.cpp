#include "_6_zadacha.h"

//Нарисовать треугольник в консоли повёрнутый на 90 градусов (рекурсивно)

void RekursTriangle90(int N){
  static int count = 1; // счетчик, по которому смотрю, когда начинать уменьшать shift
  static int shift = 1; // кол-во звездочек, которые нужно нарисовать в каждой строке
  if(count == N * 2){
      count = 1;
      shift = 1;
      return;
    }
  int i = 0;
  for(; i < shift; i++){
      std::cout << "*";
    }
  for(; i < N; i++){
      std::cout << " ";
    }
  std::cout << "\n";
  (count++ < N) ? shift++ : shift--;
  RekursTriangle90(N);
}

