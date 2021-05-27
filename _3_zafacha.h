#ifndef _3_ZAFACHA_H
#define _3_ZAFACHA_H
#include <QVector>
#include <cmath>

//перевод чисел из одной системы счисления в другую (рекурсивно)

class Convert
{
private:
QVector<int> NewChislo;
QVector<int> VecTen;
int from{0};
int to{0};
int Ten{0};
public:
  Convert(){};
  ~Convert(){};
  QVector<int> Convertation(int chislo, int from, int to);
  void Transform(int OldChislo);
  void ConvertToTen(int);
  int ToIntFromQVec(int);
  QVector<int> Get(){return NewChislo;};
};

#endif // _3_ZAFACHA_H
