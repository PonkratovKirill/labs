#include <iostream>
using namespace std;

double harmonic_number(double first, double second) {
    return (2/((1/first)+(1/second))); // ф-я определения ср гармонического
}

void task_1() { // задание 1
    double first, second;
    cout << "Введите два числа для определения среднего гармонического: "; // ввод данных
    cin >> first >> second;
  cout <<  harmonic_number(first, second);  // определение среднего гармонического
}


void func(double* a, double* b, double* c) { // функция замены значений в соотв-и с условием
    if (*c<*b)
        swap(*c, *b);  
    if (*c < *a)
        swap(*c, *a);
    if (*b < *a)
        swap(*b, *a);
}

void task_2() { // задание 2 
    cout << "Введите a, b, c:"; //ввод значений
    double a, b, c;
    cin >> a >> b >> c;
    func(&a, &b, &c); //выполнение функции
    cout << a << " " << b << " " << c;//вывод
}

int main() {
    setlocale(LC_ALL, "ru");

    cout << "Задание 1: " << endl;
    cout << "-----------------------" << endl;
    task_1(); // задание 1
    cout << endl << endl;
    cout << "Задание 2: " << endl;
    cout << "---------------------------" << endl;
    task_2(); // задание 2


    return 0;
}
