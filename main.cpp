#include <QCoreApplication>
#include "_1_zadacha.h"
#include "_2_zadacha.h"
#include "_3_zafacha.h"
#include "_4_and_5_zadachi.h"
#include "_6_zadacha.h"
#include "_7_zadacha.h"
#include "_8_zadacha.h"
#include "_9_zadacha.h"
#include "_10__12_18_zadachi.h"
#include "_11_zadacha.h"
#include "_13_zadacha.h"
#include "_14_zadacha.h"
#include "_15_zadacha.h"
#include "_16_zadacha.h"
#include "_17_zadacha.h"
#include "_19_zadacha.h"
#include "_20_zadacha.h"
#include "_21_zadacha.h"

void FirstTask();
void SecondTask();
void ThirdTask();
void FourthTask();
void SixthTask();
void SeventhTask();
void EighthTask();
void NinthTask();
void TenthTask();
void EleventhTask();
void ThirteenthTask();
void FourteenthTask();
void FifteenthTask();
void SixteenthTask();
void SeventeenthTask(char** argv);
void NineteenthTask();
void TwentiethTask();
void TwentyFirstTask();

int main(int argc, char** argv)
{
  QCoreApplication a(argc, argv);
  TwentyFirstTask();
  return a.exec();
}

void FirstTask()
{
  srand(time(0));
  const int N = 8;
  int* arr = new int[N];
  for(int i = 0; i < N; i++)
    arr[i] = rand() % 15;
  output(&arr[0], N);
  int sum  = SumEl(&arr[0],N, false); // true - посчитать нечетные, false -  четные
  std::cout << sum << "\n";
}

void SecondTask(){
  const int N = 30;
  char* str = new char[N];
  std::cout << "Input number: ";
  std::cin.getline(str, N);
  char* NewChislo = ConvertBinToHex(str);
  std::cout << "Hex: " << NewChislo;
  delete[] str;
  delete[] NewChislo;
}

void ThirdTask(){
  QVector<int> vec;
  Convert process;
  process.Convertation(5423,6,8);
  vec = process.Get();
  for(int i = 0; i < vec.size(); i++)
    std:: cout << vec[i];
  std::cout << "\n";
  process.Convertation(1001110,2,8);
  vec = process.Get();
  for(int i = 0; i < vec.size(); i++)
    std:: cout << vec[i];

}

void FourthTask(){
  int const N = 10;
  int* array = new int[N]{3,65,45,234,875,35,75,34,1,76};
  output(array, N);
  sort(array, N, true); // true - sort четные, false -  нечетные
  output(array, N);
}

void SixthTask(){
  RekursTriangle90(4);
  std::cout << "\n";
  RekursTriangle90(5);
}

void SeventhTask(){
  RekursTriangle180(4);
  std::cout << "\n";
  RekursTriangle180(5);
}

void EighthTask(){
  RekursTriangle270(4);
  std::cout << "\n";
  RekursTriangle270(5);
}

void NinthTask(){
  const int N = 10;
  int* arr = new int[N]{15, 11, 12, 18, 14, 10, 16, 17, 18, 13};
  quicksort(arr, N);
  int ind = BinaryFind(arr, 0, N, 16);
  std::cout << ind;
  delete[] arr;
}

Data CinData(){
  Data data;
  std::cout << "Input age.\n";
  std::cin >> data.age;
  std::cout << "Input name.\n";
  std::cin >> data.Name;
  std::cout << "Good.\n";
  return data;
}

void TenthTask(){
  NewList lst;
  int choise = 10;
  Data data;
  while(choise != 0){
      std::cout << "1. Push back.\n" << "2. Push front.\n" << "3. Show list\n" << "4.Save\n" "Choise: ";
      std::cin >> choise;
      std::cout << "\n";
      switch (choise) {
        case 1:
          {
            data = CinData();
            lst.push_back(data);
            break;
          }
        case 2:
          {
            data = CinData();
            lst.push_front(data);
            break;
          }
        case 3:
          {
            lst.ShowAllData();
            break;
          }
        case 4:
          {
            lst.SaveToFile("C:\\Users\\admin\\Documents\\QT Projects\\2021_Lobanov_RL6-29_RK2\\FILETWO.txt");
            break;
          }

        }
    }
}

void EleventhTask(){
  int* arr = new int[10]{11,5,3,66,5,6,7,8,9,60};
  Nodes* temp = new Nodes(10,arr);
  int* arr2 = new int[10]{33,2,3,4,5,6,7,8,9,77};
  Nodes* temp2 = new Nodes(10,arr2);
  temp2->data.age = 121;
  temp->nodes[0]->nodes.append(temp2);
  temp->rec_way(temp);
  delete[] arr;
}

void ThirteenthTask(){
  const int N = 12;
  int* arr = new int[N]{1,2,3,4,5,233,7,8,9,10,465,7};
  RekursArray(arr, N);
  delete[] arr;
}

void FourteenthTask(){
  const int N = 12;
  int* arr = new int[N]{1,0,1,0,0,1,0,1,0,0,1,1};
  output(arr, N);
  change(arr, N);
  output(arr,N);
  delete[] arr;
}

void FifteenthTask(){
  const int N = 10;
  int* arr = new int[N]{1,2,3,4,5,6,7,8,9,10};
  output(arr, N);
  changeShift(arr, N, 4);
  output(arr,N);
  delete[] arr;
}

void SixteenthTask(){
  const int N = 10;
  int* arr = new int[N]{9, 1, 2, 3, 4, 5, 6, 13, 8, 9};
  output(arr, N);
  bool temp = CheckBalance(arr, N, N / 2);
  std::cout << "\n" << temp;
}

void SeventeenthTask(char** argv){
  bool success = concatFiles(argv[1],argv[2],argv[3]);
  std::cout << success;
}

void NineteenthTask(){
  int x = Fib(7);
  std::cout << x;
}

void TwentiethTask(){
  const int N = 30;
  char* str = new char[N];
  std::cout << "Input str: ";
  std::cin.getline(str,N);
  RemSpecSym(str);
  std::cout << "\n" << str;
  delete[] str;
}

void TwentyFirstTask(){
  const int N = 30;
  char* str = new char[N];
  std::cout << "Input str: ";
  std::cin.getline(str,N);
  DeleteSpace(str);
  std::cout << "\n" << str;
  delete[] str;
}
