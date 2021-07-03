#include <iostream>
using namespace std;


void numbers(int n) // печать всех цифр числа по порядку
{
	if (n)
		numbers(n / 10);
	else
		return;
	cout << n % 10 << " ";
}

double middle(int* arr, int size) { // среднее арифметическое
	double middle = 0;
	for (int i = 0; i < size; i++)
		middle += arr[i];
	middle /= size;
	return middle;
}

void task_1() { // задание 1
	int number;
	cout << "Введите число: ";
	cin >> number;
	numbers(number);
}

void task_2() { // задание 2

	char ltr;
	cout << "Ввод буквы латинского алфавита ";
	cin >> ltr;
	ltr = toupper(ltr); // перевод буквы в верхний регистр
	cout << "Буква в верхнем регистре: " << ltr;
}

void task_3(){ // задание 3
	int size;
	cout << "Укажите размер массива: "; // ввод массива и размера массива
	cin >> size;
	int* arr = new int[size];
		
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "]: ";
		cin >> arr[i];
	}
	cout << "Среднее арифметическое: " << middle(arr, size); // вывод результата

}
int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Задание 1: " << endl;
	task_1(); // задание 1
	cout << endl;
	cout << "Задание 2: " << endl;
	cout << "----------------------" << endl;
	task_2(); // задание 2
	cout << endl;
	cout << "Задание 3: " << endl;
	cout << "----------------------" << endl;
	task_3(); // задание 3
	


	return 0;
}
