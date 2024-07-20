#include <iostream>
using namespace std;


int Calculate(int r, int unit, int arr[] , int n){
	if(n==0){
		return -1;
	}
	int totalFood = r*unit;
	int Food =0;
	int i=0;
	for( i=0 ;i<n ;i++){
		Food+=arr[i];
		if(Food>=totalFood){
			break;
		}
		}
		
	if(totalFood > Food){
		return 0;
	}
	return i+1;
}

int main(){
	int r=7;
	int unit = 2;
	int arr[] ={2, 8, 3, 5, 7, 4, 1, 2};
	
	cout<<"Minimum House are Required to feed the rats "<<Calculate(r,unit,arr,8);
}
