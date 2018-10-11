#include <iostream>
#include <iomanip>
using namespace std;

struct movies 
{
	char title[20],tahun[10];
};
typedef movies moviesArr[20];


int main ()
{
	int pilih,data,seleksi;
	moviesArr x ;
	
	while (pilih != 3) 
	{
	cout<<"====================\n"<<endl;
	cout<<"MOVIE PROGRAM\n"<<endl;
	cout<<"====================\n"<<endl;
	cout<<"1. Masukan Data\n";
	cout<<"2. Tampil Data\n";
	cout<<"3. Keluar\n";
	cout<<"Pilih : ";
	cin>>pilih;
	cout<<endl;

	
	   if (pilih == 1) 
	   {
            cout << "Masukan banyaknya data :";
            cin >> data;
            for (int i = 0; i < data; i++) 
			{
            	cout << "Data ke- " << i + 1;
            	cout << "\nmasukan judul : ";
            	cin >> x[i].title;
            	cout << "masukan tahun: ";
            	cin >> x[i].tahun;
            	cout << endl;
            }
        } 
		else if (pilih == 2) 
		{
            for (int i = 0; i < data; i++)
			{
            	cout<<"Data ke- " << i+1 ;
            	cout<<endl;
            	cout<<"\ntitle :";
				cout<<x[i].title<< " ";
				cout<<endl;
				cout<<"\ntahun :";
            	cout<<x[i].tahun << " " << endl;

           	}
   		}
	}
}
