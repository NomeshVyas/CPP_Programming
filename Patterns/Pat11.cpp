#include <iostream>
using namespace std;

// A	B	C	
// D	E	F	
// G	H	I

int main() {
    int i=1, j, n;
    char ch = 'A';
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<ch<<"\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}