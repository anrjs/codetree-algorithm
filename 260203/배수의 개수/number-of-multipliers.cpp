#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i,sum_3=0,sum_5=0,num;
    for(i=0;i<10;i++){
        cin>>num;
        if(num%3==0) sum_3++;
        if(num%5==0) sum_5++;
    }
    cout<<sum_3<<" "<<sum_5;
    return 0;
}