#include<iostream>
using namespace std;
int main(){
	char input,alphabet='A';
	cout<<"Enter the input:";
	cin>>input;
	input=toupper(input);
	for(int i=1;i<=(input-'A'+1);++i){
		for(int j=1;j<=i;++j){
			cout<<alphabet<<" ";
		}
		++alphabet;
		cout<<"\n";
	}
}
