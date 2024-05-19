#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    int a, b, c, d;
    set<int> s;

    for(int i = 0; i < t; i++){
        cin>>a>>b>>c>>d;

        if(a>b) swap(a,b);

        for(int j = a; j <= b; j++){
            s.insert(j);
        }
//        for(auto x: s){
//            cout<<x<<" ";
//        }
        auto pos = s.find(c);
        auto pos2 = s.find(d);

        if(
                (pos != s.end() && pos2 == s.end())
                ||
                (pos2 != s.end() && pos == s.end())
                )
        {
            cout<<"YES";

        }
        else{
            cout<<"NO";
        }
        s.clear();
        cout<<"\n";
    }
}