#include <iostream>
using namespace std;

double harmonic_number(double first, double second) {
    return (2/((1/first)+(1/second))); // �-� ����������� �� ��������������
}

void task_1() { // ������� 1
    double first, second;
    cout << "������� ��� ����� ��� ����������� �������� ��������������: "; // ���� ������
    cin >> first >> second;
  cout <<  harmonic_number(first, second);  // ����������� �������� ��������������
}


void func(double* a, double* b, double* c) { // ������� ������ �������� � �����-� � ��������
    if (*c<*b)
        swap(*c, *b);  
    if (*c < *a)
        swap(*c, *a);
    if (*b < *a)
        swap(*b, *a);
}

void task_2() { // ������� 2 
    cout << "������� a, b, c:"; //���� ��������
    double a, b, c;
    cin >> a >> b >> c;
    func(&a, &b, &c); //���������� �������
    cout << a << " " << b << " " << c;//�����
}

int main() {
    setlocale(LC_ALL, "ru");

    cout << "������� 1: " << endl;
    cout << "-----------------------" << endl;
    task_1(); // ������� 1
    cout << endl << endl;
    cout << "������� 2: " << endl;
    cout << "---------------------------" << endl;
    task_2(); // ������� 2


    return 0;
}
