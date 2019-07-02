#include <iostream.h>
#include <conio.h>
void main()
{
struct data_tanggal
{
int tanggal;
int bulan;
int tahun;
};
data_tanggal tgl1, tgl2;
tgl1.tanggal = 1;
tgl1.bulan = 9;
tgl1.tahun = 1979;
tgl2 = tgl1;
//atau
tgl2.tanggal = tgl1.tanggal;
tgl2.bulan = tgl1.bulan;
tgl2.tahun = tgl2.tahun;
cout<< tgl1.tanggal << "/" << tgl1.bulan << "/" << tgl1.tahun << endl;
cout<< tgl2.tanggal << "/" << tgl2.bulan << "/" << tgl2.tahun << endl;

 typedef struct
 {
 char kode [5];
 char nama[20];
 int jml;
 float harga ;
 }
 psd;
 //pendefinisian nama variabel baru
 getch();
 }

