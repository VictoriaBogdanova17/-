﻿#include <stdio.h>      //подключаю библиотеки 
#include <locale.h>
#define n 5   //задаю значение размера массива чисел 
int main()
{

	int a = 0, b = 0, i, ms[n]; //объявляю 
	setlocale(LC_ALL, "Rus");  //устанавливаю язык текста 
	printf("заполните массив\n"); //вывод информации на экран 
	for (i = 0; i < n; i++)    //цикл для заполнения массива
	{
		scanf_s("%d", &ms[i]);  //ввод инфы с клавиатуры , целое десятичное число 
	}
	for (i = 0; i < n; i++)
	{
		if (ms[i] % 5 == 0 && ms[i] % 7 != 0) //проверяю каждый элемент массива на соответсвие условию
		{
			a += 1;    //в а записывается кол-во чисел 
			b = b + ms[i];  //в b сумма 
		}
	}
	printf("кол-во нужных чисел %d\n", a);   //вывод результата
	printf("сумма нужных чисел %d\n", b);
	return(0);
}
