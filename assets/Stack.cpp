#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct tumpukan  //struktur tumpukan
{
 char data[15][100], max[15];  
 int i, j;
} stack;

void push()  //push untuk mengisi data
{
 stack.i++;
 cout << "Masukan data : ";
 cin >> stack.max;
 strcpy (stack.data[stack.i], stack.max);  //perintah mennyalin data char panjang menggunakan fungsi string
}

void pop()  //pop untuk menggambil data
{
 if (stack.i > 0)
 {
  cout << "data yang terambil : " << stack.data[stack.i] << endl;  //data akan terambil paling atas
  stack.i--; stack.j--;
 }
 else
  cout << "tak ada data yang terambil" << endl;  //jika tidak ada data
}

void view (int n)  //print untuk menampilkan data
{
 if (stack.j > 0)  //menampilkan isi data menggunakan perulangan for
 {
  for (int e = n; e >= 1; e--)
  {
   cout << stack.data[e] << endl;
  }
 }
 else 
  cout << "tak ada data tersimpan" << endl;  //jika tidak ada data
}

void clear()  //clear untuk menghapusdata
{
 stack.j = 0; stack.i = 0;  //perintah untuk menghapus keseluruhan data
}

void quit()  //clear untuk menghapusdata
{
 stack.j = 0; stack.i = 0;  //perintah untuk menghapus keseluruhan data
}

main (void)
{
 int n = 3, pilih;
 run: // menjalankan program
  cout << "Program Stack (Tumpukan)\n";
  stack.data[n];
  back:  // kembali ke menu
   
   cout << "\n1. Push (input)\n2. Pop (ambil)\n3. View (lihat)\n4. Clear (hapus)\n5. Quit (keluar)\n";
   cout << "\n ==>> ";  cin >> pilih;
   cout << "\n";
   if (pilih == 1) // pilih opsi 1
   {
    if (stack.j < n)
    {
     stack.j++;  push();
    }
    else
     {
      cout << "Tumpukan penuh!" << endl;
      getch();
     }
     goto back;
   }
   else 
    if (pilih == 2) // pilih opsi 2
    {
     pop ();  getch();  goto back;
    }
    else 
     if (pilih == 3) // pilih opsi 3
     {
      view (stack.i);  getch();  goto back;
     }
     else
      if (pilih == 4) // pilih opsi 4
      {
       clear();  getch();  goto back;
      }
      else 
       if (pilih = 5) // pilih opsi salah
       {
       	if(stack.i > 0, stack.j > 0){
       		cout << "Anda keluar, data terhapus.";
        		quit(); getch();  return 0;
		   } else {
		   		cout << "Anda keluar.";
        		quit(); getch();  return 0;
		   }
       }
       else
        {
         cout << "Input anda masukan salah !!!\n\n";
         getch();  goto run;
        }
}


