#include "module_3.h"
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

void save() {
	ifstream fin("intermediate.txt");
	ofstream fout("result.txt");
	string line;
	while (getline(fin, line)) {
		fout << line << endl;
	}
	cout << "\nрезультаты сохранены в файл result.txt\n";
	fin.close();
	fout.close();

}