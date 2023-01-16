#include <iostream>
#include "view.h"
using namespace std;

int main() {
    view_header();
    data_barang_static();

    int pilih;
    while (pilih != 7){
        view_menu();
        print("masukkan pilihan menu : ");
        cin>>pilih;
        switch (pilih) {
            case 1:
				header_view();
                t_view_barang();
                break;
            case 2:
				header_tb();
                tambah_barang();
                break;
            case 3:
				header_trans();
                trans();
                break;
            case 4:
				header_history();
                break;
            case 5:
				header_del();
                del_bar();
                break;
        	case 6:
				header_up();
//                up_bar();
                break;
            case 7:
                println("menu EXIT");
                break;
        }
    }

    return 0;
}

//#include "data_store.h"
//
//void print(string value){
//    cout<<value;
//}
//
//void println(string value){
//    cout<<value<<endl;
//}
//
//void view_barang(){
//    for(int i=0 ;i<=index;i++){
//       cout<<" "<<nama_barang[i]<<"\t"<<"\t"<<harga_barang[i]<<"\t"<<"\t"<<stok_barang[i]<<endl;
//    }
//    cout<<"<=========================================>"<<endl;
//}
//
//int search_by_name(string name){
//    int temp_index = -1;
//    for (int i = 0 ; i <= index ; i++){
//        if (name == nama_barang[i]){
//            temp_index = i;
//        }
//    }
//    return temp_index;
//}
//
//void tambah_barang_dinamis(){
//	index ++;
//}
//
//void tambah_barang_static(string nama, int harga, int stok){
//    index ++;
//    nama_barang[index] = nama;
//    harga_barang[index] = harga;
//    stok_barang[index] = stok;
//}
//
//
//void update_barang(){
//    println("masukkan nama barang yang akan di update : ");
//    cin>>nama;
//    int temp_index = search_by_name(nama);
//    cout<<"masukkan stok baru : ";
//    cin>>stok_barang[temp_index];
//    println("===============");
//    println("|Update Success|");
//    println("===============");
//}
//
//void delete_barang(){
//	int temp_index = search_by_name(nama);
//	for(int k=temp_index; k<index; k++){
//		nama_barang[k]=nama_barang[k+1];
//		harga_barang[k]=harga_barang[k+1];
//		stok_barang[k]=stok_barang[k+1];
//	}
//	index--;
//}
//
//void pengurangan_stok(){
//	int temp_index = search_by_name(barang[a]);
//	total += jmlh[a] * harga_barang[temp_index];
//	stok_barang[temp_index] -= jmlh[a];
//	a++;
//}
//
//void view_transaksi_baru(){
//	int jmlh[100], total = 0, bayar;
//	char ulangi;
//	int a = 0;
//	string barang[100];

//	do
//	{
//		println("masukan nama barang yang ingin di beli: ");
//		cin >> barang[a];
//		int temp_index = search_by_name(barang[a]);
//		if (temp_index != -1)
//		{
//			if (stok_barang[temp_index] != 0)
//			{
//				while (true)
//				{
//					println("masukan jumlah barang yang ingin di beli: ");
//					cin >> jmlh[a];
//					cout << endl;
//
//					if (jmlh[a] <= stok_barang[temp_index] && jmlh[a] > 0)
//					{
//						// cout << jmlh[a] << endl;
//						total += jmlh[a] * harga_barang[temp_index];
//						stok_barang[temp_index] -= jmlh[a];
//						a++;
//						break;
//					}
//					else
//					{
//						println("===========================================================");
//						cout << "Warning! jumlah yang dinginkan tidak sesuai dengan stok yang tersedia!" << endl;
//						cout << "             Silahkan Masukan jumlah yang sesuai!          " << endl;
//						println("===========================================================");
//					}
//				}
//			}
//			else
//			{
//				println("======================================================================");
//				cout << "Maaf, Stok barang telah habis" << endl;
//				cout << "anda tidak bisa melanjutkan transaksi dengan nama barang : " << barang << endl;
//				println("======================================================================");
//			}
//		}
//		else
//		{
//			println("=================================");
//			println("|Maaf Nama Barang Tidak Tersedia|");
//			println("=================================");
//		}
//
//		cout << "ingin membeli barang yang lain?(y/t)" << endl;
//		cin >> ulangi;
//	} while (ulangi == 'y');
//	
//	
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Nama Barang: " << barang[i] << endl;
//		cout << "Jumlah Barang: " << jmlh[i] << endl;
//	}
////	print("Total Yang Harus Dibayar : ");
////	cout << "Rp." << total << endl;
////
////	do
////	{
////		print("Bayar : Rp.");
////		cin >> bayar;
////
////		if (bayar > 0 && bayar >= total)
////		{
////			int kembali;
////			kembali = bayar - total;
////			print("Kembalian : ");
////			cout << "Rp." << kembali;
////			cout << endl;
////			println("=======================================");
////			println("Terimakasih, Transaksi Telah Berhasil");
////			println("=======================================");
////		}
////		else
////		{
////			println("=========================================================");
////			println("Maaf uang anda TIDAK CUKUP untuk melakukann pembayaran");
////			println("          !Mohon Masukan nominal dengan benar!        ");
////			println("=========================================================");
////		}
////	} while (bayar < total);
//}

