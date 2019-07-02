#include <iostream.h>
#include <conio.h>

int main ()
{
        struct segitiga
   {
        float keliling;
      float luas;
   };
   segitiga alas,tinggi,miring, x;

   cout<<"----------------------------------------------"<<endl;
   cout<<" Menghitung LUAS dan KELILING SEGITIGA        "<<endl;
   cout<<"----------------------------------------------"<<endl;
   cout<<"\t ===     ANANDA PUTRI SYAVITRI          === \n \n";
   cout<<"\t ===         130553608243               === \n \n";
   cout<<"\t ===         PTI'13 OFF B               === \n \n";
   cout<<"\t ===----- ---------**-------------------=== \n \n";
   cout<<"Keterangan : "<<endl;
   cout<<" a = sisi alas segitiga  "<<endl;
   cout<<" b = sisi tinggi segitiga "<<endl;
   cout<<" c = sisi miring segitiga "<<endl;
   cout<<" a = ";
   cin>>alas.luas;
   cout<<" b = ";
   cin>>tinggi.luas;
   cout<<" c = ";
   cin>>miring.luas;
   cout<<endl;
   x.luas=(alas.luas*tinggi.luas)/2;
   x.keliling = alas.luas + tinggi.luas + miring.luas;
   cout<<"Luas Segitiga = "<<x.luas<<" cm " << endl;
   cout<<"Keliling Segitiga = "<<x.keliling<<" cm "<<endl<<endl;
getch();
}
