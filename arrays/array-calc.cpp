#include <iostream>

using namespace std;

int main(){

    int tuna[5] = {20,50,34,32,61};
    int sum = 0;

    for(int i=1;i<=4;i++){
        sum += tuna[i];
    }

    cout<<sum<<endl;
    
    return 0;
}