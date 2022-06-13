#include<iostream>
using namespace std;

int main(){
    
    int rows,cof=1,i,j,space;
    cout<<"Enter rows : ";
    cin>>rows;
    for(i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++){
            cout<<"  ";
        }
        for(j=0;j<=i;j++){
            if(j==0||i==0){
                cof=1;
            }
            else{
                cof=cof*(i-j+1)/j;
            }
            cout<<cof<<"  ";
        }
        cout<<endl;
    }
    return 0;
}