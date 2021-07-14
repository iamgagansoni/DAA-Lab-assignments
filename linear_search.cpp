#include<iostream>
using namespace std;
int lin_search(int [],int,int);
int main()
{
    int n;
    cout<<"Enter Length Of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<" Element"<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Element you want to find"<<endl;
    cin>>key;
    int loc=lin_search(arr,n,key);
    if (loc>=0)
        cout<<"Location of "<<key<<" is "<<loc<<endl;
    else
        cout<<"Key is not found";
}
int lin_search(int arr[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}