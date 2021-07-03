#include <iostream>
using namespace std;

void task_1() { // Задание 1

    int vec[10];
    cout << "Заполните массив через пробел: "; // заполнение массива из 10 элементов
    for (int i = 0; i < 10; i++)
        cin >> vec[i];
    for (int i = 0; i < 10; i++) //вывод массива
		cout << vec[i] << " ";
    cout << endl;
    for (int i = 0; i < 10; i++) { // вывод видоизмененного массива в соотв-и с условием
        if (vec[i] % 2 == 0)
            vec[i] = 0;
        cout << vec[i] << " ";
    }

}

void task_2() { // Задание 2

	char s; // символ
	cin >> s;//ввод символа

	// ввод и проверка символа на соответствие
	while (s != '-' && s != '+' && s != '/' && s != '*') // проверка на символ
	{
		cin >> s;
	}

	// ввод строки
	string str;
	cout << "Введите строку: "; // ввод строки
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		//проверка наличия символа в строке
		if (str[i] == s)
		{
			cout << "Символ занимает в строке место №" << i + 1;
			return;
		}
	}
	cout << "Такой символ в строке не найден!" << endl;
	return;

}

int task_3() { // задание 3

	int matr[3][3]; // создание и заполнение матрицы(двумерный массив)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "[" << i+1 << "][" << j+1 << "] = ";
			cin >> matr[i][j];
		}
	}
		
	cout << "Определитель матрицы: "; // вывод определителя матрицы
	return matr[0][0] * matr[1][1] * matr[2][2] + matr[2][0] * matr[0][1] * matr[1][2] + matr[1][0] * matr[2][1] * matr[0][2] - matr[2][0] * matr[1][1] * matr[0][2] - matr[0][0] * matr[2][1] * matr[1][2] - matr[1][0] * matr[0][1] * matr[2][2];


}

int main() {
	setlocale(LC_ALL, "ru");
	
	cout << "Задание 1: " << endl;
	task_1(); // демонстрация первого
	cout << endl;
	cout << "Задание 2: " << endl;
	task_2(); // демонстрация второго
	cout << endl;
	cout << "Задание 3: " << endl;
	cout << task_3(); //демонстрация третьего

	return 0;
}