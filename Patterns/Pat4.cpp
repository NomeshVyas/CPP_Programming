#include<iostream>
using namespace std;

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

int main(){
    int i, j, n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}