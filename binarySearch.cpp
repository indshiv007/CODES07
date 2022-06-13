#include <iostream>

using namespace std;

void binarySearch(int arr[],int n,int x){
    int mid,low, high;
    low=0;
    high=n-1;
    while(low<=high){
        mid=int((low+high)/2);
        if(x<arr[mid]){
            high=mid-1;
        }
        else if(x>arr[mid]){
            low=mid+1;
        }
        else if(x==arr[mid]){
            cout<<"element found at location : "<<mid+1;
            break;
        }
        else{
            cout<<"element not found.";
        }
    }
}

int main()
{
    int arr[20],n,x,i,j;
    cout<<"Enter n of elements : ";
    cin>>n;
    cout<<"Enter sorted elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter element to search : ";
    cin>>x;
    binarySearch(arr,n,x);
    

    return 0;
}