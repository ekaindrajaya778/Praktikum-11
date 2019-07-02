#include <iostream.h>
#include <conio.h>
int main()
{
struct data
{
int jam;
int menit;
};
data masuk,keluar,selisih;
cout<<"--------------------------------------------"<<endl;
cout<<"  SELISIH ANTARA DUA WAKTU "<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<"Jam Masuk "<<endl;
cout<<"Jam : ";
cin>>masuk.jam;
cout<<"Menit : ";
cin>>masuk.menit;
cout<<"Jadi : ";
cout<<masuk.jam<<"."<<masuk.menit<<" ";
cout<<endl<<endl;

cout<<"Jam Keluar " <<endl;
cout<<"Jam : ";
cin>>keluar.jam;
cout<<"Menit : ";
cin>>keluar.menit;
cout<<endl;
if((keluar.menit-masuk.menit)<0)
{
        selisih.menit=(60+keluar.menit)-masuk.menit;
  keluar.jam--;
}
else
{
selisih.menit=keluar.menit-masuk.menit;
}
selisih.jam=keluar.jam-masuk.jam;
cout<<endl;
cout<<"SELISIH DALAM MENIT= "<<(selisih.jam*60+selisih.menit)<<endl;
cout<<endl<<endl;
cout<<"Selisih WAKTU : "<<selisih.jam<<","<<selisih.menit<<endl;
getch ();
}

