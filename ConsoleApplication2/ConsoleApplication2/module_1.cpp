#include "module_1.h"
#include "iostream"
#include "fstream"
#include "string"

using namespace std;
struct  Student {
	string surname;
	int math;
	int russian;
	int physics;
	double average;

};
void enter() {
	ofstream fout("Assort.txt");
	int n;
	cout << "������� ���  �������� ";
	cin >> n;
	Student* arr = new Student[n];
	for (int i = 0;i < n;i++) {
		cout << "\n������ " << i + 1 << ":\n";
		cout << "�������:";
		cin >> arr[i].surname;
		cout << "������ �� ����������:";
		cin >> arr[i].math;
		cout << "������ �� ��������:";
		cin >> arr[i].russian;
		cout << "������ �� ������:";
		cin >> arr[i].physics;

		arr[i].average = (arr[i].math + arr[i].russian + arr[i].physics);

		fout << arr[i].surname << "" << arr[i].math << ""
			<< arr[i].russian << "" << arr[i].physics << endl;
	}
	fout.close();
	delete[] arr;
}



