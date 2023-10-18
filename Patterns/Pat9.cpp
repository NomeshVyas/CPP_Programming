#include <iostream>
using namespace std;

// 1	
// 2	1	
// 3	2	1	
// 4	3	2	1	

int main() {
    int i=1, j, n;
    cin>>n;
    
    while(i<=n){
        j = 1;
        while(j<=i){
            cout<<i-j+1<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }

    // int  count=1;
    // while(i<=n){
    //     count=i;
    //     j=1;
    //     while(j<=i){
    //         cout<<count<<"\t";
    //         count--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    return 0;
}