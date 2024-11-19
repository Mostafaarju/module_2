#include <bits/stdc++.h>
using namespace std;
int *p;

void fun()
{
    // int x = 10;

    // p = &x;

    int *x = new int;
    *x = 10;
    p = x;

    cout << "Fun -> " << *p << endl;
    return;
}

int main()
{

    // int a = 10;

    // int *p = new int;
    //  *p = 10;

    //  cout << *p << endl;

    fun();

    cout << "Main -> " << *p << endl;

    return 0;
}