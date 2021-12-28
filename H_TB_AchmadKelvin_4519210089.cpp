#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;

void header();
void menu();
void menu1();
void menu2();
void menu3();
void konfbeli();
void cetakpembayaran();
void rekappenjualan();
void tampilrekap();

int banyak[30], i, n, kembali, kode;
int harga[30], kodebarang[30], jml_bel[30];
string barang[30], tanggal, nomor;
long int sub_total[30], total=0, bayar;
char pembeli[30];

void header()
{
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "|| 	  S N E A K 'EL' H E A D	   ||" << endl;
	cout << "|| Menjual sneakers terbaik dan terbaru    ||" << endl;
	cout << "||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
	cout << "|| Ciomas street 14th West-side, Buitenzorg||" << endl;
	cout << "|| (+62)896-3212-1164 (ACHMAD KELVIN)      ||" << endl;
	cout << "|| Senin-Jumat : 10:00-22.00 /West Bogor   ||" << endl;
	cout << "=============================================" << endl;
	cout << endl;
	menu();
}

void menu()
{
	int pilih1;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "                MENU UTAMA                   " << endl;
	cout << "_____________________________________________" << endl;
	cout << " 1. Daftar Brand Sneaker                      " << endl;
	cout << " 2. Pembelian                                " << endl;
	cout << " 3. Rekap Penjualan						  " << endl;
	cout << " 4. Keluar                                   " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukkan Pilihan Anda = "; cin >> pilih1;
	switch(pilih1)
	{
		case 1 : menu1(); break;
		case 2 : menu2(); break;
		case 3 : tampilrekap(); break;
		case 4 : menu3(); break;
		default : cout << "Pilihan Anda Salah !!!" << endl; break;
	}
	cout << endl;
	cout << endl;
}

void menu1()
{
	int pilih2;
	char yn;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "           Daftar Brand Sneaker               " << endl;
	cout << "_____________________________________________" << endl;
	cout << "   1. Nike                          " << endl;
	cout << "   2. Adidas                          " << endl;
	cout << "   3. Converse                       " << endl;
	cout << "   4. Vans                        " << endl;
	cout << "   5. Kembali Ke Menu Awal                   " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukkan Pilihan Anda = "; cin >> pilih2;
	cout << endl;
	cout << endl;
	switch(pilih2)
	{
		case 1:
			cout << "=======================================================================" << endl;
			cout << "                               Sneakers Nike                           " << endl;
			cout << "=======================================================================" << endl;
			cout << "|| No ||       Nama Sneaker         ||     Harga      || Kode Produk ||" << endl;
			cout << "=======================================================================" << endl;
			cout << "|| 1. || AIR JORDAN 1 TRAVIS SCOTT  || Rp. 10.459.000 ||      11     ||" << endl;
			cout << "|| 2. || DUNK LOW OFF-WHITE         || Rp. 6.734.000  ||      12     ||" << endl;
			cout << "|| 3. || LD WAFFLE SACAI            || Rp. 9.856.000  ||      13     ||" << endl;
			cout << "|| 4. || AIR FORCE 1 TRAVIS SCOTT   || Rp. 7.182.000  ||      14     ||" << endl;
			cout << "|| 5. || AIR FEAR OF GOD 1          || Rp. 6.818.000  ||      15     ||" << endl;
			cout << "=======================================================================" << endl;
			cout << " Kembali (Y / N) = "; cin >> yn;
			switch(yn)
			{
				case 'Y' : menu1();	break;
				case 'N' : " "; break;
				default : cout << "Pilihan Salah !!" << endl;	break;
			}
			break;
			
		case 2:
			cout << "=======================================================================" << endl;
			cout << "                             Sneakers Adidas                             " << endl;
			cout << "=======================================================================" << endl;
			cout << "|| No ||       Nama Sneaker     ||     Harga      || Kode Produk ||" << endl;
			cout << "=======================================================================" << endl;
			cout << "|| 1. || Yeezy Boost V2       	|| Rp. 4.324.000  ||      21     ||" << endl;
			cout << "|| 2. || Yeezy 700 V3 Azael 	|| Rp. 3.251.000  ||      22     ||" << endl;
			cout << "|| 3. || NMD Hu Pharrell      	|| Rp. 2.702.000  ||      23     ||" << endl;
			cout << "|| 4. || Ultraboost Undefeated  || Rp. 2.338.000  ||      24     ||" << endl;
			cout << "|| 5. || Superstar 80 Blondey   || Rp. 2.982.000  ||      25     ||" << endl;
			cout << "=======================================================================" << endl;
			cout << " Kembali (Y / N) = "; cin >> yn;
			switch(yn)
			{
				case 'Y' : menu1();	break;
				case 'N' : " "; break;
				default : cout << "Pilihan Salah !!" << endl;	break;
			}
			break;

		case 3:
			cout << "=======================================================================" << endl;
			cout << "                              Sneakers Converse                         " << endl;
			cout << "=======================================================================" << endl;
			cout << "|| No ||       Nama Sneaker       	    Harga         Kode Produk||" << endl;
			cout << "=======================================================================" << endl;
			cout << "|| 1. || BATMAN CHINATOWN MARKET 70 HI Rp. 2.100.000          31     ||" << endl;
			cout << "|| 2. || CT ALL STAR X UNDERCOVER      Rp. 1.960.000          32     ||" << endl;
			cout << "|| 3. || ERX 260 X DON C               Rp. 2.800.000          33     ||" << endl;
			cout << "|| 4. || PRO LEATHER OG ITALY LOW      Rp. 2.240.000          34     ||" << endl;
			cout << "|| 5. || LOUIE LOPEZ PRO RUBBER LOW    Rp. 1.780.000          35     ||" << endl;
			cout << "=======================================================================" << endl;
			cout << " Kembali (Y / N) = "; cin >> yn;
			switch(yn)
			{
				case 'Y' : menu1();	break;
				case 'N' : " "; break;
				default : cout << "Pilihan Salah !!" << endl;	break;
			}
			break;
			
		case 4:
			cout << "=======================================================================" << endl;
			cout << "                                Sneakers Vans                        " << endl;
			cout << "=======================================================================" << endl;
			cout << "|| No ||       Nama Sneaker       	  Harga         Kode Produk  ||" << endl;
			cout << "=======================================================================" << endl;
			cout << "|| 1. || SK8 HI X THRASHER             Rp. 2.235.000          41     ||" << endl;
			cout << "|| 2. || ERA X FEAR OF GOD             Rp. 3.125.000          42     ||" << endl;
			cout << "|| 3. || SLIP ON X VAULT RALPH S       Rp. 3.324.000          43     ||" << endl;
			cout << "|| 4. || AUTHENTIC TRIBAL              Rp. 1.232.000          44     ||" << endl;
			cout << "|| 5. || OLD SKOOL X BUZZ LIGHTYEAR TS Rp. 2.345.000          45     ||" << endl;
			cout << "=======================================================================" << endl;
			cout << " Kembali (Y / N) = "; cin >> yn;
			switch(yn)
			{
				case 'Y' : menu1();	break;
				case 'N' : " "; break;
				default : cout << "Pilihan Salah !!" << endl;	break;
			}
			break;

		case 5:
			menu();	break;

		default : cout << " Pilihan Anda Salah !!! " << endl; break;
	}
}

void menu2()
{
	char yn;
	cout << "=============================================" << endl;
	cout << "                  Pembelian                  " << endl;
	cout << "=============================================" << endl;
	cout << "Tanggal Pembelian (DD-MM-YYYY) = "; cin >> tanggal;
	cout << "Nama Pembeli                   = "; cin >> pembeli;
	cout << "Nomor Telepon Pembeli          = "; cin >> nomor;

	cout << endl;
	cout << "=============================================" << endl;
	cout << " Jumlah Item Yang Dibeli = "; cin >> n;
	for (i = 0; i <= n-1; i++)
	{
		cout << " ========================" << endl;
		cout << " Item Ke-" << i+1 << endl;
		cout << " Kode Produk = "; cin >> kodebarang[i];
		cout << " Jumlah      = "; cin >> banyak[i];
	}
	cout << "=============================================" << endl;
	konfbeli();
}

void menu3()
{
	cout << "===============================================================================================" << endl;
	cout << "                                    TERIMA KASIH TELAH BERBELANJA                              " << endl;
	cout << "                                                 di                                            " << endl;
	cout << "                                       S N E A K 'EL' H E A D  	                                " << endl;
	cout << "===============================================================================================" << endl;
}

void konfbeli()
{
	char yn;
	for(i = 0; i <= n-1; i++)
	{
		if (kodebarang[i] == 11)
		{
			barang[i] = "AIR JORDAN 1 TRAVIS SCOTT";
			harga[i] = 10459000;
		}	
		else if (kodebarang[i] == 12)
		{
			barang[i] = "DUNK LOW OFF-WHITE";
			harga[i] = 6734000;
		}
		else if (kodebarang[i] == 13)
		{
			barang[i] = "LD WAFFLE SACAI";
			harga[i] = 9856000;
		}
		else if (kodebarang[i] == 14)
		{
			barang[i] = "AIR FORCE 1 TRAVIS SCOTT";
			harga[i] = 7182000;
		}
		else if (kodebarang[i] == 15)
		{
			barang[i] = "AIR FEAR OF GOD 1";
			harga[i] = 6818000;
		}
		else if (kodebarang[i] == 21)
		{
			barang[i] = "Yeezy Boost V2";
			harga[i] = 4324000;
		}
		else if (kodebarang[i] == 22)
		{
			barang[i] = "Yeezy 700 V3 Azael";
			harga[i] = 3251000;
		}
		else if (kodebarang[i] == 23)
		{
			barang[i] = "NMD Hu Pharrell";
			harga[i] = 2702000;
		}
		else if (kodebarang[i] == 24)
		{
			barang[i] = "Ultraboost Undefeated";
			harga[i] = 2338000;
		}
		else if (kodebarang[i] == 25)
		{
			barang[i] = "Superstar 80 Blondey";
			harga[i] = 2982000;
		}
		else if (kodebarang[i] == 31)
		{
			barang[i] = "BATMAN CHINATOWN MARKET 70 HI";
			harga[i] = 2100000;
		}
		else if (kodebarang[i] == 32)
		{
			barang[i] = "CT ALL STAR X UNDERCOVER";
			harga[i] = 1960000;
		}
		else if (kodebarang[i] == 33)
		{
			barang[i] = "ERX 260 X DON C";
			harga[i] = 2800000;
		}
		else if (kodebarang[i] == 34)
		{
			barang[i] = "PRO LEATHER OG ITALY LOW";
			harga[i] = 2240000;
		}
		else if (kodebarang[i] == 35)
		{
			barang[i] = "LOUIE LOPEZ PRO RUBBER LOW";
			harga[i] = 1780000;
		}
		else if (kodebarang[i] == 41)
		{
			barang[i] = "SK8 HI X THRASHER";
			harga[i] = 2235000;
		}
		else if (kodebarang[i] == 42)
		{
			barang[i] = "ERA X FEAR OF GOD";
			harga[i] = 3125000;
		}
		else if (kodebarang[i] == 43)
		{
			barang[i] = "SLIP ON X VAUL RALPH S";
			harga[i] = 3324000;
		}
		else if (kodebarang[i] == 44)
		{
			barang[i] = "AUTHENTIC TRIBAL";
			harga[i] = 1232000;
		}
		else if (kodebarang[i] == 45)
		{
			barang[i] = "OLD SKOOL X BUZZ LIGHTYEAR TS";
			harga[i] = 2345000;
		}
		else
		{
			barang[i] = "Kode Salah !!!";
			harga[i] = 0;
		}
	}
	cout << endl;
	cout << "===============================================================================================" << endl;
	cout << "--------------------------------------KONFIRMASI PEMBELIAN-------------------------------------" << endl;
	cout << "===============================================================================================" << endl;
	cout << "|| N o ||                 Nama Sneaker             ||    Harga    || Jumlah ||   Sub Total   ||" << endl;
	cout << "===============================================================================================" << endl;
	for(i=0; i<=n-1; i++)
	{
	sub_total[i] = banyak[i]*harga[i];
	cout << "||  " << setiosflags(ios::left) << setw(2) << i+1;
	cout << " || " << setiosflags(ios::left) << setw(41) << barang[i];
	cout << "|| Rp." << setiosflags(ios::left) << setw(9) << harga[i];
	cout << "||   " << setiosflags(ios::left) << setw(5) << banyak[i];
	cout << "|| Rp." << setiosflags(ios::left) << setw(11) << sub_total[i] << "||" << endl;
	total = total + sub_total[i];
	}
	cout << "===============================================================================================" << endl;
	cout << "                                                          JUMLAH  || Rp." << total << endl;
	cout << "===============================================================================================" << endl;
	cout << "KONFIRMASI PEMBELIAN (Y/N) = "; cin >> yn;
	switch(yn)
	{
		case 'Y' : rekappenjualan(); cetakpembayaran(); break;
		case 'N' : menu3(); break;
		default  : cout << "Pilihan Salah !!" << endl; break;
	}
}

void cetakpembayaran()	
{
	int startScan, minIndex, min1, min2, min3;
	string minValue;

	for(startScan=0; startScan<n-1; startScan++)
	{
		minIndex = startScan;
		minValue = barang[startScan];
		for (int index = startScan+1; index < n; index++)
		{
			if (barang[index] < minValue)
			{
				minValue = barang[index];
				min1 = harga[index];
				min2 = banyak[index];
				min3 = sub_total[index];
				minIndex = index;
			}
		}
		barang[minIndex] = barang[startScan];
		barang[startScan] = minValue;

		harga[minIndex] = harga[startScan];
		harga[startScan] = min1;

		banyak[minIndex] = banyak[startScan];
		banyak[startScan] = min2;

		sub_total[minIndex] = sub_total[startScan];
		sub_total[startScan] = min3;
	}
	cout << endl;
	cout << "===============================================================================================" << endl;
	cout << "||--------------------------------------RESI  PEMBAYARAN-------------------------------------||" << endl;
	cout << "||=============================================================================================" << endl;
	cout << "-----------------------------------------DATA PEMBELIAN--------------------------------------||" << endl;
	cout << "|| Tanggal Pembelian = " << tanggal << endl;
	strupr(pembeli);
	cout << "|| Nama Pembeli      = " << pembeli << endl;
	cout << "|| Nomor Telepon     = " << nomor << endl;
	cout << "||=============================================================================================" << endl;
	cout << "|| N o ||                 Nama Barang              ||    Harga    || Jumlah ||   Sub Total   ||" << endl;
	cout << "===============================================================================================" << endl;
	for(i=0; i<=n-1; i++)
	{
	cout << "||  " << setiosflags(ios::left) << setw(2) << i+1;
	cout << " || " << setiosflags(ios::left) << setw(41) << barang[i];
	cout << "|| Rp." << setiosflags(ios::left) << setw(9) << harga[i];
	cout << "||   " << setiosflags(ios::left) << setw(5) << banyak[i];
	cout << "|| Rp." << setiosflags(ios::left) << setw(11) << sub_total[i] << "||" << endl;
	}
	cout << "===============================================================================================" << endl;
	cout << "                                                          JUMLAH  || Rp." << total << endl;
	cout << "                                                          BAYAR   || Rp."; cin >> bayar;
	kembali = bayar-total;
	cout << "                                                          KEMBALI || Rp." << kembali << endl;
	cout << "===============================================================================================" << endl;
	menu3();
}

void rekappenjualan()
{
	ofstream file_rekap;
	file_rekap.open("rekap.TXT",ios::app);
	file_rekap << "Tanggal Pembelian = " << tanggal << endl;
	file_rekap << "Nama Pembeli = " << pembeli << endl;
	file_rekap << "Barang Yang Dibeli = " << endl;
	for(i=0; i<=n-1; i++)
	{
		file_rekap << "   " << i+1 <<". " << barang[i] << endl;
		file_rekap << "      " << "Jumlah = " << banyak[i] << endl;
 	}
 	file_rekap << "TOTAL = Rp. " << total << endl;
 	file_rekap << endl;
 	file_rekap << endl;
 
 	file_rekap.close();
}

void tampilrekap()
{
	const int maks = 100;
	char buffer[maks+1];
	ifstream file_rekap("rekap.TXT");
	cout << "==========================================================" << endl;
	cout << "||                 REKAP PENJUALAN SNEAKER	             ||" << endl;
	cout << "==========================================================" << endl;
	while(file_rekap)
	{
		file_rekap.getline(buffer, maks);
		cout << buffer << endl;
	}
	file_rekap.close();
}

int main()
{
	header();
	cin.get();
	system ("pause");
}