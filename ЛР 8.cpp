#include <iostream>
using namespace std;


void numbers(int n) // ������ ���� ���� ����� �� �������
{
	if (n)
		numbers(n / 10);
	else
		return;
	cout << n % 10 << " ";
}

double middle(int* arr, int size) { // ������� ��������������
	double middle = 0;
	for (int i = 0; i < size; i++)
		middle += arr[i];
	middle /= size;
	return middle;
}

void task_1() { // ������� 1
	int number;
	cout << "������� �����: ";
	cin >> number;
	numbers(number);
}

void task_2() { // ������� 2

	char ltr;
	cout << "���� ����� ���������� �������� ";
	cin >> ltr;
	ltr = toupper(ltr); // ������� ����� � ������� �������
	cout << "����� � ������� ��������: " << ltr;
}

void task_3(){ // ������� 3
	int size;
	cout << "������� ������ �������: "; // ���� ������� � ������� �������
	cin >> size;
	int* arr = new int[size];
		
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "]: ";
		cin >> arr[i];
	}
	cout << "������� ��������������: " << middle(arr, size); // ����� ����������

}
int main() {
	setlocale(LC_ALL, "Rus");

	cout << "������� 1: " << endl;
	task_1(); // ������� 1
	cout << endl;
	cout << "������� 2: " << endl;
	cout << "----------------------" << endl;
	task_2(); // ������� 2
	cout << endl;
	cout << "������� 3: " << endl;
	cout << "----------------------" << endl;
	task_3(); // ������� 3
	


	return 0;
}