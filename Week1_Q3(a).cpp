#include<iostream>
using namespace std;

int find(int key, int lst[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(key==lst[i])
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,7,6},num, value;

    cout << "Enter Number to find:  ";
    cin >> num;
    value = find(num, arr, sizeof(arr)/sizeof(arr[0]));
    cout << value<<endl;
    return 0;
}
