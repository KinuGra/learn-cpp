#include <iostream>
using namespace std;

/* クラス
 * モノ一般に関する性質・状態や機能をまとめたもの
 * クラス、構造体はユーザー定義型
 * */

// Car クラスの宣言
class Car {
public:
  // データメンバ: モノの性質・状態
  int num;
  double gas;
  // メンバ関数: モノの機能
  void show();
};

// Car クラスのメンバ関数の定義
void Car::show() { // Car クラスのメンバであることを示している
  cout << "車のナンバー: " << num << "です\n";
  cout << "ガソリンの量は" << gas << "です\n";
}

int main() {
  // オブジェクトを作成し、ローカル変数なのでmain()が終わる時に破棄される
  Car car1; // オブジェクト、インスタンスと呼ばれる

  car1.num = 1234;
  car1.gas = 20.5;

  car1.show();

  Car *pCar;
  pCar = new Car; // オブジェクトのためにメモリを確保：オブジェクトの作成
  (*pCar).num = 2000;
  pCar->gas = 34.5;
  pCar->show();

  return 0;
}
