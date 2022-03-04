#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void mang(int a[], int &n){
	
	do{
		cout << "- Nhap so luong phan tu: ";
		cin >> n;
	}while(n < 0);
	
	for (int i = 0 ; i < n ; i++){
		a[i] = rand() % 100;
		a [i] = a[i - 1] + rand() % 100;
	}
	
}
void xuat(int a[], int n){
	for (int i = 0; i < n ; i++){
		cout << "a ["<<i<<"] : "<<a[i]<<endl;
	}
}
int main(){
	int a[1000];
	int n;
	mang(a, n);
	xuat(a, n);
	return 0;
}
