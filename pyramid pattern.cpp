#include<iostream>
using namespace std;

int main(){
    int rows,i,j,space;
    cout<<"Enter rows : ";
    cin>>rows;
    for(i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++){
            cout<<"  ";
        }
        for(j=0;j<=i;j++){
            cout<<"*   ";
        }
        cout<<endl;
    }
    
    return 0;
}