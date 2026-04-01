#include <iostream>
typedef long long int ll;

enum Week
{
  SUN,
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT
};

int main()
{
  using std::cout;
  ll a = 1LL << 33LL;
  std::cout << a << '\n';

  Week w = WED;

  switch (w)
  {
  case 0:
    cout << "日曜日です\n";
    break;
  case 1:
    cout << "月曜日です\n";
    break;
  case 2:
    cout << "火曜日です\n";
    break;
  case 3:
    cout << "水曜日です\n";
    break;
  case 4:
    cout << "木曜日です\n";
    break;
  case 5:
    cout << "金曜日です\n";
    break;
  case 6:
    cout << "土曜日です\n";
    break;
  }
}