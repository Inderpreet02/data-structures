#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){

    int arr[3] = {20,43,51};
    int banana[6] = {43,61,122,32,51,51};

    printArray(banana, 6);
    
    return 0;
}

void printArray(int theArray[], int sizeOfArray){
    for(int x=0;x<sizeOfArray;x++){
        cout<<theArray[x]<<endl;
    }
}