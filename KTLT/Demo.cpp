#include <iostream>
using namespace std;

void nhap(int a[], int n){
    cout << "Nhap : " << n << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void xuat(int a[], int n){
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}


int main(){
    int a[200],n;
    nhap(a,n);
    xuat(a,n);
    return 0;
}