#include<iostream>
using namespace std;

// 1	
// 2	2	
// 3    3   3	
// 4	4	4	4	
// 5	5	5	5	5	

int main(){
    int i=1, j, n;
    cin >> n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<< i << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}