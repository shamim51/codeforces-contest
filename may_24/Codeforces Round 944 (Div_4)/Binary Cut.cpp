//
// Created by DELL on 5/19/2024.
//
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int special_case = 0;
    int special_case_counter = 0;
    char nxt = 1;
    int cut = 1;

    string str;

    for(int i = 0; i < t; i++){
        cin>>str;
        if(str.length() == 1) {
            cout<<"1"<<endl;
            continue;
        }
        for(int j = 0; j < str.length()-1; j++){
            nxt = str[j+1];

            if(special_case == 1) special_case++;

            if(str[j] == '0' && nxt == '1') {
                //cout<<"special case for string "+ str<<endl;
                special_case++;
            }

            if(str[j] != nxt and special_case != 1){
                cut++;
            }
        }
        cout<<cut<<endl;
        cut = 1;
        special_case = 0;
    }
}
