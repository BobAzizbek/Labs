#include <iostream>
#include <cmath>

using namespace std;

// alias run="clear && g++ lab7.cpp -o lab7; ./lab7"

bool IsInPlanet(int x, int y, int cX, int cY, int R)
{
    int distanceToRadius = pow(x - cX, 2) + pow(y - cY, 2);
    if (distanceToRadius < pow(R, 2))
    {
        return true;
    }
    return false;
}

bool HasCrossing(int startX, int startY, int endX, int endY, int cX, int cY, int R)
{
    if (IsInPlanet(startX, startY, cX, cY, R) && !IsInPlanet(endX, endY, cX, cY, R))
    {
        return true;
    }
    else if (!IsInPlanet(startX, startY, cX, cY, R) && IsInPlanet(endX, endY, cX, cY, R))
    {
        return true;
    }
    return false;
}

int crossings()
{
    int startX, startY, endX, endY, count = 0;
    cin >> startX >> startY >> endX >> endY;

    int planets;
    cin >> planets;

    while (planets--)
    {
        int cX, cY, R;
        cin >> cX >> cY >> R;

        if (HasCrossing(startX, startY, endX, endY, cX, cY, R))
        {
            count++;
        }
    }
    return count;
}

int main16()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << crossings() << endl;
    }

    return 0;
}

int IsPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        if (sum == n)
        {
            return 1;
        }
    }
    return 0;
}

int main15()
{
    int n;
    cin >> n;

    cout << IsPerfect(n) << endl;

    return 0;
}

int CountOnes(int n)
{
    int count = 0;
    while (n)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main14()
{
    int n;
    cin >> n;

    cout << CountOnes(n) << endl;

    return 0;
}

int IsCorrectFormat(int x)
{
    if (x >= 1000 && x <= 9999 || x >= 100000 && x <= 999999)
    {
        return 1;
    }
    return 0;
}

int main13()
{
    int x;
    cin >> x;

    cout << IsCorrectFormat(x) << endl;

    return 0;
}

bool IsPositive(int n)
{
    return n > 0 ? 1 : 0;
}

int readNumbers(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (IsPositive(x))
        {
            count++;
        }
    }
    return count;
}

int main12()
{
    int n;
    cin >> n;

    cout << readNumbers(n) << endl;

    return 0;
}

int MagicNum(int n)
{
    if (n >= 1 && n <= 99)
    {
        return 1;
    }
    else if (n >= 100 && n <= 999)
    {
        if (n % 10 - (n / 10) % 10 == (n / 10) % 10 - n / 100)
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

int main11()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += MagicNum(i);
    }

    cout << sum << endl;

    return 0;
}

int main10()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (i + j + k == n)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}

int max1, max2;

void update(int n)
{
    max2 = n > max2 ? n : max2;
    max2 = n > max1 ? max1 : max2;
    max1 = n > max1 ? n : max1;
}

int main9()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }
        update(n);
    }
    cout << max1 << " " << max2 << endl;

    return 0;
}

int func(int x, int a, int b, int c)
{
    return a * pow(x, 2) + b * x + c;
}

int main8()
{
    int x, a, b, c, e, f, g;
    cin >> x >> a >> b >> c >> e >> f >> g;

    cout << func(func(x, a, b, c), e, f, g) << endl;

    return 0;
}

int main7()
{
    int x, a, b, c;
    cin >> x >> a >> b >> c;

    cout << func(x, a, b, c) << endl;

    return 0;
}

int func(int x)
{
    return 2 * pow(x, 2) - 5 * x + 1;
}

int main6()
{
    int n;
    cin >> n;

    cout << func(n) << endl;

    return 0;
}

void print_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main5()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n <= 0)
        {
            break;
        }

        print_triangle(n);
    }

    return 0;
}

void print_row1(int n)
{
    int temp = n;
    while (n--)
    {
        cout << temp;
    }
    cout << endl;
}

void print_row2(int n)
{
    for (int i = 1; i <= n - 2; i++)
    {
        cout << n;
        for (int i = 1; i <= n - 2; i++)
        {
            cout << " ";
        }
        cout << n << endl;
    }
}

int main4()
{
    int n;
    cin >> n;

    print_row1(n);
    print_row2(n);
    print_row1(n);

    return 0;
}

int sum(int n)
{
    return n * (n + 1) / 2;
}

int main3()
{
    int n, s = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s += sum(i);
    }

    cout << s << endl;

    return 0;
}

int main2()
{
    int a, b;
    cin >> a >> b;

    cout << sum(b) - sum(a - 1) << endl;

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int main1()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = add(i, sum);
    }
    cout << sum << endl;
    return 0;
}