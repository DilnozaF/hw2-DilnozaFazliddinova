#include <iostream>
using namespace std;
int main() {
    char gender;
    cin>>gender;
    double height;
    cin>>height;
    switch (gender=='M'){
        case 1:
            switch (height<1.70){
                case 1:
                    cout <<"Short";
                    break;
            }
            switch (height>=1.70 && height<1.85){
                case 1:
                    cout <<"Normal";
                    break;
            }
            switch (height>=1.85){
                case 1:
                    cout <<"Tall";
                    break;
            }
        break;
        case 0:
            switch (height<1.60){
                case 1:
                    cout <<"Short";
                    break;
            }
            switch (height>=1.60 && height<1.75){
                case 1:
                    cout <<"Normal";
                    break;
            }
            switch (height>=1.75){
                case 1:
                    cout <<"Tall";
                    break;
            }
        break;

    }

}