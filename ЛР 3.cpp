#include <iostream>
using namespace std;



void task_1() { // ������� 1

    int size;                      //���������� ������� ������� 
    cout << "������� ������ �������: ";
    cin >> size;

    int* arr = new int[size];      // ���������� �������� �������
    cout << "��������� ����� ������(" << size <<" ���������):  ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl; //����� �������
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "���������� ������: "; //����� ����������� ������� ��� ������������� �����
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            cout << arr[i] << " ";
        }
    }

}

void task_2() {

    cout << "��������� ������: "; //���� ������
    string str;
    cin >> str;

    cout << "������� � ������: " << endl; //����� ���� ������� ������
    for (int i = 0; i < str.length(); i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cout << str[i] << " ";


}

int main() {
	setlocale(LC_ALL, "ru");

    cout << "������� 1: " << endl;
    task_1();
    cout << endl;
    cout << "������� 2: " << endl;
    task_2();
    cout << endl;


	return 0;
}