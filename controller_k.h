#include "model_k.h"
#include <iostream>
using namespace std;

void controler_view_barang(){
	view_barang();
}

void controler_insert_stat(string nama, int harga, int stok){
	tambah_barang_static(nama, harga, stok);
}

void controler_insert_dinamis(){
	tambah_barang_dinamis();
}

bool controler_del_barang(string nama){
	int temp_index = search_by_name(nama);
	if(temp_index != -1){
		delete_barang();
		return true;
	}
	else{
		return false;
	}
}

bool controler_trans1(string barang){
	int temp_index = search_by_name(barang);
	if (temp_index != -1){
		return true;
	}
	else{
		return false;
	}

}

bool controler_trans2(string barang){
	int temp_index = search_by_name(barang);
	if (stok_barang[temp_index] != 0){
		return true;
	}else{
		return false;
	}
}

bool controler_trans3(string barang){
	int temp_index = search_by_name(barang);
	if (jmlh[a[n]] <= stok_barang[temp_index] && jmlh[a[n]] > 0){
		pengurangan_stok();
		return true;
	}else{
		return false;
	}
}

void controler_view_trans(){
	view_transaksi_baru();
}

bool controler_bayar(int bayar){
	if (bayar > 0 && bayar >= total){
		proses_trans();
		return true;
	}else{
		return false;
	}
	
}

void controler_up_barang(){
	int temp_index = search_by_name(nama);
	update_barang();
}

//bool controler_up_bar(string nama){
//	int temp_index = search_by_name(nama);
//	if(temp_index != -1){
//		update_barang();
//		return true;
//	}
//	else{
//		return false;
//	}
//}

