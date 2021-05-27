#include "_19_zadacha.h"

//Вывести числов Фиббоначи под номер (который передаётся в функцию) (Рекурсивно)


int Fib(int count){
  if(count == 2 || count == 1){
      return 1;
    }
  if(count == 0){
      return 0;
    }
  return Fib(count - 2) + Fib(count - 1);
}
