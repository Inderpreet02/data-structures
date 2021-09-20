#include <iostream>

using namespace std;

int main(){

    int arr[9];

    cout << "Element - Value"<<endl;

    for (int x=0;x<=8;x++){
        arr[x] = 99;

        cout<<x<<"    ------    "<<arr[x]<<endl;
    }
    
    return 0;
}