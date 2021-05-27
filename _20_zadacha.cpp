#include "_20_zadacha.h"

//Написать функцию удаления из конца строки символов: .,!?"+=- и других (рекурсивно)
//(...'A' ... 'Z' .... 'a'....'z'....)
//	void RemSpecSym(char* string) {}

void RemSpecSym(char* string){
  int n = strlen(string);
  if(string[n - 1] >= 'A' && string[n - 1] <= 'Z'){
      return;
    }
  if(string[n - 1] >= 'a' && string[n - 1] <= 'z'){
      return;
    }
  string[n - 1] = '\0';
  RemSpecSym(string);
}
