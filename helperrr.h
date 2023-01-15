#include <iostream>
using namespace std;

//deklarasi array dan index
string nama_barang [10];
int harga_barang [10];
int stok_barang [10];
int index = -1;


void print(string value){
    cout<<value;
}

void println(string value){
    cout<<value<<endl;
}

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

void tambah_barang(){
    index ++;
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

void tambah_barang_static(string nama, int harga, int stok){
    index ++;
    nama_barang[index] = nama;
    harga_barang[index] = harga;
    stok_barang[index] = stok;
}

void view_barang(){
	cout<<endl;
    cout<<"\t"<<"\t"<<"LIST BARANG"<<endl;
    println("===========================================");
    cout<<"|Nama Barang|\tHarga barang|\tStok Barang|"<<endl;
    cout<<"<=========================================>"<<endl;
    for(int i=0 ;i<=index;i++){
       cout<<" "<<nama_barang[i]<<"\t"<<"\t"<<harga_barang[i]<<"\t"<<"\t"<<stok_barang[i]<<endl;
    }
    cout<<"<=========================================>"<<endl;
}

void data_barang_static(){
    //data input static barang
    tambah_barang_static("odol",5000,10);
    tambah_barang_static("sabun",3000,5);
    tambah_barang_static("shampo",18000,8);
    tambah_barang_static("sikat",10000,4);
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

void update_barang(){
    println("masukkan nama barang yang akan di update : ");
    string nama;
    cin>>nama;
    int temp_index = search_by_name(nama);
    cout<<"masukkan stok baru : ";
    cin>>stok_barang[temp_index];
    println("===============");
    println("|Update Success|");
    println("===============");
}

void delete_barang(){
	println("masukan nama barang yang akan di delete : ");
	string nama;
	cin>>nama;
	int temp_index = search_by_name(nama);
	if(temp_index != -1){
		for(int k=temp_index; k<index; k++){
			nama_barang[k]=nama_barang[k+1];
			harga_barang[k]=harga_barang[k+1];
			stok_barang[k]=stok_barang[k+1];
		}
		index--;
		println("===============");
	    println("|Delete Success|");
	    println("===============");
	}
	else{
		println("===============");
	    println("|Delete Can Not Be Success|");
	    println("===============");
	}
}

void transaksi_baru()
{
	int jmlh[100], total = 0, bayar;
	char ulangi;
	int a = 0;
	string barang[100];

	println("===============TRANSAKSI===============");
	do
	{
		println("masukan nama barang yang ingin di beli: ");
		cin >> barang[a];
		int temp_index = search_by_name(barang[a]);
		if (temp_index != -1)
		{
			if (stok_barang[temp_index] != 0)
			{
				while (true)
				{
					println("masukan jumlah barang yang ingin di beli: ");
					cin >> jmlh[a];
					cout << endl;

					if (jmlh[a] <= stok_barang[temp_index] && jmlh[a] > 0)
					{
						// cout << jmlh[a] << endl;
						total += jmlh[a] * harga_barang[temp_index];
						stok_barang[temp_index] -= jmlh[a];
						a++;
						break;
					}
					else
					{
						println("===========================================================");
						cout << "Warning! jumlah yang dinginkan tidak sesuai dengan stok yang tersedia!" << endl;
						cout << "             Silahkan Masukan jumlah yang sesuai!          " << endl;
						println("===========================================================");
					}
				}
			}
			else
			{
				println("======================================================================");
				cout << "Maaf, Stok barang telah habis" << endl;
				cout << "anda tidak bisa melanjutkan transaksi dengan nama barang : " << barang << endl;
				println("======================================================================");
			}
		}
		else
		{
			println("=================================");
			println("|Maaf Nama Barang Tidak Tersedia|");
			println("=================================");
		}

		cout << "ingin membeli barang yang lain?(y/t)" << endl;
		cin >> ulangi;
	} while (ulangi == 'y');
	
	println("=======================================");
	for (int i = 0; i < a; i++)
	{
		cout << "Nama Barang: " << barang[i] << endl;
		cout << "Jumlah Barang: " << jmlh[i] << endl;
	}
	print("Total Yang Harus Dibayar : ");
	cout << "Rp." << total << endl;

	do
	{
		print("Bayar : Rp.");
		cin >> bayar;

		if (bayar > 0 && bayar >= total)
		{
			int kembali;
			kembali = bayar - total;
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
