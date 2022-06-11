#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=5;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=7; j++){
            if(j>=5-i && j<=3+i){
                cout<<"*";
            }
            else{
               cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}