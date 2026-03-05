#include <iostream>
using namespace std;

int add(int, int);
int add(int a, int b); // プロトタイプ宣言
int max2(int, int);
double max2(double, double);

void buy(int a, int b, int c = 3, int d = 4)
{ // デフォルト引数は右から指定
    cout << a + b + c + d << '\n';
    return;
}
int main()
{
    cout << add(1, 2) << '\n'; // 実引数
    cout << max2(10, 20) << '\n';
    buy(10, 20);
    buy(10, 20, 30, 40);
    cout << max2(1.5, 2.0) << '\n';
}

// 値渡し：関数が呼び出されると実引数の値が渡されて仮引数の初期化が行われる
int add(int a, int b) // 仮引数, 引数リスト
{
    return a + b;
}

// インライン関数では通常の関数と異なり、使用した部分にコードが埋め込まれる
// コンパイラは長い処理についてはインライン関数として扱わない場合もある
// 呼び出し部分に埋め込まれるのでプログラムの処理速度が向上することがある
inline int max2(int a, int b) { return a > b ? a : b; }

double max2(double a, double b)
{
    cout << "double" << endl;
    return a > b ? a : b;
}