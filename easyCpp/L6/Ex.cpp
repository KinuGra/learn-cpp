#include <iostream> // cout, endl, cin
using namespace std;

int main()
{
    cout << "1から10までの偶数を出力します\n";
    for (int i = 1; i <= 10; i++)
        i % 2 == 0 && cout << i << endl;
    cout << endl;

    cout << "テストの点数を入力してください（0で終了）\n";
    int num = true, sum = 0;
    while (num)
    {
        cin >> num;
        sum += num;
    }
    cout << "テストの合計点は" << sum << "点です\n";
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
}
