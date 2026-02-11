#include <iostream>
using std::endl;

int main()
{
    int h, w; // 小数値が入る場合もあるのでdouble
    double res;
    std::cout << "三角形の高さ：";
    std::cin >> h;
    std::cout << "三角形の底辺：";
    std::cin >> w;
    std::cout << "三角形の面積は" << (double)w * h / 2 << endl;

    int sum = 0, tmp;
    for (int i = 1; i <= 5; i++)
    {
        std::cout << "科目" << i << "の点数：";
        std::cin >> tmp;
        sum += tmp;
    }
    std::cout << "5科目の合計点は" << sum << std::endl;
    std::cout << "5科目の平均点は" << (double)sum / 5 << std::endl;
}