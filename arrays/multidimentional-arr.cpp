#include <iostream>

using namespace std;

int main(){

    int mario[2][3] = {{2,3,4},{8,9,10}};

    for(int i=0;i<2;i++){

        for(int j=0;j<3;j++){

            cout << mario[i][j]<< " ";
        }
        cout<<endl;
    }
    
    return 0;
}