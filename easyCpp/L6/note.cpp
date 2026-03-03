#include <iostream> // cout, endl, cin
using namespace std;

int main()
{
    int i = 0;
    // 条件に関わらず最低1回は実行される
    do
    {
        cout << "こんにちは" << i << endl;
        i++;
    } while (i < 5);
}
