/* Programmer =  Roshan Mehra
Purpose = Q1 - Given a number n, print the following pattern without using any loop.
n, n-5, n-10, ..., 0, 5, 10, ..., n-5, n
There should be 0 or at most one occurrence of negative number in the series.
Date = 01/01/2023  */

#include<iostream>
using namespace std;

int pattern(bool flag, int n, int m){
    cout<<n<<" ";

    // Base case
    if(flag==false && n==m){
        return n;
    }

    if(flag){
        if(n>0)
        return pattern(true, n-5, m);
    }
    
    if(flag==false || n<=0)
        return pattern(false, n+5, m);
}

int main(){
    int n;
    cin>>n;

    pattern(true, n, n);
    return 0;
}