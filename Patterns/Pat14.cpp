#include <iostream>
using namespace std;

//                  1	
//              1	2	1	
//          1	2	3	2	1	
//    1	    2   3   4   3   2   1

int main() {
    int i=1, j=1, k, space=0, n;
    cin>>n;
    cout<<endl;
    while(i < 2*n){
        space = n-i;
        while(space){
            cout<<"\t";
            space--;
        }
        j=1;
        while(j<=i){
            cout<<j<<"\t";
            j++;
        }
        k = 1;
        j=i-1;
        while(k<i){
            cout<<j<<"\t";
            k++;
            j--;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}