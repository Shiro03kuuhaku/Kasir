#include <iostream>
#include "helperrr.h"
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
            	println("=================");
                println("|menu view barang|");
                println("=================");
                cout<<"cek index : "<<index;
                view_barang();
                break;
            case 2:
            	println("===================");
                println("|menu insert barang|");
                println("===================");
                tambah_barang();
                break;
            case 3:
                println("menu 3");
                println("================");
                println("|menu transaksi|");
                println("================");
                transaksi_baru();
                break;
            case 4:
                println("menu 4");
                println("===================");
                println("|history transaksi|");
               	println("===================");
                break;
            case 5:
                println("menu 5");
                println("===================");
                println("|menu delete barang|");
                println("===================");
                delete_barang();
                break;
        	case 6:
                println("menu 6");
                println("===================");
                println("|menu update barang|");
                println("===================");
                update_barang();
                break;
            case 7:
                println("menu EXIT");
                break;
        }
    }

    return 0;
}
