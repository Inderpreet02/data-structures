#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    int a[7] = { 1, 2, 5, 6, 2, 3, 5 }; 
    int b[9] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 };

    vector<int> uni;
    int index;
    int len1 = sizeof(a)/sizeof(a[1]);
    for(int i=0; i<len1; i++){
        uni.push_back(a[i]);
    }

    for(int j:b){
        int app_ele;
        bool flag = true;
        for(int i:uni){
            if( i == j){
                flag = false;
                break;
            }
        }

        if(flag){
            uni.push_back(j);
        }
    }

    for(int i:uni){
        cout << i << " ";
    }
}


int main(){
    
    int n;
    cin >> n;

    solve(n);

    
    return 0;
}