#include <iostream>
#include <Windows.h>
#include <string>
#include "ArrayList.cpp"
#include "List.cpp""
#include "BiblList.cpp""
using namespace std;

string stateM;
void MainMenu() {
	cout << "    ����\n"
		<< "(0) ����� � ��������\n"
		<< "(1) �� ����� ������\n"
		<< "(2) �� ����� ��'������ ������\n"
		<< "(3) �� ����� �������\n"
		<< "��� ����: ";
	cin >> stateM;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ArrayList Arlst;
	List<int> lst;
	VectorList Veclst;

	system("pause");
	system("cls");
	MainMenu();

	while (stateM != "0") {

		if (stateM == "1") {
			system("cls");

			Arlst.MainFunc();

			system("pause");
			system("cls");
			MainMenu();
			system("cls");
		}
		if (stateM == "2") {
			system("cls");

			lst.MainFunc();

			system("pause");
			system("cls");
			MainMenu();
			system("cls");
		}
		if (stateM == "3") {
			system("cls");

			Veclst.MainFunc();

			system("pause");
			system("cls");
			MainMenu();
			system("cls");
		}
		if (stateM != "0" && stateM != "1" && stateM != "2" && stateM != "3") {
			system("cls");

			cout << "********************************************************\n"
				<< "������ ������� ����. ������ ������ �� ��������������.\n"
				<< "********************************************************\n";

			system("pause");
			system("cls");
			MainMenu();
			system("cls");
		}
	}
}