#include <iostream>
using namespace std;

// 1	
// 2	3	
// 4	5	6	
// 7	8	9	10	

int main() {
    int i=1, j, count=1, n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<< count <<"\t";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}