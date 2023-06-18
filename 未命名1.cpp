#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream r1;
	r1.open("");
	if(!r1.is_open()){
		cout<<"打开1号文件时错误\n";
		system("pause");
		return 0;
	}
	vector<string> file1;
	string a="";
	while(!r1.eof()){
		r1>>a;
		file1.push_back(a);
	}
	r1.close();
	r1.clear();
	r1.open("");
	if(!r1.is_open()){
		cout<<"打开2号文件时错误\n";
		system("pause");
		return 0;
	}
	vector<string> file2;
	a="";
	while(!r1.eof()){
		r1>>a;
		file2.push_back(a);
	}
	string x1="";
	for(int i=0;i<file1.size();i++){
		x1+=file1[i];
	}
	string x2="";
	for(int i=0;i<file2.size();i++){
		x2+=file2[i];
	}
	int w=min(x1.length(),x2.length());
	int y=0;
	for(int i=0;i<w;i++){
		if(x1[i]==x2[i])
		y++;
	}
	int z=x1.length()+x2.length();
	cout<<y*2.0/z*100<<"%";
}
