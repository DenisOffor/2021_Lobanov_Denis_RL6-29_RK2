#include "_7_zadacha.h"

//нарисовать треугольник в консоли повёрнутый на 180 градусов (рекурсивно)

void RekursTriangle180(int N){
  static int Num_Row = 0;
  int i = 0;
  for(; i < Num_Row; i++){
      std::cout << " ";
    }
  for(i = 0; i < N * 2 - 1; i++){
      std::cout << "*";
    }
  std::cout << "\n";
  Num_Row++;
  if(N == 0){
      Num_Row = 0;
      return;
    }
  RekursTriangle180(N - 1);
}

