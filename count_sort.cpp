#pragma once
#include <iostream>
#include "count_sort.h"

void count_sort(int* arr, int size)
{
	//����� �� ����� ��������� �������
	std::cout << "\n�������� ������: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
		if (i + 1 < size)
		{
			std::cout << " ";
		}
	}
	//�������� ������� ��� �������� ����������� ��������
	int* temp_array = new int[14] {0};

	//���������� ������� ��� ��������
	for (int i = 0; i < size; i++)
	{
		temp_array[arr[i] - 10] += 1;
	}

	// ���������� ��������� �������
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
	// �������� ���������� �������
	delete[] temp_array;

	//����� �� ����� �������������� �������
	std::cout << "\n��������������� ������: ";
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