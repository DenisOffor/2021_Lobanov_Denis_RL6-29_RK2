#ifndef _17_ZADACHA_H
#define _17_ZADACHA_H
#include <QFile>

//Склеить два файла, имена файлов передавать через аргументы argv, argc
//int main(int argc, char** argv) {
//	concatFiles(argv[1], argv[1], argv[2]);
//}

bool concatFiles(const char* FileForSave, const char* FirstFile, const char* SecondFile);

#endif // _17_ZADACHA_H
