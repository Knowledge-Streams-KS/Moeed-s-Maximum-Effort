// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[9] = {0, 0, 0, 1, 1, 2, 3, 3, 3};
    int a = arr[0];
    int x = 1;
    int size = sizeof(arr) / sizeof(int);
    
    

    for (int i = 1; i < 8; i++)
    {
        if (a == arr [i])
        {
            x = x + 1;
        }
        else
        {
            a = arr[i];
            x = 1;
        }
        if (x >= 3)
        {
            for (int y = i; y < size - 1; y++)
            {
                arr[y - 1] = arr[y];
                if (arr[i - 1] == arr[i])
                {
                    for (int b = i; b < size - 1; b++)
                    {
                        arr[b - 1] = arr[b];
                    }
                    
                }
            }
            // if (arr[i - 1] == arr[i])
            // {
            //     for (int y = i; y < size - 1; y++)
            //     {
            //         arr[y - 1] = arr[y];
            //     }
            // }
            x = 1;
            i--;
            size --;
        }
    }
    
    for (int p = 0; p < size; p++)
    {
        cout << arr[p] << "\t";
    }

    return 0;
}