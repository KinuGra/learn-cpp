#include <iostream>
using namespace std;

// 構造体型の宣言
struct Car
{
    // 各メンバ
    int num;
    double gas;
};
void printCar(Car);

void printCar2(Car *car)
{
    cout << "* 構造体へのポインタを受け取る\n";
    cout << "number:\t" << (*car).num << endl;
    // アロー演算子
    cout << "gas:\t" << car->gas << endl;
}
void printCar3(Car &car)
{
    cout << "& 参照を受け取る\n";
    cout << "number:\t" << car.num << endl;
    // アロー演算子
    cout << "gas:\t" << car.gas << endl;
}

int main()
{
    // 構造体型の変数の宣言
    Car car1;
    car1.num = 1111;
    car1.gas = 83283.352;
    printCar(car1);

    Car car2 = {2222, 22.54};
    printCar(car2);

    // 構造体のメンバを1つずつコピーして代入
    Car car3 = car2;
    printCar(car3);

    Car car4 = {4444, 4.4};
    printCar2(&car4);
    printCar3(car4);
}

void printCar(Car c)
{
    cout << "車のナンバー: "
         << c.num << endl;
    cout << "ガソリンの量: "
         << c.gas << endl;
}