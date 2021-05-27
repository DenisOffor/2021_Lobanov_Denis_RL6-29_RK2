#include "_10__12_18_zadachi.h"

//Написать обход элементов двусвязного списка (рекурсивно)
//Написать описание класса односвязного списка и описать конструкторы и деструкторы и показать как будет освобождаться память при удалении объекта.

NewList::NewList()
{
  Head = new Node();
  Tail = Head;
  size = 0;
}

NewList::~NewList()
{
  delete Head;
}

void NewList::ShowAllData(){
  Node* temp = Head;
  ShowAll(temp);
}

void NewList::ShowAll(Node* h){
  if(h->pNext == NULL || size == 0)
    return;
  std::cout << h->info.age << h->info.Name << "\n";
  ShowAll(h->pNext);
}

void NewList::push_back(Data data)
{
  if(size == 0){
      Node* temp = new Node();
      Tail = temp;
      Head->pNext = temp;
      Tail->pPrev = Head;
      Head->info = data;
      size++;
    }
  else{
      Tail->info = data;
      Node* temp = new Node();
      Tail->pNext = temp;
      temp->pPrev = Tail;
      Tail = temp;
      size++;
    }
}

void NewList::push_front(Data data)
{
  Node* temp = new Node();
  temp->info = data;
  temp->pNext = Head;
  temp->pPrev = NULL;
  Head->pPrev = temp;
  Head = temp;
  size++;
}

bool NewList::SaveToFile(char *FileName){
  QFile file(FileName);
  if(!file.open(QIODevice::WriteOnly))
    return false;
  Node* temp = Head;
  QByteArray data;
  for(int i = 0; i < size; i++, temp = temp->pNext){
      data = temp->info.Name.c_str();
      data += " ";
      data += temp->info.age ;
      file.write(data);
      file.write("\n");
    }
  file.close();
  return true;
}
