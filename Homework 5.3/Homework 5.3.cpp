// Homework 5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
	int rows = 1, columns = 1;
	std::cout << "Enter the number of rows:\n";
	std::cin >> rows;
	std::cout << "Enter the number of columns:\n";
	std::cin >> columns;
	int arr[100][100];
	std::srand(std::time(0));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = -2 + rand() % (10);
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}
