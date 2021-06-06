/* Desta Ari Alfananda*/
/* 20051397008 */
/* Manajemen Informatika*/

#include <iostream>//pada aplikasi Dev.C++ compilenya mendukung format iostream seperti ini
#include <conio.h>
#include <stdio.h>
#include <windows.h>//mendukung format system("CLS") sebagai peganti clrscr()
using namespace std;//penambahan untuk header iostream

int pilih; void pilihan();
void insert_data();
void hapus_data();
void cetak_data();
struct node
{
 int nomor;
 char jbuku [40];
 char nama [40];
 char penerbit [20];
 node *prev, *next;
};
node *baru, *head=NULL, *tail=NULL,*help,*del;
main()//interface monitor
{
 do
 {
  system("cls");
  cout<<"\tLIN. DOUBLY LINKED LIST"<<endl;
  cout<<"\t=========================="<<endl;
  cout<<"\t1. INSERT DATA"<<endl;
  cout<<"\t2. HAPUS DATA"<<endl;
  cout<<"\t3. CETAK DATA"<<endl;
  cout<<"\t4. EXIT"<<endl;
  cout<<"\tPilihan (1 - 4) : ";
  cin>>pilih;
  cout<<endl<<endl;
  pilihan();
  cout<<"==============================="<<endl;
 }
 while(pilih!=4);
}
void pilihan()//fungsi "pilihan" untuk pemrosesan
{
 if(pilih==1)
 insert_data();
 else if(pilih==2)
 hapus_data();
 else if(pilih==3)
 cetak_data();
 else
 {
  cout<<"EXIT";
  cout<<"\nSampai Jumpa lagi"<<endl;
 }
}
void buat_baru()//fungsi membuat data baru
{
 baru = new(node);
 cout<<"Masukkan Nomor Buku : ";cin>>baru->nomor;
 cout<<"Masukkan Judul Buku : ";cin>>baru->jbuku;
 cout<<"Masukkan Nama Pengarang : ";cin>>baru->nama;
 cout<<"Masukkan Penerbit : ";cin>>baru->penerbit;
 cout<<"\n\t---Data telah dimasukkan---";
 cout<<"\n\nPRESS ENTER TO CONTINUE...";
 getch();
 baru->prev=NULL;
 baru->next=NULL;
}
void insert_data()
{
 buat_baru();
 if(head==NULL)
 {
  head=baru;
  tail=baru;
 }
 else
 {
  baru->next=head;
  head->prev=baru;
  head=baru;
 }
 cout<<endl<<endl;
}
void hapus_data()//fungsi penghapusan data
{
 int hapus,nomor;
 if(head==NULL)
 {
  cout<<"\nLinked List kosong, \nPenghapusan tidak dapat dilakukan"<<endl;//data yang habis maka tampilannya
 }
 else
 {
  hapus=head->nomor;
  cout<<"\nData yang dihapus (Masukkan nomor buku) : ";//pemilihan data yang akan dihapus
  cin>>nomor;
  del = head;
  head = head->next;
  delete del;
 }
}
void cetak_data()
{
 if (head==NULL)
 cout<<"\nData tidak dapat ditemukan!"<<endl;//data yang kosong
 else
 {
  help=head;
  while(help!=NULL)
  {
   cout<<" Nomor Buku : "<<help->nomor;//data akan muncul dengan tampilan
   cout<<" Judul Buku : "<<help->jbuku;
   cout<<" Nama Pengarang : "<<help->nama;
   cout<<" Penerbit : "<<help->penerbit<<endl;
   help=help->next;
  }
 }
getch();
}
