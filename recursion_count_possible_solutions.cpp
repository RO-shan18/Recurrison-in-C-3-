/* Programmer =  Roshan Mehra
Purpose = Q3 - Given a number n which denotes the number of variables in the equation and a val which
denotes the sum of these variables, count the number of such non-negative integral solutions
that are possible.
Date = 01/12/2023  */

#include<iostream>
using namespace std;

int count(int n, int val){
    int ans=0;
    // Base case
    if(n==1 && val>=0)
    return 1;

    // Assumption and Self work
    for(int i=0; i<=val; i++){
        ans += count(n-1, val-i);
    }

    return ans;
}

int main(){
    int n, val;
    cout<<"Enter the n and val: "<<endl;
    cin>>n>>val;

    cout<<count(n,val);
    return 0;
}