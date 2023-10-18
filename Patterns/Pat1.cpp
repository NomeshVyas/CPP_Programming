#include<iostream>
using namespace std;

    // 1   2   3   4    5
    // 1   2   3   4    5
    // 1   2   3   4    5
    // 1   2   3   4    5

int main(){
    int i, j, n;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cout<<i<<"\t";
        cout<<endl;
    }
    // int i=1, j=1, n;
    // cin>>n;
    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<j<<"\t";
    //         j++;
    //     }
    // cout<<endl;
    // i++;
    // }
    return 0;
}