#include <iostream>
using namespace std;

int main()
{
    int *pA;
    pA = new int; // メモリを動的に確保
    *pA = 100;
    cout << *pA << endl;
    delete pA; // メモリを解放
}