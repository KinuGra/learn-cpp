#include <iostream>
using namespace std;

/*
 * クラスの中にデータと機能をひとまとめにし、
 * 保護したいメンバにprivateをつけてアクセスできなくする機能を
 * カプセル化という。
 * クラスにカプセル化の機能を持たせることで、誤りの起きにくいプログラムを作成できる
 *
 * private, public, protectedはアクセス指定子と呼ばれる
 * classでは省略すると全てprivateになるが、構造体では省略すると全てpublicになる
 */

class Car {
  // クラスの外からアクセスできないprivateメンバ
private:
  int num;
  double gas;

  // メンバ関数はpublicに
  // publicメンバはクラスの外から利用できる
public:
  int getNum() {
    return num;
  } // メンバ関数の本体をクラス内で定義するとインライン関数になる
  double getGas() { return gas; }
  void show();
  void setNumGas(int n, double g);
};

void Car::show() {
  cout << "車のナンバー: " << num << "です\n";
  cout << "ガソリンの量は" << gas << "です\n";
}

void Car::setNumGas(int n, double g) {
  if (g > 0 && g < 1000) {
    num = n;
    gas = g;
    cout << "ナンバーを" << num << "にガソリンを" << gas << "にしました\n";
  } else {
    cout << g << "は正しいガソリン量ではありません\n";
    cout << "ガソリン量を変更できませんでした\n";
  }
}

int main() {
  Car car1;

  car1.setNumGas(1234, 20.5);
  car1.show();

  cout << "正しくないガソリン量を (-10.0) を指定してみます・・・\n";
  car1.setNumGas(1234, -10.0);
  car1.show();

  return 0;
}
