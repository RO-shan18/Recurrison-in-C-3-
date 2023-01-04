/* Programmer =  Roshan Mehra
Purpose = Q2 - Find m-th summation of first n natural numbers where m-th summation of first n natural
numbers is defined as following:
If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
Else :SUM(n, 1) = Sum of first n natural numbers.
Date = 01/12/2023  */

#include<iostream>
using namespace std;

int SUM(int n){
    int ans=0;
    if(n==1){
    ans++;
    return ans;
    }

    ans += n + SUM(n-1);
    return ans;
}

int rec(int n, int m){
    if(m==1){
    return SUM(n);
    }

    int store = rec(n, m-1);
    return SUM(store);
}

int main(){
    int n, m;
    cin>>n;
    cin>>m;

    cout<<rec(n,m);
    return 0;
}