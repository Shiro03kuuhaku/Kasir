#include <iostream>
#include "controller_k.h"
using namespace std;

void view_header(){
	cout<<"<=========================================>"<<endl;
    println("       PROGRAM KASIR SEDERHANA 2022");
	cout<<"<=========================================>"<<endl;
}

void view_menu(){
    println("MENU PROGRAM");
    println("1. view all BARANG");
    println("2. tambah BARANG");
    println("3. transkasi");
    println("4. history transaksi");
    println("5. delete BARANG");
    println("6. update stok BARANG");
    println("7. EXIT");
    cout<<"<=========================================>"<<endl;
}

void header_view(){
	println("=================");
    println("|menu view barang|");
    println("=================");
}

void header_tb(){
	println("===================");
    println("|menu insert barang|");
    println("===================");
}

void t_view_barang(){
	cout<<endl;
    cout<<"\t"<<"\t"<<"LIST BARANG"<<endl;
    println("===========================================");
    cout<<"|Nama Barang|\tHarga barang|\tStok Barang|"<<endl;
    cout<<"<=========================================>"<<endl;
    controler_view_barang();
}

void data_barang_static(){
    //data input static barang
    controler_insert_stat("odol",5000,10);
    controler_insert_stat("sabun",3000,5);
    controler_insert_stat("shampo",18000,8);
    controler_insert_stat("sikat",10000,4);
}

void tambah_barang(){
	controler_insert_dinamis();
    println("masukkan nama barang : ");
    cin>>nama_barang[index];
    println("masukkan harga barang : ");
    cin>>harga_barang[index];
    println("masukkan stok awal : ");
    cin>>stok_barang[index];
    println("===============");
    println("|Input Success|");
    println("===============");
}

void header_trans(){
	println("menu 3");
    println("================");
    println("|menu transaksi|");
    println("================");
}

void trans(){
	println("===============TRANSAKSI===============");
	do
	{
		println("masukan nama barang yang ingin di beli: ");
		cin >> barang[a[n]];
		bool cek_nama = controler_trans1(barang[a[n]]);
		if (cek_nama == true){
			bool cek_stok = controler_trans2(barang[a[n]]);
			if (cek_stok == true){
				while (true)
				{
					println("masukan jumlah barang yang ingin di beli: ");
					cin >> jmlh[a[n]];
					cout << endl;
					bool cek_jmlh = controler_trans3(barang[a[n]]);
					if (cek_jmlh == true){
						break;
					}else{
						println("===========================================================");
						cout << "Warning! jumlah yang dinginkan tidak sesuai dengan stok yang tersedia!" << endl;
						cout << "             Silahkan Masukan jumlah yang sesuai!          " << endl;
						println("===========================================================");
					}
				}
				
			}else{
				println("======================================================================");
				cout << "Maaf, Stok barang telah habis" << endl;
				cout << "anda tidak bisa melanjutkan transaksi dengan nama barang : " << barang << endl;
				println("======================================================================");
			}
		}else{
			println("=================================");
			println("|Maaf Nama Barang Tidak Tersedia|");
			println("=================================");
		}
	cout << "ingin membeli barang yang lain?(y/t)" << endl;
		cin >> ulangi;
	} while (ulangi == 'y');
	
	println("=======================================");
	controler_view_trans();
	print("Total Yang Harus Dibayar : ");
	cout << "Rp." << total << endl;

	do
	{
		print("Bayar : Rp.");
		cin >> bayar;
		bool cek_bayar = controler_bayar(bayar);
		if (cek_bayar == true)
		{
			controler_bayar(bayar);
			print("Kembalian : ");
			cout << "Rp." << kembali;
			cout << endl;
			println("=======================================");
			println("Terimakasih, Transaksi Telah Berhasil");
			println("=======================================");
		}
		else
		{
			println("=========================================================");
			println("Maaf uang anda TIDAK CUKUP untuk melakukann pembayaran");
			println("          !Mohon Masukan nominal dengan benar!        ");
			println("=========================================================");
		}
	} while (bayar < total);
}


void header_del(){
    println("menu 5");
    println("===================");
    println("|menu delete barang|");
    println("===================");
}

void del_bar(){
	println("masukan nama barang yang akan di delete : ");
	cin>>nama;
	bool cek = controler_del_barang(nama);
	if (cek==true){
		println("===============");
	    println("|Delete Success|");
	    println("===============");
	}else{
		println("============================");
	    println("|Delete Can Not Be Success|");
	    println("============================");
	}
}

void header_up(){
	println("menu 6");
    println("===================");
    println("|menu update barang|");
    println("===================");
}

//void up_bar(){
//	println("masukkan nama barang yang akan di update : ");
//    cin>>nama;
//	controler_up_barang();
//	cout<<"masukkan stok baru : ";
//    cin>>stok_barang[temp_index];
//    bool cek_up =  controler_up_bar(nama);
//    if (cek_up == true){
//    	println("===============");
//	    println("|Update Success|");
//	    println("===============");
//	} else {
//		println("===============");
//	    println("|Update can not be Success|");
//	    println("===============");
//	}
//    
//}

void header_history(){
	println("menu 4");
    println("===================");
    println("|history transaksi|");
    println("===================");
}

