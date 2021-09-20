#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    
    for(int i=1;i<=20;i++){
        cout << rand()%6 <<endl;
    }

    
    return 0;
}