#include <iostream>

using namespace std;

void linearsearch(int arr[],int n,int x){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"element found at location : "<<i+1;
            found=1;
            break;
        }
    }
    if(!found){
        cout<<"element not found.";
    }
}

int main()
{
    int arr[20],n,x,i,j;
    cout<<"Enter n of elements : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter element to search : ";
    cin>>x;
    linearsearch(arr,n,x);
    
    return 0;
}