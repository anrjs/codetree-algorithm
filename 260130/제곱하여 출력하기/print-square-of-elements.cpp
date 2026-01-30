#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,i;
    cin>>N;
    int arr[100];
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    for(i=0;i<N;i++){
        cout<<arr[i]*arr[i]<<" ";
    }
    return 0;
}