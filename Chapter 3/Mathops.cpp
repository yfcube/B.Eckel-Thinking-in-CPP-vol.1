//: C03:Mathops.cpp
// �������������� ���������
#include <iostream>
using namespace std;

// ��������������� ������ ��� ������ ������ � ��������
#define PRINT(STR, VAR) \
cout << STR " = " << VAR << endl

int main() {
	int i, j, k;
	float u, v, w;	// ����� ��������� � double
	cout << "enter an integer: ";
	cin >> j;
	cout << "enter another integer: ";
	cin >> k;
	PRINT("j", j); PRINT("k", k);
	i = j + k; PRINT("j + k", i);
	i = j - k; PRINT("j - k", i);
	i = k / j; PRINT("k / j", i);
	i = k * j; PRINT("k * j", i);
	i = k % j; PRINT("k % j", i);
	// ��������� ������� �������� ������ � ������ �������:
	j %= k; PRINT("j %= k", j);
	cout << "Enter a floating-point number: ";
	cin >> v;
	cout << "Enter another floating-point number:";
	cin >> w;
	PRINT("v", v); PRINT("w", w);
	u = v + w; PRINT("v + w", u);
	u = v - w; PRINT("v - w", u);
	u = v * w; PRINT("v * w", u);
	u = v / w; PRINT("v / w", u);
	// ��������� �������� ����� �������� � int, char � double:
	PRINT("u", u); PRINT("v", v);
	u += v; PRINT("u += v", u);
	u -= v; PRINT("u -= v", u);
	u *= v; PRINT("u *= v", u);
	u /= v; PRINT("u /= v", u);
} ///:~