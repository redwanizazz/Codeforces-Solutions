#include <iostream>
using namespace std;

int main()
{

    int n;
    int result = 0;
    int countOfEven = 0;
    int countOfOdd = 0;
    cin >> n;

    int array[101];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (array[j] % 2 == 0)
        {
            countOfEven++;
        }

        else
        {
            countOfOdd++;
        }
    }

    if (countOfOdd == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 == 1)
            {
                result = i;
                break;
            }
        }
    }
    else if (countOfEven == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 == 0)
            {
                result = i;
                break;
            }
        }
    }

    cout << (result + 1) << endl;

    return 0;
}