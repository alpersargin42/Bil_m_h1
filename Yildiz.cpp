#include <iostream>

using namespace std;


int main(){
	int a;
	cout<<"Bir deger giriniz:"<<endl;
	cin>>a;
	for(int i=a;i>=0;i--){
		for(int j=0;j<a-i;j++){
			cout<<" ";
		}
		for(int k = 0; k<(2*(i-1));k++){
			cout<<"*";
		}
		cout<<endl;
	}while (a == 0);
}
