#include <iostream>
using namespace std;

float laixuat(int a, int n, int x){
	
	if (n == 0){
		return a;
	}else{
		return  a + (1+x/100)*laixuat(a,n-1,x);
	}
}

int main (){
	int n ,a ,x;
		cout << "Nhap so tien can gui : ";
	cin >> a;
	do{
	cout <<"Nhap so nam: ";
	cin >>n;
	}while(n < 0);
	cout <<"Nhap lai: ";
	cin >> x;
	cout <<"Tien lai: "<<laixuat(a,n,x)<<" VND."<<endl;
	return 0;
}
