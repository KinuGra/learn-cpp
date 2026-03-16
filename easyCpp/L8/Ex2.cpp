#include <iostream>

// reference
void add(int &x1, int &x2, int a)
{
    x1 += a;
    x2 += a;
}

int main()
{
    int x1, x2, a;
    std::cout << "2科目の点数を入力してください。\n";
    std::cin >> x1 >> x2;
    std::cout << "加算する点数を入力してください。\n";
    std::cin >> a;
    std::cout << a << "点加算しましたので\n";
    add(x1, x2, a);
    std::cout << "科目1は" << x1 << "点となりました。\n";
    std::cout << "科目2は" << x2 << "点となりました。\n";
}