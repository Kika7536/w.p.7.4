#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 4. ������ Steam." << endl;
	cout << "---------------------------------" << endl << endl;

	int progress = 0;
	float size, speed, i = 0;

	cout << "����: " << endl << endl;
	cout << "������� ������ ����� ��� ����������: ";
	cin >> size;

	cout << "������ �������� ������ ����������? ";
	cin >> speed;

	if (size < 0) {
		size *= -1;
	}
	if (speed < 0) {
		speed *= -1;
	}
	else if (speed == 0) {
		cout << "��� ������� �������� ����� �������� �����. ��������� �������� � ��������� �������..." << endl;
		main();
	}

	int prog;

	cout << "�����: " << endl << endl;

	for (int progress = speed; progress <= size; progress += speed) {
		prog = progress / (size / 100);
		i++;
		cout << "������ " << i << " ���. ������� " << progress << " �� " << size << " ��." << endl;
		cout << "(" << prog << "%)" << endl << endl;
		
	}

	if (progress < size) {
		progress = size;
		i++;
		prog = progress / (size / 100);
		cout << "������ " << i << " ���. ������� " << progress << " �� " << size << " ��." << endl;
		cout << "(" << prog << "%)" << endl << endl;
	}
	

}