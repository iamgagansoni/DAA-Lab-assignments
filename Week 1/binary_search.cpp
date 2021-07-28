#include<iostream>
using namespace std;
int binary_search(int[],int,int,int);
int main()
{
    int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];            //sorted array
        }
        int key;
        cin>>key;
        int comp=binary_search(arr,0,key,n);
        cout<<comp;
        t--;
    }
    return 0;
    
}
int binary_search(int arr[],int first,int key,int last)
{
    static int comp=1;
    if(first<=last)
    {
        int middle=first+(last-first)/2;
        if(arr[middle]==key){
            comp++;
            cout<<"Present ";
            return  comp;
        }
        
        if(arr[middle]>key)
        {
            comp++;
            return binary_search(arr,first,key,middle-1);
        }
        if(arr[middle]<key)
        {
            comp++;
            return binary_search(arr,middle+1,key,last);
        }
    }
    else{
        cout<<"Not present ";
        return comp;
    }
    return 0;
}