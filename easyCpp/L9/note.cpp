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

    const int num = 5;
    int array[num] = {82, 22, 14, 98, 450};
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (array[i] < array[j])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout << array[i] << ", ";
    }
    cout << '\n';
    for (int i = 0; i < num; i++)
    {
        cout << array + i << ' ';
        cout << *(array + i) << ", ";
        cout << '\n';
    }

    cout << array[0] << ", " << &array[0] << ", " << array << endl;
    cout << *array << ", " << *&array[0] << endl;
    cout << array + 5 << " " << array[5] << " " << *(array + 5) << endl;

    cout << array[5] << 5 [array] << endl;
}