#include <iostream>
using namespace std;

void func(int &rA)
{
    cout << rA << endl;
}

int main()
{
    int a = 2;
    int &rA = a;
    cout << rA << endl;
    func(rA);
    func(a);
}
