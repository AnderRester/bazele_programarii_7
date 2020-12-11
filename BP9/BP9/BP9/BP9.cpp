// BP9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    int i, n, k, l;

    cin >> k,n;

    vector<int> A;
    A.resize(n);

    for (i = 0; i < n; i++) {
        cin >> A[i];
        if (k > A[i]){
            l = i;
        }
        //else cout << "NOPE" << endl;
    }
    cout << l << "- pos" << endl;
}

