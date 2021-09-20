#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n == 1 || n%2 == 0 || n%3 == 0){
        return false;
    }

    if(n == 2 || n == 3){
        return true;
    }

    for(int i=5; i*i <=n; i+=6){
        if( n%i == 0 || i%(n+2) == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    cout << (isPrime(n) ? "Prime" : "Non-Prime");

    
    return 0;
}