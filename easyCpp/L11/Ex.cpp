#include <iostream>
#include <iomanip>
using namespace std;

struct Person
{
    int age;
    double height;
    double weight;
};

void func(Person *p)
{
    cout << "年齢: ";
    cin >> p->age;
    cout << "身長: ";
    cin >> p->height;
    cout << "体重: ";
    cin >> (*p).weight;
}
void func2(Person &p)
{
    cout << "年齢: ";
    cin >> p.age;
    cout << "身長: ";
    cin >> p.height;
    cout << "体重: ";
    cin >> p.weight;
}

void print(Person p)
{
    printf("年齢%d 身長%.1f ", p.age, p.height);
    cout << fixed << setprecision(1) << "体重" << p.weight << endl;
}

int main()
{
    Person p1;
    func(&p1);
    print(p1);
    Person p2;
    func2(p2);
    print(p2);
}
