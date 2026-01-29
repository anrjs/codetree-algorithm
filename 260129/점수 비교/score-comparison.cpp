#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A_m, A_e, B_m, B_e;
    cin>>A_m>>A_e>>B_m>>B_e;
    if(A_m>B_m && A_e>B_e) cout<<1;
    else cout<<0;
    return 0;
}