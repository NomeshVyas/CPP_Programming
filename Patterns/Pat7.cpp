#include <iostream>
using namespace std;

// 1	
// 2	3	
// 3	4	5	
// 4	5	6	7	
// 5	6	7	8	9	

int main() {
    int i=1, j, count=1, n;
    cin>>n;
    
    while(i<=n){
        count=i;
        j=1;
        while(j<=i){
            cout<<count<<"\t";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}