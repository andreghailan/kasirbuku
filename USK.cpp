#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int Ultra, pocky, gandum, larutan, cimor;
 float belanja, total, Disc, Fix, Fixharga;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| Ultra Milk		 : Rp 70.000,00  |"<<endl;
 cout<<"\t\t| Pocky		         : Rp 80.500,00  |"<<endl;
 cout<<"\t\t| Sarigandum        	 : Rp 120.000,00 |"<<endl;
 cout<<"\t\t| Larutan		 : Rp  80.000,00 |"<<endl;
 cout<<"\t\t| Cimory	         : Rp  70.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Ultra Milk yang dibeli 		   : "; cin>>Ultra;
 cout<<"Masukkan jumlah Pocky yang dibeli		   : "; cin>>pocky;
 cout<<"Masukkan jumlah Sarigandum yang dibeli     	   : "; cin>>gandum;
 cout<<"Masukkan jumlah Larutan Marker yang dibeli         : "; cin>>larutan;
 cout<<"Masukkan jumlah Cimory yang dibeli                 : "; cin>>cimor;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<Ultra<<"\t\t Ultra Milk 	\t70000 \t\t"<<Ultra*70000<<"\t    |"<<endl;
 cout<<"\t|   "<<pocky<<"\t\t Pocky 	\t\t80500 \t\t"<<pocky*80500<<"\t    |"<<endl;
 cout<<"\t|   "<<gandum<<"\t\t Sarigandum 	\t\120000 \t\t"<<gandum*120000<<"\t    |"<<endl;
 cout<<"\t|   "<<larutan<<"\t\t Larutann Marker \t80000 \t\t"<<larutan*80000<<"\t    |"<<endl;
 cout<<"\t|   "<<cimor<<"\t\t Cimory \t\t70000 \t\t"<<cimor*70000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 belanja = Ultra*70000+pocky*80500;
 Disc = 0.1*belanja;
 total = gandum*12000+larutan*80000+cimor*70000;
 cout<<"\t|\t\t\tHarga Total Belanja \t: "<<belanja<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<belanja-Disc<<"\t    |"<<endl;
 Fix = belanja-Disc;
 Disc = 0.1*total;
 cout<<"\t|\t\t\tHarga Total  	\t: "<<total<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<total-Disc<<"   \t    |"<<endl;
 Fixharga = total-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<Fix+Fixharga<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}

