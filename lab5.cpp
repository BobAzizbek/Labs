#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// alias run="clear && g++ lab5.cpp -o lab5; ./lab5"

int main5_21()
{
    int n;
    cin >> n;

    cout << (n % 2 == 0 ? "even\n" : "odd\n");

    return 0;
}

int main5_20()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

int main5_19()
{
    int n;
    cin >> n;

    cout << (n / 100 % 10 > 5 ? (n / 1000 + 1) * 1000 : (n / 1000) * 1000) << endl;

    return 0;
}

int main5_18()
{
    int n;
    cin >> n;

    if (n >= 90 && n <= 100)
    {
        cout << "A\n";
    }
    else if (n >= 80 && n <= 89)
    {
        cout << "B\n";
    }
    else if (n >= 70 && n <= 79)
    {
        cout << "C\n";
    }
    else if (n >= 60 && n <= 69)
    {
        cout << "D\n";
    }
    else
    {
        cout << "F\n";
    }

    return 0;
}

int main5_17()
{
    int hour, minute;
    cin >> hour >> minute;

    if (hour == 0)
    {
        hour = 24;
    }

    int n = hour * 60 + minute - 45;

    cout << n / 60 << " " << n % 60 << endl;

    return 0;
}

int main5_16()
{
    int num;
    cin >> num;

    switch (num)
    {
    case 0:
        cout << "nol\n";
        break;
    case 1:
        cout << "bir\n";
        break;
    case 2:
        cout << "ikki\n";
        break;
    case 3:
        cout << "uch\n";
        break;
    case 4:
        cout << "to'rt\n";
        break;
    case 5:
        cout << "besh\n";
        break;

    case 6:
        cout << "olti\n";
        break;
    case 7:
        cout << "yetti\n";
        break;
    case 8:
        cout << "sakkiz\n";
        break;
    case 9:
        cout << "to'qqiz\n";
        break;

    default:
        cout << "boshqa\n";
        break;
    }

    return 0;
}

int main5_15()
{
    char ch;
    cin >> ch;

    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}

int main5_14()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2)))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}

int main5_13()
{
    int n, m;
    cin >> n >> m;

    if (n + m > 100)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}

int main5_11()
{
    int choise, pay;
    cin >> choise >> pay;

    switch (choise)
    {
    case 1:
        cout << "Americano" << endl
             << (pay - 500) / 500 << " " << ((pay - 500) % 500) / 100 << endl;
        break;
    case 2:
        cout << "Caffe Latte" << endl
             << (pay - 400) / 500 << " " << ((pay - 400) % 500) / 100 << endl;
        break;
    case 3:
        cout << "Lemon Tea" << endl
             << (pay - 300) / 500 << " " << ((pay - 300) % 500) / 100 << endl;
        break;
    default:
        break;
    }

    return 0;
}

int main5_10()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;

    if (ch == '-')
    {
        cout << a - b << endl;
    }
    else
    {
        cout << a + b << endl;
    }

    return 0;
}

int main5_9()
{
    int a, b, c;
    cin >> a >> b >> c;
    int e, f, g;
    cin >> e >> f >> g;

    int strike = 0, ball = 0;

    if (e == a)
    {
        strike++;
    }
    else if (e == b || e == c)
    {
        ball++;
    }
    if (f == b)
    {
        strike++;
    }
    else if (f == a || f == c)
    {
        ball++;
    }
    if (g == c)
    {
        strike++;
    }
    else if (g == a || g == b)
    {
        ball++;
    }

    cout << strike << "S" << ball << "B" << endl;

    return 0;
}

int main5_8()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << (char)(ch + 32) << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << (char)(ch - 32) << endl;
    }
    else
    {
        cout << "none\n";
    }

    return 0;
}

int main5_7()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2; i++)
    {
        int m;
        cin >> m;

        if (m > n)
        {
            cout << "DOWN\n";
        }
        else if (m < n)
        {
            cout << "UP\n";
        }
        else
        {
            cout << "Correct\n";
            break;
        }
    }

    return 0;
}

int main5_6()
{
    int n;
    cin >> n;

    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
    {
        cout << "leap year\n";
    }
    else
    {
        cout << "normal year\n";
    }

    return 0;
}

int main5_5()
{
    int n;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
    {
        cout << "A\n";
    }
    else if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "B\n";
    }
    else if (n % 2 == 0 && n % 5)
    {
        cout << "C\n";
    }
    else if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "D\n";
    }
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
    {
        cout << "E\n";
    }
    else
    {
        cout << "N\n";
    }

    return 0;
}

int main5_4()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max, min;

    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else if (c < a && c < b)
    {
        min = c;
    }

    cout << max << " " << min << endl;

    return 0;
}

int main5_3()
{
    int n, m;
    cin >> n >> m;

    cout << (n > m ? n : m) << endl;

    return 0;
}

int main5_2()
{
    int n, m;
    cin >> n >> m;

    if (n * n == m)
    {
        cout << n << "*" << n << "=" << pow(n, 2) << endl;
    }
    else if (m * m == n)
    {
        cout << m << "*" << m << "=" << pow(m, 2) << endl;
    }
    else
    {
        cout << "none\n";
    }

    return 0;
}

int main5_1()
{
    int n;
    cin >> n;

    if (n >= 0 && n < 40)
    {
        cout << "tashqarida o'yna\n";
    }
    else
    {
        cout << "ichkarida o'yna\n";
    }
    return 0;
}

int main5_12()
{
    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        main5_4();
        break;
    case 2:
        main5_9();
        break;
    case 3:
        main5_10();
        break;
    default:
        break;
    }

    return 0;
}