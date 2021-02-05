//3. Program to reverse the elements of a given list

#include <iostream>
using namespace std;

void reverseList(int A[], int size)
{
    int start=0,end=size-1;
    while (start<end)
    {
        int temp = A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--; 
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout << "\nElements before reversing" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    reverseList(A,n);

    cout << "\nElements after reversing" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}