#include<iostream>
using namespace std;

// 5	4	3	2	1	
// 5	4	3	2	1	
// 5	4	3	2	1	
// 5	4	3	2	1	
// 5	4	3	2	1	
// 5	4	3	2	1	

int main(){
    int i, j, n;
    cin>>n;

    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1<<"\t";
            j++;
        }
    cout<<endl;
    i++;
    }

    return 0;
}