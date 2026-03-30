#include <iostream>
#include "mymax.h"
using std::string;

// ! main.cppとmymax.cppを合わせてビルドする必要があります

int test = 100; // mymax.cppで出力

namespace Hoge
{
    string hoge = "Hoge 名前空間のhoge";
}

// 無名名前空間（内部リンケージ）
namespace
{
    int secretValue = 2828;
    string secretFunc()
    {
        using std::cout;
        cout << "無名名前空間\n";
        return Hoge::hoge;
    }
}

int main()
{
    using namespace std;
    cout << mymax2(10, 20) << endl
         << mymax2(20, 10) << endl;
    cout << mymax(10.5f, 21.2f) << " " << mymax(32.5l, 21.1558l) << endl;
    cout << secretFunc() << ", " << secretValue << endl;
}