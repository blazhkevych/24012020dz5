/*
5. Составить программу, позволяющую получить словесное описание школьных отметок(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введите оценку: ";
	cin >> a;
	switch (a) {
	case 1:cout << "плохо"; break;
	case 2:cout << "неудовлетворительно"; break;
	case 3:cout << "удовлетворительно"; break;
	case 4:cout << "хорошо"; break;
	case 5:cout << "отлично"; break;
	default: cout << "Ошибка";
	}
	return 0;
}
