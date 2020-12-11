// BP2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (c < d) {
		cout << a + b << endl;
	}
	else {
		if (c > d) {
			cout << a * b << endl;
		}
		else{
			if (c=d) {
				cout << -a + -b << endl;
			}
		}
	}
}