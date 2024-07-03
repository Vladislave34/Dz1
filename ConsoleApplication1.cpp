#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;
struct M {
	char brand[100];

	char color[100];
	float h, l, f, p, v, t;
};

void Print(M mac)
{
	cout << "Фірму " << mac.brand << endl;
	cout << "Колір " << mac.color << endl;
	cout << "Довжину " << mac.l << endl;
	cout << "Ширину " << mac.f << endl;
	cout << "Висоту " << mac.h << endl;
	cout << "Потужність " << mac.p << endl;
	cout << "Швидкість " << mac.v << endl;
	cout << "Температура " << mac.t << endl;

}
void init(M& mac) {
	cout << "Введіть фірма, колір, ширина, довжина, висота, потужність, швидкість віджиму, температура нагріву" << endl;
	cin >> mac.brand >> mac.color >> mac.l >> mac.f >> mac.h >> mac.p >> mac.v >> mac.t;

}

int main()
{
	setlocale(LC_ALL, "");

	M mac;

	init(mac);
	Print(mac);

}
