#include <iostream>

using namespace std;

int main(){
	
	string text = "�u�H�����:�W �� �� �� - �t��k�v";
	string line1=text,
	       line2=text,
		   line3,
		   text2=text;
	
	//����� 
	for(int i=0; i<text.length(); i++){
		if(text[i] == '�u'){
			line1 = text.replace(text.find("�u"),1,"�u");
		}
		else if(text[i] == '�v'){
			line1 = text.replace(text.find("�v"),1,"�v");
		}
		else if(text[i] == ':'){
			line1 = text.replace(text.find(":"),1,"�G");
		}
	}
	cout<<"line1 = "<<line1<<endl;
	
	//�h�����嶡�ť� 
	for(int i=0; i<line2.length(); i++){
		if(text[i] == ' '){
			line2 = line2.replace(line2.find(' '),1,"");
		}
	}
	line2 = line2.replace(line2.find('-'),1," - ");
	cout<<"line2 = "<<line2<<endl;
	
	//�L�X:��-���r�� 
	for(int i=text2.find(':')+1; i<text2.find('-'); i++){
		line3 += text2[i]; 
	}
	cout<<"line3 = "<<line3<<endl;
	
	return 0;
} 