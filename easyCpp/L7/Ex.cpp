#include <iostream>
using namespace std;
int square(int x);
double square(double x);

template <class T>
T square(T x)
{
    return x * x;
}

int main()
{
    int x;
    cout << "整数を入力してください" << endl;
    cin >> x;
    cout << x << "の2乗は" << square(x) << "です\n";

    double x2;
    cout << "小数を入力してください" << endl;
    cin >> x2;
    cout << x2 << "の2乗は" << square(x2) << "です\n";

    cout << endl;
    cout << square(100L) << " " << square(true) << endl;
}

inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }