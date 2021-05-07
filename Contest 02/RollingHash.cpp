#include<iostream>
using namespace std;

void rollingHash(string s, string p)
{
    int hash = 0;
    for(int i = 0; i < p.length(); i++){
        hash += ((int)p[i]-96);
    }
    // cout<<hash;
    
    for(int i = 0; i < (s.length()-p.length())+1; i++){
        int sum = 0;
        for(int j = i; j < (i+p.length()); j++){
            sum += ((int)s[j]-96);
        }
        // cout<< sum<< endl;
        if(sum == hash){
            for(int j = i; j < (i+p.length()); j++){
                cout<< s[j];
            }
            cout<< " "<< i<< endl;
        }
    }
}

int main(){

    char s[] = "bacdaabaa";
    char p[] = "aab";

    rollingHash(s, p);

    return 0;
}

// Input:
// s = bacdaabaa
// p = aab

// Output :
// aab 4
// aba 5
// baa 6