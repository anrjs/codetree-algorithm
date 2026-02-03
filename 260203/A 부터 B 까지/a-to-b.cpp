#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,num;
    cin>>A>>B;
    num=A;
    while(num<=B){
        cout<<num<<" ";
        if(num%2==1) num*=2;
        else num+=3;
    }
    return 0;
}