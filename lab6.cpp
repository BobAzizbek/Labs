#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// alias run="clear && g++ lab6.cpp -o lab6; ./lab"

int main6_24()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

int main6_23()
{
    int n, count = 0;
    cin >> n;

    while (true)
    {
        int m = n / 10;
        n = m;
        count++;
        if (n <= 0)
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}

int daraja(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool Arm(int n)
{
    int i = n, x = daraja(n), sum = 0;
    while (i)
    {
        int temp = i % 10;
        sum += pow(temp, x);
        i /= 10;
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}

int main6_22()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (Arm(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

bool Palindrom(int n)
{
    int value = n, reverse = 0;
    while (n)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (value == reverse)
    {
        return true;
    }
    return false;
}

int reverseDigits(int n)
{
    int reverse = 0;
    while (n)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}

int main6_21()
{
    int n, count = 0;
    cin >> n;

    while (Palindrom(n) == false)
    {
        n = n + reverseDigits(n);
        count++;
    }

    cout << count << " " << n << endl;

    return 0;
}

int getNewN(int n)
{
    int sumOfDigital = 0, originalN = n;
    while (n)
    {
        sumOfDigital += n % 10;
        n /= 10;
    }
    int newN = originalN % 10 * 10 + sumOfDigital % 10;
    return newN;
}

int main6_20()
{
    int n, count = 0;
    cin >> n;

    for (int newN, copyN = n;; copyN = newN)
    {
        newN = getNewN(copyN);
        count++;
        if (n == newN)
        {
            cout << count << endl;
            break;
        }
    }

    return 0;
}

int main6_19()
{
    int f1 = 0, f2 = 1, f3 = f1 + f2;

    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    cout << f3 << endl;

    return 0;
}

int Collatz(long n)
{
    int count = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        count++;
    }
    return count;
}

int main6_18()
{
    long n, m;
    cin >> n >> m;

    if (Collatz(n) < Collatz(m))
    {
        cout << n << " " << Collatz(n) << endl;
    }
    else
    {
        cout << m << " " << Collatz(m) << endl;
    }

    return 0;
}

int main6_17()
{
    int t, direction = 0, x = 0, y = 0;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        switch (direction % 4)
        {
        case 0:
            y += n;
            break;
        case 1:
            x += n;
            break;
        case 2:
            y -= n;
            break;
        case 3:
            x -= n;
            break;
        default:
            break;
        }
        direction++;
    }
    cout << x << " " << y << endl;

    return 0;
}

int main6_16()
{
    int n;
    cin >> n;

    for (int i = n;; i++)
    {
        if (n <= 1)
        {
            break;
        }
        bool tubmi = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                tubmi = false;
                break;
            }
        }
        if (tubmi == true)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

int main6_15()
{
    int n;
    cin >> n;

    for (int i = 1;; i++)
    {
        if (n % i == 0)
        {
            n /= i;
        }
        else
        {
            break;
        }
    }

    if (n == 1)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}

int main6_14()
{
    int t, sum = 0;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        sum += pow(n, 3);
    }

    cout << sum << endl;

    return 0;
}

int main6_13()
{
    int sum = 0, count = 0;
    float average = 0;
    while (true)
    {
        int n;
        cin >> n;

        if (n <= 0)
        {
            cout << sum << " " << setprecision(2) << fixed << average << " " << count << endl;
            break;
        }

        sum += n;
        count++;
        average = (float)(sum / count);
    }

    return 0;
}

int main6_12()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1;; i++)
    {
        if (i > n)
        {
            break;
        }
        sum += i;
    }

    cout << sum << endl;

    return 0;
}

int main6_11()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
                if (i + j + k == 10)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}

int main6_10()
{
    int n, sum = 0;
    cin >> n;

    while (true)
    {
        sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        if (sum < 10)
        {
            cout << sum << endl;
            break;
        }
        n = sum;
    }

    return 0;
}

int main6_9()
{
    int n, count = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << count++ % 10 << " ";
        }
        cout << endl;
    }

    return 0;
}

int main6_8()
{
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j)
        {
            if (j % 10 == 3)
            {
                count++;
            }
            j /= 10;
        }
    }

    cout << count << endl;

    return 0;
}

int main6_7()
{
    for (int i = 1; i <= 10; i++)
    {
        int count = 1;
        int n = i;
        while (count <= 10)
        {
            cout << n++ % 10 << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}

int main6_6()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space--)
        {
            cout << " ";
        }
        int stars = i * 2 - 1;
        while (stars--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        int space = n - i;
        while (space--)
        {
            cout << " ";
        }
        int stars = i * 2 - 1;
        while (stars--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int main6_5()
{
    int n, m;
    cin >> n >> m;

    while (n != m)
    {
        if (n % m == 0)
        {
            n %= m;
        }
        else
        {
            m %= n;
        }
        if (n == 0)
        {
            n = m;
        }
        if (m == 0)
        {
            m = n;
        }
    }

    cout << n << endl;
    return 0;
}

int main6_4()
{
    for (int i = 2; i <= 10; i++)
    {
        cout << i << "!=";
        for (int j = 1; j < i; j++)
        {
            cout << j << "*";
        }
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        cout << i << "=" << fact << endl;
    }

    return 0;
}

int main6_3()
{
    int sum = 0;

    do
    {
        int n;
        cin >> n;
        sum += n;
        if (n == 0)
        {
            cout << sum << endl;
            break;
        }
    } while (true);

    return 0;
}

int main6_2()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0;; i++)
    {
        int guess;
        cin >> guess;
        count++;
        if (guess > n)
        {
            cout << guess << ">\n";
        }
        else if (guess < n)
        {
            cout << guess << "<\n";
        }
        else
        {
            cout << count << endl;
            break;
        }
    }

    return 0;
}

int main6_1()
{
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;

    return 0;
}