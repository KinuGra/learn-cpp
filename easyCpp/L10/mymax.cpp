#include <iostream>

extern int test;
int mymax2(int a, int b)
{
    std::cout << "ここで別のファイルのグローバル変数を出力（test++）: " << test++;
    std::cout << '\n';
    return a < b ? b : a;
}