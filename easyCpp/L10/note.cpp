#include <iostream>
using namespace std;
void func();

// グローバル変数とstaticなローカル変数は自動的に0で初期化される
// ローカル変数を初期化しない場合の値は決まっていない
int a = 0;

int main()
{
    int a = 1;
    a++;
    cout << a << endl;
    ::a++;
    func();
    cout << ::a << endl;

    for (int i = 0; i < 5; i++)
    {
        func();
    }
}

void func()
{
    int b = 0;
    static int c = 0;
    printf("a: %d, b:%d, c:%d\n", a, b, c);

    a++;
    b++;
    c++;
}
