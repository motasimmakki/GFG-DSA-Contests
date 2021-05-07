#include<iostream>
using namespace std;

bool pairExists(int arr[], int n, int c)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n && (i != j); j++){
            if((arr[i]^arr[j]) == c)
                return true;
        }
    }
    
    return false;
}

int main(){
	// int arr[] = {2, 1, 10, 3, 4, 9, 5};
	// int c = 7; 
	int arr[] = {9, 9, 10, 10, 3};
	int c = 1; 
	
	if(pairExists(arr, sizeof(arr)/sizeof(int), c))
		cout<< "\nTrue"<< endl;
	else
		cout<< "\nFalse"<< endl;

	return 0;
}

// Test Case: 01
// arr = 2 1 10 3 4 9 5 
// c = 7

// Test Case: 02
// arr = 9 9 10 10 3 
// c = 1