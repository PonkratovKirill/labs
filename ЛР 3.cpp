#include <iostream>
using namespace std;



void task_1() { // задание 1

    int size;                      //заполнение размера массива 
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];      // заполнение элементо массива
    cout << "Заполните через пробел(" << size <<" элементов):  ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl; //вывод массива
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Измененный массив: "; //вывод измененного массива без отрицательных чисел
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            cout << arr[i] << " ";
        }
    }

}

void task_2() {

    cout << "Заполните строку: "; //ввод строки
    string str;
    cin >> str;

    cout << "Гласные в строке: " << endl; //вывод всех гласных строки
    for (int i = 0; i < str.length(); i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cout << str[i] << " ";


}

int main() {
	setlocale(LC_ALL, "ru");

    cout << "Задание 1: " << endl;
    task_1();
    cout << endl;
    cout << "Задание 2: " << endl;
    task_2();
    cout << endl;


	return 0;
}