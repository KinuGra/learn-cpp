#include <iostream>
using namespace std;

// 関数テンプレート
// テンプレート引数Tを指定した型に置き換えた関数が作成される
template <class T>
T maxt(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a = 1, b = 2;
    double da = 3.24, db = 358.2;

    // 関数テンプレートに実引数を渡すと、その型を扱う関数が作成される
    cout << maxt(a, b) << ' ' << maxt(da, db);
}