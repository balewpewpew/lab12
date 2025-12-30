#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int i){
    if(i==0){
        return 0;
    }else if(i==1){
        return 1;
    }else{
        int n = i = fibonacci(i-1)+fibonacci(i-2);
        return n;
    }
}
