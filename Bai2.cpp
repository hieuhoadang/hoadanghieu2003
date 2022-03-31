#include<iostream>
#include<string.h>
using namespace std;
class lopgiaovien {
public:
	char hoten[30];
	int tuoi;
	char bangcap[15];
	char chuyennganh[20];
	float bacluong;
	int luongcoban;
public:
	void nhap() {
		cin.ignore();
		cout << "nhap ho ten giao vien la :";
		cin.getline(hoten,30);
		cout << "nhap vao tuoi giao vien la :";
		cin >> tuoi;
		cin.ignore();
		cout << "nhap bang cap giao vien la :";
		cin.getline(bangcap, 15);
		cout << "nhap chuyen nganh giao vien la :";
		cin.getline(chuyennganh, 20);
		cout << "nhap bac luong giao vien :";
		cin >> bacluong;
	}
	void tinhluong(){
		luongcoban = bacluong * 610;
	}
	void xuat() {
		cout << "ho ten giao vien : " << hoten << endl
			<< "tuoi giao vien : " << tuoi << endl
			<< "bang cap giao vien : " << bacluong << endl
			<< "chuyen nganh gia vien : " << chuyennganh << endl
			<< "bac luong giao vien : " << bacluong << endl
			<< "luong co ban cua giao vien : " << luongcoban << endl;
	}
	void xuatten() {
		cout << " ho ten giao vien : " << hoten << endl;
	}
	void chuyen(lopgiaovien  a[], int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (strlen(a[i].chuyennganh	n) < strlen(a[j].chuyennganh)) 
				{
					lopgiaovien tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
	}
		
	void sosanh( int n) {
		for (int i = 0; i < n; i++) {
			if (luongcoban<2000)
			{
				cout << "giao vien co luong co ban duoi 2000 la" << luongcoban << endl;
			}
		}
	}
	void xuatt() {
		tinhluong();
		xuat();
	}
};
int main() {
	int n;
	cout << " nhap vao so luong giao vien: ";
	cin >> n;
	lopgiaovien a[100];
	cout << "\n\tnhap lop giao vien : "<<endl;
	for (int i = 0; i < n; i++) {
		cout << "\tGV " << i + 1 << " : " <<endl;
		a[i].nhap();
	}
	cout << "\n\txuat lop giao vien : "<<endl;
	for (int i = 0; i < n; i++) {
		cout << "\tGV " << i + 1 << " : " << endl;
		a[i].xuatt();
	}
	for (int i = 0; i < n; i++) {
		if (a[i].luongcoban < 2000) {
			cout <<"\n\tdanh sach gv co liongg< 2000 " << endl;
			a[i].xuatten() ;
		}
	}

}