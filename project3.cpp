#include <iostream>

using namespace std;

int main(){
		
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	int array_even[5] = {};
	int array_odd[5] = {};
	int len = sizeof(array) / sizeof(array[0]);	
	int even=0,odd=0;
	int j= 0,k=0;
	
	for(int i=0; i<len;i++){
		if(array[i]%2 == 0){
			even += array[i];
			array_even[j] = array[i];
			j++;
		}
		else{
			odd += array[i];
			array_odd[k] = array[i];
			k++;
		}
	}
	cout<<"计羆 = "<<odd<<endl;
	cout<<"案计羆 = "<<even<<endl;
	
	int len_odd = sizeof(array_odd) / sizeof(array_odd[0]);	
	int len_even = sizeof(array_even) / sizeof(array_even[0]);	

	
	cout<<"案计 = ";
	for(int i=0; i<len_even;i++){
		cout<<array_even[i]<<" ";
	} 
	cout<<endl;
	
		cout<<"计 = ";
	for(int i=0; i<len_odd;i++){
		cout<<array_odd[i]<<" ";
	} 
	cout<<endl;
	
		
	return 0;
} 
