// BP1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int s,p;

    cout << "Introduce deopozit si procent." << endl;

    cin >> s >> p;

    cout << (s + (s*p/100*0.25)) << " lei";
}
