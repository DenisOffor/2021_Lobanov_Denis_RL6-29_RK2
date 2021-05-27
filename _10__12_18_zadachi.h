#ifndef _10__12_18_ZADACHI_H
#define _10__12_18_ZADACHI_H
#include <iostream>
#include <QFile>

//Р СњР В°Р С—Р С‘РЎРѓР В°РЎвЂљРЎРЉ Р С•Р В±РЎвЂ¦Р С•Р Т‘ РЎРЊР В»Р ВµР СР ВµР Р…РЎвЂљР С•Р Р† Р Т‘Р Р†РЎС“РЎРѓР Р†РЎРЏР В·Р Р…Р С•Р С–Р С• РЎРѓР С—Р С‘РЎРѓР С”Р В° (РЎР‚Р ВµР С”РЎС“РЎР‚РЎРѓР С‘Р Р†Р Р…Р С•)

struct Data{
  int age;
  std::string Name;
};

struct Node{
  Data info;
  Node* pNext;
  Node* pPrev;
  ~Node(){
    delete pNext;
  }
};

class NewList
{
private:
  struct Node* Head;
  struct Node* Tail;
  int size{0};
public:
  NewList();
  ~NewList();
  void push_back(Data data);
  void push_front(Data data);
  void ShowAllData();
  void ShowAll(Node*);
  bool SaveToFile(char* FileName);
};


#endif // _10__12_18_ZADACHI_H
