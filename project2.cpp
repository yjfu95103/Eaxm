#include <iostream>

using namespace std;

int main(){
	
	string text = "「人易科技:上 機 測 驗 - 演算法」";
	string line1=text,
	       line2=text,
		   line3,
		   text2=text;
	
	//改全形 
	for(int i=0; i<text.length(); i++){
		if(text[i] == '「'){
			line1 = text.replace(text.find("「"),1,"「");
		}
		else if(text[i] == '」'){
			line1 = text.replace(text.find("」"),1,"」");
		}
		else if(text[i] == ':'){
			line1 = text.replace(text.find(":"),1,"：");
		}
	}
	cout<<"line1 = "<<line1<<endl;
	
	//去掉中文間空白 
	for(int i=0; i<line2.length(); i++){
		if(text[i] == ' '){
			line2 = line2.replace(line2.find(' '),1,"");
		}
	}
	line2 = line2.replace(line2.find('-'),1," - ");
	cout<<"line2 = "<<line2<<endl;
	
	//印出:到-的字元 
	for(int i=text2.find(':')+1; i<text2.find('-'); i++){
		line3 += text2[i]; 
	}
	cout<<"line3 = "<<line3<<endl;
	
	return 0;
} 
