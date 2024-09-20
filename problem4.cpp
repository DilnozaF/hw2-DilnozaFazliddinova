#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3,n4;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    int count=0;
    if (n1==n2==n3) count++;
    if (n1==n3) count++;
    if (n1==n4) count++;
    if (n2==n3) count++;
    if (n2==n4) count++;
    if (n3==n4) count++;
    cout<<count<<endl;
}