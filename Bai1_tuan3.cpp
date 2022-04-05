#include <iostream>
#include<string.h>
using namespace std;
class Khachhang
{
	private:
		char ht[30];
		struct ngaysinh
		{
			int ngay;
			int thang;
			int nam;
		}NS;
		char cmt[10];
		char hokhau[50];
	public:
		khachhang()
		{
    		strcpy(this -> hoten, " ");
			strcpy(this -> cmt," ");
			strcpy(this -> hokhau, " ");
			ns.ngay=7;
			ns.thang=6; 
			ns.nam=2003; 
		} 
	~khachhang(){} 
	
	friend istream& operator >>(istream& is,khachhang& kh ){
			cin.ignore();
			cout<<"Nhap ho va ten:"<<" ";
			is.getline(kh.hoten,30); 
			
			cout<<"Nhap vao chung minh thu:";
			is.getline(kh.cmt,10);
			cout<<"nhap vao ho khau:";
			is.getline(kh.hokhau,50); 
			cout<<"Nhap vao ngay sinh:"<<endl;
			cout<<"nhap vao ngay:"<<endl; 
			is>>kh.ns.ngay;	
			cout<<"nhap vao thang:"<<endl;
			is>>kh.ns.thang;
			cout<<"nhap vao nam:"<<endl;
			is>>kh.ns.nam; 
			return is; 
			
		}
			friend ostream& operator <<(ostream& os,khachhang  kh )
			{
				os<<setw(20)<<kh.hoten
				<<setw(20)<<kh.ns.ngay
				<<setw(20)<<kh.ns.thang
				<<setw(20)<<kh.ns.nam 
				<<setw(20)<<kh.cmt
				<<setw(20)<<kh.hokhau<<endl; 
				return os; 
			}
			  
			  	bool operator > (khachhang kh)
			  	{
			  		if((this->ns.nam,kh.ns.nam )>0) 
			  		return true; 
			  	} 
				   
				    
				bool operator < (khachhang kh)
				{
			  		if((this->ns.nam,kh.ns.nam )<0) 
			  		return true; 
		  		} 
	
	
	}; 
int main()
{
	int n;
	cout<<"nhap vao so luong khach hang:"<<endl;
	cin>>n;
	khachhang a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap thong tin khach hang thu"<<i+1<<endl; 
		cin>>a[i]; 
	} 
	for(int i=0;i<n;i++)
	{
		cout<<"xuat thong tin khach hang thu"<<i+1<<endl; 
		cout<<a[i]; 
	} 
		
	cout<<"thong tin khach hang sau khi sap xep ve tuoi theo thu tu tang dan  la:"<<endl; 
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++) 
	
		if(a[i]>a[j]){
			khachhang tg=a[i];
			a[i]=a[j];
			a[j]=tg; 
			 
		}
		
			for(int i=0;i<n;i++){
		cout<<"xuat thong tin khach hang thu"<<i+1<<endl;
		cout<<a[i]; 
	} 	 	
	 
	cout<<"danh sach khach hang co tuoi giam dan la:"<<endl; 
	for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
      if(a[i]<a[j]){
			khachhang tg=a[i];
			a[i]=a[j];
			a[j]=tg; 
			 
		}
		
			for(int i=0;i<n;i++){
		cout<<"xuat thong tin khach hang thu"<<i+1<<endl;
		cout<<a[i]; 
	} 
	}