#include <iostream>
using namespace std;

// 5	
// 5	4	
// 5	4	3	
// 5	4	3	2	
// 5	4	3	2	1	

int main() {
    int i=1, j, count=1, n;
    cin>>n;
    
    while(i<=n){
        count=n;
        j=1;
        while(j<=i){
            cout<<count<<"\t";
            count--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}