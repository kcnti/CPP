#include <iostream>
using namespace std;

int fibonacci(int a){
    if(a<=1)
        return a;
    return fibonacci(a-1)+fibonacci(a-2);
}

int fibonacci_member(int n){ // output member of fibonacci
    int init = 0, sec = 1, next = 0, sum=0;
    next = init + sec;
    cout << init << " " << sec << " ";
    while(next<=n){
        cout << next << " ";
        init=sec;
        sec=next;
        next=init+sec;
        sum+=next;
    }
    return 0;
}

int main(){
    int n=6;
    cout << fibonacci_member(n);
    return 0;
}
