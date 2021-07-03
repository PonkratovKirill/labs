#include <iostream>
using namespace std;

void task_1() { // ������� 1

    int vec[10];
    cout << "��������� ������ ����� ������: "; // ���������� ������� �� 10 ���������
    for (int i = 0; i < 10; i++)
        cin >> vec[i];
    for (int i = 0; i < 10; i++) //����� �������
		cout << vec[i] << " ";
    cout << endl;
    for (int i = 0; i < 10; i++) { // ����� ��������������� ������� � �����-� � ��������
        if (vec[i] % 2 == 0)
            vec[i] = 0;
        cout << vec[i] << " ";
    }

}

void task_2() { // ������� 2

	char s; // ������
	cin >> s;//���� �������

	// ���� � �������� ������� �� ������������
	while (s != '-' && s != '+' && s != '/' && s != '*') // �������� �� ������
	{
		cin >> s;
	}

	// ���� ������
	string str;
	cout << "������� ������: "; // ���� ������
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		//�������� ������� ������� � ������
		if (str[i] == s)
		{
			cout << "������ �������� � ������ ����� �" << i + 1;
			return;
		}
	}
	cout << "����� ������ � ������ �� ������!" << endl;
	return;

}

int task_3() { // ������� 3

	int matr[3][3]; // �������� � ���������� �������(��������� ������)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "[" << i+1 << "][" << j+1 << "] = ";
			cin >> matr[i][j];
		}
	}
		
	cout << "������������ �������: "; // ����� ������������ �������
	return matr[0][0] * matr[1][1] * matr[2][2] + matr[2][0] * matr[0][1] * matr[1][2] + matr[1][0] * matr[2][1] * matr[0][2] - matr[2][0] * matr[1][1] * matr[0][2] - matr[0][0] * matr[2][1] * matr[1][2] - matr[1][0] * matr[0][1] * matr[2][2];


}

int main() {
	setlocale(LC_ALL, "ru");
	
	cout << "������� 1: " << endl;
	task_1(); // ������������ �������
	cout << endl;
	cout << "������� 2: " << endl;
	task_2(); // ������������ �������
	cout << endl;
	cout << "������� 3: " << endl;
	cout << task_3(); //������������ ��������

	return 0;
}