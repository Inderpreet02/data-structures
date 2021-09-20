#include <iostream>

using namespace std;

int main(){

    int rows, cols;

    cin>>rows>>cols;
    
    for (int i=1; i<=cols; i++){
        for (int j=1; j<=5; j++){

        cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}