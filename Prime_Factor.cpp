#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i;
    vector <long long> v;
    cin >>t;
    while(t--){
        cin >>n;
        while(n%2==0){
            v.push_back(2);
            n=n/2;
        }
        for(i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                v.push_back(i);
                n=n/i;
            }
        }
        if(n>2){
            v.push_back(n);
        }
        cout << *max_element(v.begin(),v.end()) <<endl;
        v.clear();
    }
    return 0;
}





