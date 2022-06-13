#include<iostream>
#include<vector>
using namespace std;

long long int maxproduct(const vector<int>& numbers){
    long long int res = 0;
    long long int n = numbers.size();
    for(long long int i=0;i<n;i++){
        for(long long int j=i+1;j<n;j++){
            if(numbers[i]*numbers[j]>res){
                res=numbers[i]*numbers[j];
            }
        }
    }
    return res;
}

int main(){
    
    long long int n;
    //cout<<"Enter size of array : ";
    cin>>n;
    vector<int>numbers(n);
    //cout<<"Enter array elements : \n";
    for(long long int i=0;i<n;i++){
        cin>>numbers[i];
    }
    long long int result = maxproduct(numbers);
    cout<<result<<"\n";
    
    return 0;
}