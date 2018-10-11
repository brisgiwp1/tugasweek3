#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int NumList[8]={5,34,32,25,75,42,22,2};
	int Swap;
	cout<<"Data Sebelum Di Urutkan: \n";
	for(int ctr=0; ctr<8; ctr++)
	{
		cout<<setw(3)<<NumList[ctr];
	}
	cout<<"\n\n";
	for(int i=0;i<7;i++)
			for(int ii=0;ii<7;ii++)
				if(NumList[ii]>NumList[ii+1])
				{
					Swap=NumList[ii];
					NumList[ii]=NumList[ii+1];
					NumList[ii+1]=Swap;
				}
	cout<<"Data Setelah Di Urutkan: \n";
	
	for(int iii=0;iii<8;iii++)
		cout<<setw(3)<<NumList[iii];
	cout<<endl<<endl;
	
	return 0;
}
void SelectionSort(int Array[], const int Size){
	int i,j,smallest,temp;
	for(i=0;i<Size;i++)
	{
		smallest=i;
		for(j=i;j<Size;j++)			{
			if(Array[smallest]>Array[j])
			{
			smallest=j;
			}
		}
		temp=Array[i];
		Array[i]=Array[smallest];
		Array[smallest]=temp;
	}
	return;

}
