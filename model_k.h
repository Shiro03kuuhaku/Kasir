#include "data_store.h"

void print(string value){
    cout<<value;
}

void println(string value){
    cout<<value<<endl;
}

void view_barang(){
    for(int i=0 ;i<=index;i++){
       cout<<" "<<nama_barang[i]<<"\t"<<"\t"<<harga_barang[i]<<"\t"<<"\t"<<stok_barang[i]<<endl;
    }
    cout<<"<=========================================>"<<endl;
}

int search_by_name(string name){
    int temp_index = -1;
    for (int i = 0 ; i <= index ; i++){
        if (name == nama_barang[i]){
            temp_index = i;
        }
    }
    return temp_index;
}

void tambah_barang_dinamis(){
	index ++;
}

void tambah_barang_static(string nama, int harga, int stok){
    index ++;
    nama_barang[index] = nama;
    harga_barang[index] = harga;
    stok_barang[index] = stok;
}


void delete_barang(){
	int temp_index = search_by_name(nama);
	for(int k=temp_index; k<index; k++){
		nama_barang[k]=nama_barang[k+1];
		harga_barang[k]=harga_barang[k+1];
		stok_barang[k]=stok_barang[k+1];
	}
	index--;
}

void pengurangan_stok(){
	int temp_index = search_by_name(barang[a[n]]);
	total += jmlh[a[n]] * harga_barang[temp_index];
	stok_barang[temp_index] -= jmlh[a[n]];
	a[n]++;
}

void view_transaksi_baru(){
	for (int i = 0; i < a[n]; i++)
	{
		cout << "Nama Barang: " << barang[i] << endl;
		cout << "Jumlah Barang: " << jmlh[i] << endl;
	}
	n++;
}

void proses_trans(){
	kembali = bayar - total;
	total=0;
}

void update_barang(){

    int temp_index = search_by_name(nama);

}
