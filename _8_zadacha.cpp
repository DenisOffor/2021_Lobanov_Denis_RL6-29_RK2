#include "_8_zadacha.h"

//нарисовать треугольник в консоли повёрнутый на 270 градусов (рекурсивно)

void RekursTriangle270(int N){
  static int count = 1; // счетчик, по которому смотрю, когда начинать уменьшать shift
  static int shift = 1; // кол-во звездочек, которые нужно нарисовать в каждой строке
  if(count == N * 2){
      count = 1;
      shift = 1;
      return;
    }
  int i = 0;
  for(; i < N - shift; i++){
      std::cout << " ";
    }
  for(; i < N; i++){
      std::cout << "*";
    }
  std::cout << "\n";
  (count++ < N) ? shift++ : shift--;
  RekursTriangle270(N);
}
