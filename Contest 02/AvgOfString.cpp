#include<iostream>
using namespace std;

int avgOfString(string s)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum += (int)s[i];
    }
    
    return sum/s.length();
}

int main(){
	// char str[] = "aaaa";
	char str[] = "abcd";

	cout<< avgOfString(str);

	return 0;
}

// Test Case: 01
// str = aaaa

// Test Case: 02
// str = abcd