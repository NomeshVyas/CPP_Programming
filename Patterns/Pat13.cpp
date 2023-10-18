#include <iostream>
using namespace std;

// D	
// C	D	
// B	C	D	
// A	B	C	D	


int main() {
    int i=1, j, n;
    char ch = 'A';
    cin>>n;
    while(i<=n){
        ch = 'A'+n-i;
        j=1;
        while(j<=i){
            cout<<ch<<"\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}