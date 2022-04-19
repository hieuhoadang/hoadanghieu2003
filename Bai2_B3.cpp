#include<iostream.h>
#include<iomanip>
using namespace std;

class sp
{
		private:
		char masp[20];
		char tensp[20];
		int namsx;
		public:
		sp(char*masp=" ", char*tensp =" ",int namsp=0)
		{
				strcpy(this->masp, " ");
				strcpy(this->tensp, tensp);
				this->namsx=namsx;
		}
			
			void nhap()
		{
			cout<<"\n nhap ma san pham:";
			cin.getline(masp,20);
			cout<<"\n nhap ten san pham:";
			cin.getline(tensp,20);
			cout<<"\n nhap nam san xuat:";
			cin>>namsx; 
			fflush(stdin);
		} 
		
		void xuat()
		{
			 cout<<setw(10)<<masp<<endl;
			 cout<<setw(10)<<tensp<<endl;
			 cout<<setw(10)<<namsx<<endl; 
		} 
};

class tivi: public sp
{
	private:
	float cd, cr;
	public:
	tivi (char*masp= " ", char*tensp= " ", int namsx = 0, float cd = 0, float cr = 0 ):sp(masp,tensp,namsx)
	{
		this->cd=cd;
		this->cr=cr;
	}
	
	friend istream& operator >>(istream &is, tivi& tv)
		{
		fflush(stdin); 
		tv.nhap();
		cout<<"\n nhap chieu dai:";
		is>>tv.cd;
		cout<<"\n nhap chieu rong:";
		is>>tv.cr;
		return is; 
		} 
	friend ostream& operator <<(ostream &os,tivi tv)
	{
		tv.xuat();
		os<<setw(10)<<tv.cd<<endl; 
		os<<setw(10)<<tv.cr<<endl;
	    os<<setw(10)<<tv.dientich()<<endl;
		return os; 
	} 
	float dientich()
	{
		return cd*cr; 
	} 
};
	void nhap(tivi tv[], int n)
	{
	for(int i=0;i<n;i++)
		{
		cout<<"nhap thong tin ti vi thu"<<i+1<<endl;
		fflush(stdin);
		cin>>tv[i]; 
		} 
	} 
void xuat(tivi tv[], int n)
	{
	for(int i=0;i<n;i++)
		{
		cout<<"xuat thong tin ti vi thu"<<i+1<<endl;
		cout<<tv[i]; 
		}
	
	}
	
	int main()
	{
 	int n;
	 cout<<"moi nhap so luong ti vi:"<<endl;
	 cin>>n; 
	 tivi*tv;
	 tv=new tivi[n];
	 nhap(tv,n);
	 xuat(tv,n);
	 
	 return 0;
	}
				