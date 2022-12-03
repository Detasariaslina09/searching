#include<iostream>
using namespace std;
int main(){
	int n, cari;
	bool ketemu = false;
	
	cout<<"input jumlah data : ";
	cin>>n;
	cout<<endl;
	
	int list_data[n];
	
	for(int i=1; i<=n; i++){
			cout<<"input data ke- "<< i <<" : ";
			cin>>list_data[i];
	}
	cout<<endl;
	cout<<"input bilangan yang dicari : ";
	cout<<cari;
	cout<<endl;
	
	for(int i=0; i<=n; i++){
		if (list_data[i]==cari){
			ketemu=true;
			cout<<"data ditemukan pada index ke- "<<i<<endl;	
		}
	}
if(ketemu==false){
	cout<<"data tidak ditemukan";
}
}
