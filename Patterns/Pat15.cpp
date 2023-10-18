#include<iostream>
using namespace std;

//  1   2   3   4   5   5   4   3   2   1
//  1   2   3   4   *   *   4   3   2   1
//  1   2   3   *   *   *   *   3   2   1
//  1   2   *   *   *   *   *   *   2   1
//  1   *   *   *   *   *   *   *   *   1

int main(){
    int i=1, j=1, n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout << j << "\t";
            j++;
        }
        j=1;
        while(j<2*i-1){
            cout<< "*\t";
            j++;
        }
        j=1;
        while(j<=n-i+1){
            
            cout << n-i-j+2 << "\t";
            j++;
        }
        i++;
        cout<<endl;
    }
}