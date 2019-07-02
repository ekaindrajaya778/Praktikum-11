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
data_tanggal tanggal_lahir;
tanggal_lahir.tanggal = 1;
tanggal_lahir.bulan = 9;
tanggal_lahir.tahun = 1979;
cout << tanggal_lahir.tanggal << "/" << tanggal_lahir.bulan << "/" << tanggal_lahir.tahun;
 getch();
}
