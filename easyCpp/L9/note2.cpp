#include <iostream>
using namespace std;

double avg(int[]);
double pAvg(int *);

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    cout << avg(nums) << '\n';
    cout << pAvg(nums) << '\n';
}

double avg(int a[])
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    return sum / 5.0;
}

double pAvg(int *a)
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        // sum += a[i]; でもOK
        sum += *(a + i);
    }
    return sum / 5.0;
}