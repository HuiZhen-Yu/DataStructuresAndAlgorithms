#include <iostream>

using namespace std;

bool ChangeArrNum(int *arr, int n, int m)
{
    if (n == m)
    {
        return false;
    }
    arr[n] = arr[n] ^ arr[m];
    arr[m] = arr[n] ^ arr[m];
    arr[n] = arr[n] ^ arr[m];
    return true;
}

/* bubble sort algorithm O(n^2)*/
bool BubbleSort(int *arr, int num)
{
    if (num == 1)
    {
        return true;
    }
    else if (num > 1)
    {
        for (int i = 0; i < num - 1; i++)
        {
            for (int j = 0; j < num - 1; j++)
            {

                if (arr[j] > arr[j + 1])
                    ChangeArrNum(arr, j, j + 1);

                for (int k = 0; k < num; k++)
                    cout << arr[k] << " ";
                cout << endl;
            }
            cout << endl;
        }
        return true;
    }
    return false;
}

/* selection sort algorithm O(n^2) */
bool SelectSort(int *arr, int num)
{
    int num_min = arr[0];
    int num_cur = 0;
    if (num == 1)
    {
        return true;
    }
    else if (num > 1)
    {
        for (int i = 0; i < num; i++)
        {
            num_min = arr[i];
            num_cur = i;
            for (int j = i; j < num; j++)
            {
                if (arr[j] < num_min)
                {
                    num_min = arr[j];
                    num_cur = j;
                }
            }
            ChangeArrNum(arr, i, num_cur);
            
            for (int k = 0; k < num; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        return true;
    }
    return false;
}

int main(int argc, char **argv)
{
    int arr[100];
    int arr1[100];
    int num = 0;
    cout << "Please input some integer numbers: " << endl;
    while (cin >> arr[num])
    {
        arr1[num] = arr[num];
        ++num;
    }
    cout << "Bubble Sort..." << endl;
    BubbleSort(arr, num);
    cout << "Select Sort..." << endl;
    SelectSort(arr1, num);
    system("pause");
    return 0;
}