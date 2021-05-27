#ifndef _11_ZADACHA_H
#define _11_ZADACHA_H
#include <QVector>
#include <iostream>

//Написать определение структуры, которая хранит ссылку на N таких же структур, написать функцию обхода всех элементов

struct Dataa{
  int age;
};

struct Nodes{
  int size = 0;
  Dataa data;
  QVector<Nodes*> nodes;
  Nodes(){}
  Nodes(int,int*);
  ~Nodes(){}
  void rec_way(Nodes* arr);
};

#endif // _11_ZADACHA_H
