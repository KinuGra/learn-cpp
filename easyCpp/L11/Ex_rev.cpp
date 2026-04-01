#include <iostream>

struct Person
{
    int age;
    double height;
};

int main()
{
    using namespace std;
    Person p[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "年齢";
        cin >> p[i].age;
        cout << "体重";
        cin >> p[i].height;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "年齢: " << p[i].age << endl;
        cout << "身長: " << p[i].height << endl;
    }
}