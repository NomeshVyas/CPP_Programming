#include <iostream>
using namespace std;

// A	
// B	C	
// C	D	E	
// D	E	F	G

int main() {
    int i=1, j, n;
    char ch = 'A';
    cin>>n;
    while(i<=n){
        ch = 'A'+i-1;
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