#ifndef _16_ZADACHA_H
#define _16_ZADACHA_H

//Написать метод, в который передается не пустой одномерный целочисленный массив, метод должен вернуть истину если в массиве есть место, в котором сумма левой и правой части массива равны.
//checkBalance([1, 1, 1, || 2, 1]) → true,
//checkBalance ([2, 1, 1, 2, 1]) → false,
//checkBalance ([10, || 1, 2, 3, 4]) → true.
//Абстрактная граница показана символами ||, эти символы в массив не входят.

bool CheckBalance(int* arr, int size, int ind_c_el);
int sum(int* arr, int size);

#endif // _16_ZADACHA_H
