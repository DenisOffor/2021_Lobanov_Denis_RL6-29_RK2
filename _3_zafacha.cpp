#include "_3_zafacha.h"
#include "_2_zadacha.h"
//перевод чисел из одной системы счисления в другую (рекурсивно)

QVector<int> Convert::Convertation(int chislo, int from, int to)
{
  NewChislo.clear();
  VecTen.clear();
  this->from = from;
  this->to = to;
  if(from != 10){
      ConvertToTen(chislo);
      chislo = ToIntFromQVec(chislo);
    }
  Transform(chislo);
  return NewChislo;
}

void Convert::Transform(int OldChislo){
  if(OldChislo < to){
      NewChislo.append(OldChislo % to);
      return;
    }
  Transform(OldChislo / to);
  NewChislo.append(OldChislo % to);
  return;
}

void Convert::ConvertToTen(int chislo)
{
  if(chislo < 10)
    {
      VecTen.append(chislo % 10);
      return;
    }
  ConvertToTen(chislo / 10);
  VecTen.append(chislo % 10);
  return;
}

int Convert::ToIntFromQVec(int chislo)
{
  chislo = 0;
  int SizeVec = VecTen.size();
  for(int iter = SizeVec - 1, DigitDegree = 0; iter >= 0; iter--, DigitDegree++)
    chislo += VecTen[iter] * pow(from, DigitDegree);
  return chislo;
}
