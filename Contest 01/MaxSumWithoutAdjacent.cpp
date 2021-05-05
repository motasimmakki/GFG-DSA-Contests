#include<iostream>
using namespace std;

#define n 3
// #define n 6
// #define n 9

int main(){

	// int arr[] = {1, 2, 3};
	int arr[] = {1, 20, 3};
	// int arr[] = {5, 5, 10, 100, 10, 5};
	// int arr[] = {1, 2, 9, 4, 5, 0, 4, 11, 6};

	if (n == 1)
        return arr[0];
 
    int prev_prev = arr[0];
    int prev = max<unsigned long>(arr[0], arr[1]);

    for (int i = 2; i < n; i++){
        int curr = max<unsigned long>(arr[i], max<unsigned long>(prev, prev_prev + arr[i]));
        prev_prev = prev;
        prev = curr;
    }
 
    cout<< prev;
 
    return 0;
}