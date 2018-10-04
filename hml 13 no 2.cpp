#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main(){
	int e, c, tota=0, q, a2=0;
	float rata_rata, sdef, v;
	
		cout<<"Masukkan jumlah data anda : ";cin>>c;
	int f[c];
	for(e=0;e<c;e++){
			cout<<"Masukkan data ke-"<<e+1<<" = ";cin>>f[c];
	tota=tota+f[c];
		a2=a2+pow(f[c],2);
		
	}
	rata_rata=tota/c;
	q=pow(tota,2);
	v=(c*a2-q)/(c*(c-1));
	sdef=sqrt(v);
			cout<<endl;
			cout<<"Rata-rata = "<<rata_rata<<endl;
			cout<<"Varian = "<<v<<endl;
			cout<<"Standar Deviasi = "<<sdef;
	
	getch();
	
}
