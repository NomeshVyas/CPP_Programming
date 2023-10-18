#include <iostream>
using namespace std;

// A	A	A	A
// B	B	B	B	
// C	C	C	C	
// D	D	D	D

int main() {
    int i=1, j=1, n;
    cin>>n;
    char ch='A';
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}