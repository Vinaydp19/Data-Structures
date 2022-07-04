#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pb push_back
#define ss second 
using namespace std;

int main()
{
ios::sync_with_stdio(0); 
cin.tie(0);
cout.tie(0);
    
    string s;
    cin>>s;
    //we are sorting beecoz of to print combinations in sorting order like if we gave cba it will give abc combinations
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
        
    }while(next_permutation(s.begin(),s.end()));

}
