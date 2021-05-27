#include "_21_zadacha.h"

//Удалить пробелы в строке.

void DeleteSpace(char* string){
  static int i = 0;
  if(i == strlen(string)){
      i = 0;
      return;
    }
  if(string[i] == ' '){
      shift(string, i);
    }
  i++;
  DeleteSpace(string);
}

void shift(char* string, int n){
  for(int i = n; i <= strlen(string); i++){
      string[i] = string[i + 1];
    }
}
