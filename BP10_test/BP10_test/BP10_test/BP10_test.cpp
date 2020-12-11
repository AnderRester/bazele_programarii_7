// BP10_test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int i, n, m = 0;

    getline(cin, text, '.');
    cin >> n;

    if (text.length() <= 255) {
        for (i = 0; i <= text.length(); i++) {
            if (text[i] != ' ' && text[i] != ',' && text[i]) {
                m++;
            }
            else {
                if(n == m){
                for (i = 0; i <= m - 1; i++) {
                    cout << text[i];
                }
                }
                cout << m << endl;
            }
        }
    }    
}
