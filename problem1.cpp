#include <iostream>
using namespace std;
int main() {
    long int n;
    cin>>n;
    if (n>2147483647||n<-2147483648) {
        cout<<"NO"<<endl;
    } else
        cout<<"YES"<<endl;
}
