#include <iostream>

using namespace std;

void sort(int array[],int len){
	int temp,i,j;
    for(i = 1; i < len; i++){
        temp = array[i];
        for(j = i - 1; j >= 0; j--){
            if (array[j] > temp)
                array[j + 1] = array[j];
            else
                break;
        }
        array[j + 1] = temp;
    }
}

int main(){
	
	int array[] = {77,5,5,22,13,55,97,4,796,1,0,9};
	int len = sizeof(array) / sizeof(array[0]);	

	cout<<"­ì©l => ";
    for(int i = 0; i < len; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    sort(array,len);
    
    cout<<"¥¿§Ç => ";
    for(int i = 0; i < len; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

	return 0;	
}
