#include "_17_zadacha.h"

//Склеить два файла, имена файлов передавать через аргументы argv, argc
//int main(int argc, char** argv) {
//	concatFiles(argv[1], argv[1], argv[2]);
//}

bool concatFiles(const char* FileForSave, const char* FirstFile,const char* SecondFile){
  QFile firstF(FirstFile);
  QFile secondF(SecondFile);
  if(!firstF.open(QIODevice::ReadOnly))
    return false;
  if(!secondF.open(QIODevice::ReadOnly))
    return false;
  QByteArray text = firstF.readAll() + secondF.readAll();
  firstF.close();
  secondF.close();
  QFile ResultF(FileForSave);
  if(!ResultF.open(QIODevice::WriteOnly))
    return false;
  ResultF.write(text);
  ResultF.close();
  return true;
}
