#include <iostream>
using namespace std;

int main() {
	int a; 
	double x, y;
	char b;
	do {
		system("cls");
		do {
			system("cls");
			cout<<"============================"<<endl;
			cout<<"----KALKULATOR SEDERHANA----"<<endl;
			cout<<"============================"<<endl;
			cout<<" Pilih Tipe Operasi..."<<endl;
			cout<<"----------------------------"<<endl;
			cout<<" 1. Penjumlahan"<<endl;
			cout<<" 2. Pengurangan"<<endl;
			cout<<" 3. Perkalian"<<endl;
			cout<<" 4. Pembagian"<<endl;
			cout<<" 5. Keluar"<<endl;
			cout<<"----------------------------"<<endl;
			cout<<" Pilih Menu? (1/2/3/4/5) : ";cin>>a;
			if(a == 0 || a > 5){
				cout<<" Pilihan Tidak Tersedia !"<<endl;
				system("Pause");
			}else if(a == 5){
				break;
			} 
		}while(a == 0 || a > 5);
			if(a == 5){
				break;
			} 
			cout<<"--------------------------"<<endl;
			cout<<" Masukkan Angka Pertama : ";cin>>x;
			cout<<"--------------------------"<<endl;
			cout<<" Masukkan Angka Kedua   : ";cin>>y;
			cout<<"--------------------------"<<endl;
			system("pause");
			cout<<"=========================="<<endl;
		    if(a == 1){
		    	cout<<" Hasilnya = "<<x + y<<endl;
		    }else if(a == 2 ){
		    	cout<<" Hasilnya = "<<x - y<<endl;
		    }else if(a == 3 ){
		    	cout<<" Hasilnya = "<<x * y<<endl;
		    }else if(a == 4 ){
		    	cout<<" Hasilnya = "<<x / y<<endl;
		    }
		    cout<<"=========================="<<endl;
		    cout<<" Masih Ingin Menggunakan Kalkulator? (y/n) : ";cin>>b;
		}while(b == 'y');
		cout<<endl<<endl;
		cout<<"=========================="<<endl;
		cout<<"       Terima Kasih       "<<endl;
		cout<<"=========================="<<endl<<endl<<endl;
		system("pause");


	return 0;
}
