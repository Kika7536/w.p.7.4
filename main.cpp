#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 4. Убийца Steam." << endl;
	cout << "---------------------------------" << endl << endl;

	int progress = 0;
	float size, speed, i = 0;

	cout << "Ввод: " << endl << endl;
	cout << "Укажите размер файла для скачивания: ";
	cin >> size;

	cout << "Какова скорость вашего соединения? ";
	cin >> speed;

	if (size < 0) {
		size *= -1;
	}
	if (speed < 0) {
		speed *= -1;
	}
	else if (speed == 0) {
		cout << "При нулевой скорости будет качаться вечно. Подведите интернет и повторите попытку..." << endl;
		main();
	}

	int prog;

	cout << "Вывод: " << endl << endl;

	for (int progress = speed; progress <= size; progress += speed) {
		prog = progress / (size / 100);
		i++;
		cout << "Прошло " << i << " сек. Скачано " << progress << " из " << size << " Мб." << endl;
		cout << "(" << prog << "%)" << endl << endl;
		
	}

	if (progress < size) {
		progress = size;
		i++;
		prog = progress / (size / 100);
		cout << "Прошло " << i << " сек. Скачано " << progress << " из " << size << " Мб." << endl;
		cout << "(" << prog << "%)" << endl << endl;
	}
	

}