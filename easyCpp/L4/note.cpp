#include <iostream>
#define PI 3.1415
using namespace std;

/*
式（Expression）は計算の結果、1つの値になる
例：10 + 5 は評価された結果15という値になる、x > 10は評価されtrueまたはfalseになる
*/
int main()
{
    cout << ~5 << endl;

    int arr[10];
    cout << "short: " << sizeof(short) << "\n";
    cout << "int: " << sizeof(int) << "\n";
    cout << "long double: " << sizeof(long double) << "\n";
    cout << sizeof(22342.4224252352) << "\n";
    cout << "int a[10]: " << sizeof(arr) << endl;

    // 代入演算子は基本的に右結合的な演算子, + は左結合
    int a = 10, b = 20, c = 30;
    a = b = c = a + b + c; // c = (a+b) + c、この結果がbに代入され...
    cout << a << b << c << endl;
}
