
#include "_2_zadacha.h"

//Выполнить перевод чисел (представленных в char*) из двоичной системы счисления в шестнадцатиричную

char* ConvertBinToHex(char* number){
  int LengthNumber = strlen(number);
  int SizeHex = LengthNumber / 4 + (LengthNumber % 4 > 0 ? 1 : 0);
  char* NewChislo = new char[SizeHex + 1];
  for(int i = LengthNumber - 4, j = SizeHex - 1; j >= 0; i -= 4, j--){
      if(i >= 0)
        *(NewChislo + j) = GetPart(&number[i], 4);
      else
        *(NewChislo + j) = GetPart(&number[0], 4 + i);
    }
  *(NewChislo + SizeHex) = '\0';
  return NewChislo;
}

char GetPart(char* str, int size){
  int chislo = 0;
  char new_h;
  for(int i = 0; i < size; i++){
      chislo += (str[size - i - 1] - 48) * pow(2, i);
    }
  switch (chislo) {
    case 15:
      new_h = 'F';
      break;
    case 14:
      new_h = 'E';
      break;
    case 13:
      new_h = 'D';
      break;
    case 12:
      new_h = 'C';
      break;
    case 11:
      new_h = 'B';
      break;
    case 10:
      new_h = 'A';
      break;
    default:
      new_h = chislo + 48;
    }
  return new_h;
}
