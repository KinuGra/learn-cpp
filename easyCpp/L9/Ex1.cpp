#include <iostream>
using namespace std;

int myMax(int x[])
{
    int max_value = x[0];
    for (int i = 0; i < 5; i++)
    {
        max_value = (max_value, x[i]);
    }
    return max_value;
}

int main()
{
    int x[5];
    cout << "テストの点数を入力してください。\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }
    cout << "最高点は" << myMax(x) << "点です。\n";
}