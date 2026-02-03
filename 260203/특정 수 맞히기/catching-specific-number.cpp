#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num=0;
    while(num!=25){
        cin>>num;
        if(num<25) cout<<"Higher";
        else if(num>25) cout<<"Lower";
        else cout<<"Good";
        cout<<endl;
    }
    return 0;
}