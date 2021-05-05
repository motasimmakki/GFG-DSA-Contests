#include<iostream>
using namespace std;

// Including Rows and Columns of Matrix
#define R 5
#define C 4

int main(){

	int arr[R][C] = { 
				{ 1, 0, 0, 0 },
				{ 0, 0, 0, 0 },
				{ 0, 1, 0, 0 },
				{ 0, 0, 0, 0 },
				{ 0, 0, 0, 1 }
			};
	
	// Printing the Initial Matrix.
	cout<< "\nInitial Matrix  : "<< endl;
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cout<< "["<< arr[i][j]<< "] ";
		}
		cout<< endl;
	}
	
	// Manipulating the Matrix.
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			if(arr[i][j]){
				for(j = 0; j < C; j++)
					arr[i][j] = 1;
				break;
			}
		}	
	}
	
	// Printing Matrix after manipulation.
	cout<< "\nChanged Matrix  : "<< endl;
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cout<< "["<< arr[i][j]<< "] ";
		}
		cout<< endl;
	}

	return 0;
}
