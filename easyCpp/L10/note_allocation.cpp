#include <iostream>
using namespace std;

void func(int *);

int main()
{
  int *pA;
  pA = new int; // メモリを動的に確保
  *pA = 100;
  cout << *pA << endl;
  func(pA);
  cout << *pA << endl;
  delete pA; // メモリを解放

  int n;
  cout << "何人のテスト？";
  cin >> n;
  int *pT = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> pT[i];
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d人目のテストは%d点です。\n", i + 1, pT[i]);
  }
}

void func(int *pN)
{
  *pN = 10000;
  return;
}
