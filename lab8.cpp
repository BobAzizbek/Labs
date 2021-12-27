#include <iostream>
#include <iomanip>

using namespace std;

// alias run="clear && g++ lab8.cpp -o lab8; ./lab8"

void readArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void readArr(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main11()
{
    int n, m, b, sumUmb = 0;
    cin >> n >> m >> b;

    int arr[m], where, umbrella;
    for (int i = 0; i < m; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> where >> umbrella;

        if (umbrella == 1)
        {
            if (arr[b - 1] > 0)
            {
                arr[b - 1]--;
                arr[where - 1]++;
            }
            else
            {
                arr[where - 1]++;
                sumUmb++;
            }
        }
        b = where;
    }

    cout << sumUmb << endl;

    return 0;
}

int main10()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], sum = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        double average = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > average)
            {
                count++;
            }
        }

        cout << setprecision(3) << fixed << (float)100 / n * count << "%\n";
    }

    return 0;
}

int main9()
{
    int arr[3][2], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }

    return 0;
}

int main8()
{
    char numbers[][6] =
        {
            {'Z', 'E', 'R', 'O', '-'},
            {'O', 'N', 'E', '-', '-'},
            {'T', 'W', 'O', '-', '-'},
            {'T', 'H', 'R', 'E', 'E'},
            {'F', 'O', 'U', 'R', '-'},
            {'F', 'I', 'V', 'E', '-'}};

    int arr[3];

    readArr(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << numbers[arr[i]][j];
        }
        cout << endl;
    }

    return 0;
}

int main7()
{
    int arr[3][3], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i][i];
    }

    cout << sum << endl;

    return 0;
}

int main6()
{
    char arr[5];

    readArr(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0, count = (sizeof(arr) / sizeof(arr[0])) - i; j < 5; j++, count++)
        {
            cout << arr[count % 5];
        }
        cout << endl;
    }

    return 0;
}

int main5()
{
    char arr[7];
    int count = 0;

    readArr(arr, 7);

    for (int i = 1; i < 6; i++)
    {
        if (arr[i - 1] == 'c' && arr[i] == 'a' && arr[i + 1] == 't')
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

int main4()
{
    int arr[5];
    readArr(arr, 5);

    int max1, max2;
    max1 = arr[0] > arr[1] ? arr[0] : arr[1];
    max2 = arr[0] > arr[1] ? arr[1] : arr[0];

    for (int i = 2; i < 5; i++)
    {
        max2 = arr[i] > max2 ? arr[i] : max2;
        max2 = arr[i] > max1 ? max1 : max2;
        max1 = arr[i] > max1 ? arr[i] : max1;
    }

    if (max1 != max2)
    {
        cout << max1 << endl
             << max2 << endl;
    }
    else
    {
        cout << max1 << endl
             << max2 << " I don't\n";
    }

    return 0;
}

void printStars(int num, int count)
{
    cout << num << ": ";
    while (count--)
    {
        cout << "*";
    }
    cout << endl;
}

int main3()
{
    int arr[10], ones = 0, twos = 0, threes = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        switch (arr[i])
        {
        case 1:
            ones++;
            break;
        case 2:
            twos++;
            break;
        case 3:
            threes++;
            break;

        default:
            break;
        }
    }

    printStars(1, ones);
    printStars(2, twos);
    printStars(3, threes);

    return 0;
}

int main2()
{
    int arr[5];

    readArr(arr, 5);

    for (int i = 0; i < 5 - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    printArr(arr, 5);

    return 0;
}

int main1()
{
    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / 5;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= average)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}