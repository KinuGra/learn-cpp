#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "hello";
    char str2[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << str << ", " << str2 << '\n';
    printf("%s, %s\n", str, str2);

    const char *str3 = "Hello";
    cout << str3 << endl;
    printf("%p, %p\n", str3, &str3[1]);

    str3 = "Goodbye";
    cout << str3 << endl;
    printf("%p, %p\n", str3, &str3[1]);

    char str4[100];
    cout << "文字列を入力してください >> ";
    cin >> str4;
    cout << "文字列の長さは" << strlen(str4) << '\n';
    for (int i = 0; str4[i] != '\0'; i++)
    {
        cout << str[i] << "*";
    }
    cout << '\n';
}
