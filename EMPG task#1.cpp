#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    
    int arr[size];
    
    cout << "\nEnter the elements\n";
    
    for (int a = 0; a < size; a++)
    {
        cin >> arr[a];
    }
    
    cout << "\n\nInput: [\t";
    
    for (int x = 0; x < size ; x++)
    {
        cout << arr[x] << "\t";
    }
    
    int f = 0;
    
    for (int i = 0; i < size - 1; i++)
    {
        int sum = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            sum = sum + arr[j];
            if (sum > f)
            {
                f = sum;
            }
        }
    }
    
    cout << "]\nOutput: " << f;

    return 0;
}