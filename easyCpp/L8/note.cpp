#include <iostream>
#include <stdio.h>
using namespace std;

void my_swap(int *, int *);
void rswap(int &, int &);

int main()
{
    int a = 100;
    cout << "変数aのアドレスは：" << &a << endl;

    int *pA = &a;
    cout << "ポインタpAの値は：" << pA << endl;

    // * 間接参照演算子
    cout << "*pAの値は：" << *pA << endl;

    cout << "*pAに300を代入してaを出力：";
    *pA = 300;
    cout << a << '\n';

    int *pB, c;
    cout << typeid(*pB).name() << ", " << typeid(pB).name();
    cout << ", " << typeid(c).name() << '\n';

    int num1 = 1, num2 = 2;
    my_swap(&num1, &num2); // 参照渡し
    cout << num1 << ", " << num2 << '\n';

    // 8.4 参照
    int x = 5;
    int &rX = x;
    cout << "変数x:" << x << '\n';
    cout << "参照rX:" << rX << '\n';

    rX = 2222;
    cout << "x: " << x << ", rX: " << rX << '\n';
    cout << "&x: " << &x << ", &rX: " << &rX << '\n';

    int num3 = 300, num4 = 400;
    int &rNum3 = num3, &rNum4 = num4;
    rswap(num3, num4);
    cout << "num3: " << num3 << ", num4: " << num4 << '\n';
}

void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    /*
    int型で実引数の値渡しをして、仮引数を入れ替えても
    実引数に影響はないが、ポインタを使えば実引数を入れ替えられる
    */
}

// 参照によるmy_swap()
void rswap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}