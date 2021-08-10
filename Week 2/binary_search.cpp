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
        int mid=binary_search(arr,0,key,n);
        if (mid>=0)
        {
            int first=mid,last=mid;
            for(int i=mid-1;arr[i]==arr[mid];i--,first--);
            for(int i=mid+1;arr[i]==arr[mid];i++,last++);
            cout<<(last-first)+1;
        }
        
        t--;
    }
    return 0;
    
}
int binary_search(int arr[],int first,int key,int last)
{
    if(first<=last)
    {
        int middle=first+(last-first)/2;
        if(arr[middle]==key){
            cout<<"Present ";
            return middle;
        }
        
        if(arr[middle]>key)
        {
            return binary_search(arr,first,key,middle-1);
        }
        if(arr[middle]<key)
        {
            return binary_search(arr,middle+1,key,last);
        }
    }
    else{
        cout<<"Not present ";
    }
    return -1;
}