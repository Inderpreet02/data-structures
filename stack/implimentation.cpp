#include <bits/stdc++.h>

using namespace std;

struct Stock{
    int *arr;
    int cap;
    int top;

    Stock(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x){
        if(top == cap-1){
            cout << "Stack is at max memory";
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if(top == -1){
            cout << "stack is empty";
            return -1;
        }
        int res = arr[top];
        top--;
        return res;
    }

    int peek(){
        if(top == -1){
            cout << "stack is empty";
            return -1;
        }
        return arr[top];
    }

    int size(){
        return top+1;
    }
    
    bool isEmpty(){
        return (top == -1);
    }
};



int main(){
    
    Stock s(8);

    cout << s.pop() << endl;
    cout << s.peek() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.pop() << endl;
    cout << s.peek() << endl;

    return 0;
}