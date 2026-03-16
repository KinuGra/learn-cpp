#include <iostream>
using namespace std;

int main()
{
    int test[5];
    for (int i = 0; i < sizeof(test) / sizeof(test[0]); i++)
    {
        cout << test[i] << ", ";
    }
    cout << endl;
    int nums[] = {1, 2, 3, 4, 5};
    cout << "配列のサイズは" << sizeof(nums) << endl;
}