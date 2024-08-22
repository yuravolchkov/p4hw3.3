#pragma once
#include <iostream>
#include "count_sort.h"

void count_sort(int* arr, int size)
{
	//вывод на экран исходного массива
	std::cout << "\nИсходный массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
		if (i + 1 < size)
		{
			std::cout << " ";
		}
	}
	//создание массива для хранения результатов подсчета
	int* temp_array = new int[14] {0};

	//заполнение массива для подсчета
	for (int i = 0; i < size; i++)
	{
		temp_array[arr[i] - 10] += 1;
	}

	// Заполнение основного массива
	int j = 0;
	for (int i = 0; i < size; )
	{
		if (temp_array[j] == 0)
		{
			j += 1;
		}
		if (temp_array[j] != 0)
		{
			arr[i] = j + 10;
			temp_array[j] -= 1;
			i++;
		}
	}
	// удаление временного массива
	delete[] temp_array;

	//вывод на экран сортированного массива
	std::cout << "\nОтсортированный массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
		if (i + 1 < size)
		{
			std::cout << " ";
		}
	}

	std::cout << "\n";

}