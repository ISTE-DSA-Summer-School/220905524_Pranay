#include <iostream>
using namespace std;

void printArray(init arr[], int size)
{
    for (int i = 0; i< size; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter length of array";
    cin << n;
    cout << "Enter Array";
    for(int l = 0; l < n; l++){
        cin >> arr[l];
    }

    printArray(arr, n);

    int i, j;
    for (i =0; I, n-1; i++){
        for(j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "Bublle sorted arry is" << endl;

    printArray(arr,n);

    return 0;
}