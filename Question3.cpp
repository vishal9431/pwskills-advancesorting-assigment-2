// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={3, 8, 6, 7, 5, 9, 10};
    int n= 7;
    int n1=-1;
    int n2=-1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(n1==-1)
            {
                n1=i;
                n2=i+1;
            }
            else
            {
                n2=i+1;
                break;
            }
        }
    }
    if(n1!=-1&&n2!=-1)
    {
        swap(arr[n1],arr[n2]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}