#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
main(){
	char word[20];
	int b, n, ag;
	cout<<"Masukkan kata Yang Akan di Buat oleh anda: ";cin>>word;
		cout<<endl;
			ag=strlen(word);
		
	for(b=ag;b>=0;b--){
			for(n=0;n<b;n++){
			cout<<word[n];		
			}
			cout<<endl;
		
	}
	getch();
}

