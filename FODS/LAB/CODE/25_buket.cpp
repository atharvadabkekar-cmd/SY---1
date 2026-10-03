#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int bucket[10][100];
    int count[10] = {0};
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements (0-99): ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Put elements into buckets
    for(int i = 0; i < n; i++)
    {
        int index = a[i] / 10;
        bucket[index][count[index]] = a[i];
        count[index]++;
    }

    // Sort each bucket
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < count[i] - 1; j++)
        {
            for(int k = 0; k < count[i] - j - 1; k++)
            {
                if(bucket[i][k] > bucket[i][k + 1])
                {
                    int temp = bucket[i][k];
                    bucket[i][k] = bucket[i][k + 1];
                    bucket[i][k + 1] = temp;
                }
            }
        }
    }

    // Combine buckets
    int index = 0;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            a[index] = bucket[i][j];
            index++;
        }
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}