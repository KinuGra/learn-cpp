#include <iostream>

// 共用体型：各メンバは同じメモリアドレスを共有している
union Year
{
    int ad;
    int gengo;
};

int main()
{
    using std::cout;
    Year myyear;

    myyear.ad = 100;
    cout << myyear.ad << ", " << myyear.gengo << '\n';

    myyear.gengo = 55555;
    cout << myyear.ad << ", " << myyear.gengo << '\n';

    cout << &myyear.ad << ", " << &myyear.gengo << '\n';
}