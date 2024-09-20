#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    switch (a){
        case 1:
            cout<<"Bus"<<endl;
            break;
        case 0:
            switch (b){
                case 1:
                    cout<<"Walk"<<endl;
                    break;
                case 0:
                    cout<<"Bike"<<endl;
                    break;
            }
            break;
    }
}