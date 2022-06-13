#include<iostream>
#include<vector>
using namespace std;

int maxproduct(const vector<int>& numbers){
    int res = 0;
    int n = numbers.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(numbers[i]*numbers[j]>res){
                res=numbers[i]*numbers[j];
            }
        }
    }
    return res;
}

int main(){
    
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>numbers(n);
    cout<<"Enter array elements : \n";
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    int result = maxproduct(numbers);
    cout<<result<<"\n";
    
    return 0;
}