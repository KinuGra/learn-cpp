#include <iostream>
using namespace std;

int main()
{
    if (100)
        if (10)
            if (true)
                if ("ABC")
                    if ('X')
                        cout << "true\n";

    // switch(x)のxの型はコンパイル時に確定する整数型、列挙型、boolなど
    int x;
    cout << "入力をお願いします。";
    cin >> x;
    switch (x) // break文が出てくるか、ブロックが終了するまでブロック中の文が順次処理される
    {
    case 1:
        cout << 1 << endl;
        break;

    case 2:
    case 3:
        cout << "2 or 3\n";
        break;

    default:
        cout << "それら以外";
        break;
    }

    {
        cout << "block" << endl;
        cout << "block2" << endl;
    }
}
