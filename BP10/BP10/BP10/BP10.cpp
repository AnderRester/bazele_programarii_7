// BP10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	int i, n, sum = 0;
	int m = 0;


	getline(cin, text, '.');
	cin >> n;

	int len = text.length();

	if (len <= 255) {
		for (i = 0; i <= len; i++) {
			if ((text[i] != ' ') && (text[i] != ',')) {
				m++;
				//cout << text[m];
			}
			else m = 0;
			sum++;
			}

		//cout << sum-1;
		m -= 1;

		cout << m << endl;
		if(n == m) {
			for (i = 0; i <= m; i++) {
				cout << text[i];
			}
		}
	}
}




/*string text;
	int i, n, sum = 0;

	int len = text.length();

	char ch = 'a';

	cin >> text, n;

	if (len <= 255) {
		for (i = 0; i <= len; i++) {
			if (getchar(text) '_') {
				sum++;
			}
		}
		cout << text;
	}
	else cout << "Error" << endl;
	//o = text.lenght;

	//string(string & text, size_t start, size_t 255)*/