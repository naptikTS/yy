#include "module_1.h"
#include "module_2.h"
#include "module_3.h"
#include "windows.h"
int main() {
	
	int choice;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		cout << "\n1.Ввод данных\n";
		cout << "\n2.Поиск учеников выше срееднего\n";
		cout << "\n3.Сохрание результата\n";
		cout << "\n0.Выход\n";
		cout << "\nВыберите пункт\n";
		cin >> choice;
		switch (choice) {
		case 1:enter();break;
		case 2:find();break;
		case 3:save();break;
		case 0:cout << "Выход из программы.\n";break;
		default:cout << "Неверный выбор.\n";
		}
	} while (choice != 0);
	return 0;
}
