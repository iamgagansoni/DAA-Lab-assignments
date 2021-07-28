#include<iostream>
#include<cmath>
using namespace std;
int jump_Search(int[],int,int);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int comp=jump_Search(arr,n,key);
    cout<<comp;
}
int jump_Search(int arr[],int n,int key)
{
    int comp=0,jump=sqrt(n),prev=0;
    while(arr[min(jump,n)]<key)
    {
        comp++;
        prev=jump;
        jump+=sqrt(n);
        if(prev>=n)
        {
            comp++;
            cout<<"Not Present ";
            return comp;
        }
    }
    while(arr[prev]<key)
    {
        prev++;
        if(prev==min(jump,n))
        {
            comp++;
            cout<<"Not Present ";
            return comp;
        }
    }
    if(arr[prev]==key)
    {
        comp++;
        cout<<"Present ";
        return comp;
    }
    return 0;
}