#include "module_2.h"
#include "iostream"
#include "fstream"
#include "string"
using namespace std;
struct Student {
	string surname;
	int math;
	int russian;
	int physics;
	double average;

 };
void find() {
	ifstream fin("Assort.txt");
	ofstream fout("intermediate.txt");
	string temp;
	int count = 0;
	while (getline(fin, temp)) {
		if (!fin.eof()) count++;

	}
	fin.clear();
	fin.seekg(0);
	Student* arr = new Student[count];
	for (int i = 0;i < count; i++) {
		fin >> arr[i].surname >> arr[i].math >> arr[i].russian >> arr[i].physics;
		arr[i].average = (arr[i].math + arr[i].russian + arr[i].physics);

	}
	double class_avg = 0;
	for (int i = 0;i < count;i++) {

		class_avg += arr[i].average;
	}

	double class_avg =  / count;
	cout << "\n�������  ���� �� ������:" << class_avg << endl;
	cout << "�������� � ������ ���� ��������:\n";
	bool found = false;
	for (int i = 0;i < count; i++) {
		if (arr[i].average > class_avg) {
			cout << "\n" << arr[i].surname << "���� ����:" << arr[i].average;
			fout << arr[i].surname << "" << arr[i].average << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "\n��� �������� �� ������� ������ ���� �������� �� ������.\n";
	}
	fin.close();
	fout.close();
	delete[]arr;
}


