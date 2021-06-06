/* Desta Ari Alfananda*/
/* 20051397008 */
/* Manajemen Informatika*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int pilih;
void pilihan();
void insert_data();
void hapus_data();
void cetak_data();
struct node
{
 int nplat;
 char mrk [40];
 char nama [40];
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
 cout<<"Masukkan Nomor Plat (masukkan hanya angka saja) : ";cin>>baru->nplat;
 cout<<"Masukkan Merk Mobil : ";cin>>baru->mrk;
 cout<<"Masukkan Nama Pemilik : ";cin>>baru->nama;
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
 int hapus,nplat;
 if(head==NULL)
 {
  cout<<"\nLinked List kosong, \nPenghapusan tidak dapat dilakukan"<<endl;//data yang habis maka tampilannya
 }
 else
 {
  hapus=head->nplat;
  cout<<"\nData yang dihapus (Masukkan Nomor Plat) : ";//pemilihan data yang akan dihapus
  cin>>nplat;
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
   cout<<" Nomor Plat : "<<help->nplat;//data akan muncul dengan tampilan
   cout<<" Merk Mobil : "<<help->mrk;
   cout<<" Nama Pemilik : "<<help->nama<<endl;
   help=help->next;
  }
 }
getch();
}
