#include "_11_zadacha.h"

//Написать определение структуры, которая хранит ссылку на N таких же структур, написать функцию обхода всех элементов

Nodes::Nodes(int N, int* arr){
  size = N;
  for(int i = 0; i < size; i++){
      Nodes* temp = new Nodes;
      nodes.append(temp);
      nodes[i]->data.age = arr[i];
    }
}

void Nodes::rec_way(Nodes* node){
  if(node == NULL)
    return;
  for(int i = 0; i < node->nodes.size(); i++){
      std::cout << node->nodes[i]->data.age << " ";
      rec_way(node->nodes[i]);
      std::cout << "\n";
    }
}
