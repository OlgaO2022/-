#include <iostream>
#include <array>
#include <string>


// 1. Инициализация квадратной матрицы;


void Arr(int arr[3][3], int length, int higth) {
}

void Arr(double arr[3][3], int length, int higth) {
}

void Arr(char arr[3][3], int length, int higth) {
}

// шаблон
template<typename Type>
void Arr(Type arr[3][3], int length, int higth) {
}


// 2. Вывод матрицы на экран

void PrintArr(int arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j{ 0 }; j < higth; j++)
			std::cout << arr[i][j] << " ";
	}
	std::cout << '\n';
	return;
}

void PrintArr(double arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j{ 0 }; j < higth; j++)
			std::cout << arr[i][j] << " ";
	}
	std::cout << '\n';
	return;
}

void PrintArr(char arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j{ 0 }; j < higth; j++)
			std::cout << arr[i][j] << " ";
	}
	std::cout << '\n';
	return;
}

// шаблон
template<typename Type>
void PrintArr(Type arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j{ 0 }; j < higth; j++)
			std::cout << arr[i][j] << " ";
	}
	std::cout << '\n';
	return;
}

// 3. Определение максимального и минимального элемента 
//на главной диагонали матрицы

int MaxMin(int arr[3][3], int length, int higth) {
	int max = arr[0][0];
	int min = arr[0][0];
	{
		for (int i{ 0 }; i < length; i++) {
			for (int j{ 0 }; j < higth; j++) {
				if (i == j) {
					if (arr[i][j] > max) {
						max = arr[i][j];
					}
				}
			}
		}
		std::cout << max << "\n";
	}
	{
		for (int i{ 0 }; i < length; i++) {
			for (int j{ 0 }; j < higth; j++) {
				if (i == j) {
					if (arr[i][j] < min) {
						min = arr[i][j];
					}
				}
			}
		}
		std::cout << min << "\n";
	}
	return max, min;
}

double MaxMin(double arr[3][3], int length, int higth) {
	double max = arr[0][0];
	double min = arr[0][0];
		{
			for (int i{ 0 }; i < length; i++) {
				for (int j{ 0 }; j < higth; j++) {
					if (i == j) {
						if (arr[i][j] > max) {
								max = arr[i][j];
							}
						}
					}
				}
		std::cout << max << "\n";
		}
		{
		for (int i{ 0 }; i < length; i++) {
			for (int j{ 0 }; j < higth; j++) {
				if (i == j) {
					if (arr[i][j] < min) {
						min = arr[i][j];

					}
				}
			}
		}
		std::cout << min << "\n";	
		}
		return max, min;
	}

// шаблон
template<typename Type>
Type MaxMin(Type arr[3][3], int length, int higth) {
	Type max = arr[0][0];
	Type min = arr[0][0];
	{
		for (int i{ 0 }; i < length; i++) {
			for (int j{ 0 }; j < higth; j++) {
				if (i == j) {
					if (arr[i][j] > max) {
						max = arr[i][j];
					}
				}
			}
		}
		std::cout << max << "\n";
	}
	{
		for (int i{ 0 }; i < length; i++) {
			for (int j{ 0 }; j < higth; j++) {
				if (i == j) {
					if (arr[i][j] < min) {
						min = arr[i][j];
					}
				}
			}
		}
		std::cout << min << "\n"; 
	}
			return max, min;
		}

// 4. Сортировка элементов по возрастанию 
//отдельно для каждой строки матрицы

void RiseArr(int arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j = 0; j < higth; j++)
		{
		for (int k = 0; k < length - 1 - j; k++)
			{
			if (arr[i][k] > arr[i][k + 1])
			{
			int tmp = arr[i][k];
				arr[i][k] = arr[i][k + 1];
				arr[i][k + 1] = tmp;
			}
			}std::cout << arr[i][j] << " ";
		}std::cout << '\n';
	}
	return;
	}

void RiseArr(double arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j = 0; j < higth; j++)
		{
		for (int k = 0; k < length - 1 - j; k++)
		{
			if (arr[i][k] > arr[i][k + 1])
			{
				double tmp = arr[i][k];
				arr[i][k] = arr[i][k + 1];
				arr[i][k + 1] = tmp;
				}
			}std::cout << arr[i][j] << " ";
	}std::cout << '\n';
	}
	return;
}

// шаблон
template<typename Type>
void RiseArr(Type arr[3][3], int length, int higth) {
	for (int i{ 0 }; i < length; i++) {
		for (int j = 0; j < higth; j++)
		{
			for (int k = 0; k < length - 1 - j; k++)
			{
				if (arr[i][k] > arr[i][k + 1])
				{
					Type tmp = arr[i][k];
					arr[i][k] = arr[i][k + 1];
					arr[i][k + 1] = tmp;
				}
			}
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}
	return;
}


int main() {
	setlocale(LC_ALL, "rus");

	int arr[3][3]{
	{ 15, 20, 2 },
	{ 70, 8, 100 },
	{200, 150, 50 }
	};
	double arrFloat[3][3]{
	{ 15.5, 1.3, 6.8},
	{ 6.1, 5.2, 10.5,},
	{5.0, 80.5, 5.7 }
	};
	char arrChar[3][3]{ "*", "*", "*" };

	std::cout << "Вывод матрицы на экран\n";

	PrintArr(arr, 3, 3);
	PrintArr(arrFloat, 3, 3);
	PrintArr(arrChar, 3, 3);
	std::cout << '\n';

	std::cout << "Определение максимального и минимального элемента на главной диагонали матрицы;\n";
	
	MaxMin(arr, 3, 3);
	std::cout << "\n";
	MaxMin(arrFloat, 3, 3);
	std::cout << "\n";

	std::cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы \n";

	RiseArr(arr, 3, 3);
	std::cout << '\n';
	RiseArr(arrFloat, 3, 3);


	return 0;
}
