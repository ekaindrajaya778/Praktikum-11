#include <iostream.h>
#include <conio.h>
#include <windows.h>
int main ()
{
         struct
   {
         char NIK [20];
       char Nama [30];
       char jk[10];
       char alamat[40];
       char agama[10];
       char kota [10];
   }ktp;
    struct
    {
         char NIM[20];
       char Nama[30];
       char fk[15];
       char prodi[40];
    }ktm;
   struct waktu
   {
        char tempat [10];
      int tanggal ;
      int bulan ;
      int tahun;
   };
   waktu tgl;
   int x;
   system ("cls");
   cout<<"\t-----------------------------------------------------"<<endl;
   cout<<"\t         Pendaftaran KTP dan KTM                "<<endl;
   cout<<"\t-----------------------------------------------------"<<endl;
   cout<<"1. KTP "<<endl;
   cout<<"2. KTM "<<endl;
   cin>>x;
   cout<<endl;
   switch (x)
{
case 1:
   cout<<"\t--------------------------------------------------------"<<endl;
   cout<<"\t            Pendaftaran KTP                             "<<endl;
   cout<<"\t--------------------------------------------------------"<<endl;
   cout<<"Masukkan NIK : ";
   cin>>ktp.NIK;
   cout<<"Masukkan Nama : ";
   cin>>ktp.Nama;
   cout<<"Masukkan Tempat Lahir : ";
   cin>>tgl.tempat;
   cout<<"Masukkan Tanggal Lahir : ";
   cin>>tgl.tanggal;
   cout<<"Masukkan Bulan Lahir : ";
   cin>>tgl.bulan;
   cout<<"Masukkan Tahun Lahir : ";
   cin>>tgl.tahun;
   cout<<"Masukkan Jenis Kelamin : ";
   cin>>ktp.jk;
   cout<<"Masukkan Alamat : ";
   cin>>ktp.alamat;
   cout<<"Masukkan Kota : ";
   cin>>ktp.kota;
   cout<<"Masukkan Agama : ";
   cin>>ktp.agama;
   cout<<endl;

   cout<<"-----------------------------------------------------------"<<endl;
   cout<<"              HASIL CETAK KTP                              "<<endl;
   cout<<"-----------------------------------------------------------"<<endl;
   cout<<"NIK   : "<<ktp.NIK<<endl;
   cout<<"Nama  : "<<ktp.Nama<<endl;
   cout<<"Tempat/TglLahir : "<<tgl.tempat<<","<<tgl.tanggal<<"/"<<tgl.bulan<<"/"<<tgl.tahun<<endl ;
   cout<<"Jenis Kelamin : "<<ktp.jk<<endl;
   cout<<"Alamat : "<<ktp.alamat<<ktp.kota<<endl;
   cout<<"Agama  : "<<ktp.agama<<endl;
   cout<<endl;
   break;

case 2:
   cout<<"\t----------------------------------------------------------"<<endl;
   cout<<"\t       Pendaftaran KTM                             "<<endl;
   cout<<"\t----------------------------------------------------------"<<endl;
   cout<<"Masukkan NIM : "; cin>>ktm.NIM;
   cout<<"Masukkan Nama : "; cin>>ktm.Nama;
   cout<<"Masukkan Fakultas : ";cin>>ktm.fk;
   cout<<"Masukkan Prodi : "; cin>>ktm.prodi;
   cout<<endl;

   cout<<"-----------------------------------------------------"<<endl;
   cout<<"      HASIL CETAK KTM                                "<<endl;
   cout<<"-----------------------------------------------------"<<endl;
   cout<<"NIM   : "<<ktm.NIM<<endl;
   cout<<"Nama  : "<<ktm.Nama<<endl;
   cout<<"Fakultas : "<<ktm.fk<<endl;
   cout<<"Prodi    : "<<ktm.prodi<<endl;
   cout<<endl;
   break;
default:
        cout<<"Maaf, Pilihan Anda Tidak Sesuai "<<endl;
}
getch();
}

