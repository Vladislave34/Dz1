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
	cout << "Գ��� " << mac.brand << endl;
	cout << "���� " << mac.color << endl;
	cout << "������� " << mac.l << endl;
	cout << "������ " << mac.f << endl;
	cout << "������ " << mac.h << endl;
	cout << "��������� " << mac.p << endl;
	cout << "�������� " << mac.v << endl;
	cout << "����������� " << mac.t << endl;

}
void init(M& mac) {
	cout << "������ �����, ����, ������, �������, ������, ���������, �������� ������, ����������� ������" << endl;
	cin >> mac.brand >> mac.color >> mac.l >> mac.f >> mac.h >> mac.p >> mac.v >> mac.t;

}

int main()
{
	setlocale(LC_ALL, "");

	M mac;

	init(mac);
	Print(mac);

}
