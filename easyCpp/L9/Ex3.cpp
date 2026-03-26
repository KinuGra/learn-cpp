#include <iostream>
#include <cstring>
using namespace std;

int count(char str[], char c)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    cout << "文字列を入力してください\n";
    cin >> str;
    char c;
    cout << "文字列から探す文字列を入力してください\n";
    cin >> c;
    cout << str << "の中に" << c << "は全部で" << count(str, c) << "個あります。\n";
}