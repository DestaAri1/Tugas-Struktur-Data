/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 99

struct data
{
    int nip;
    char nama[50];
    char alamat[50];
    char golongan;
    }
    employee[MAX];
int count=0;
void menu(),input(), StraightInsertSort(int, int), BinaryInsertSort(int, int), SelectionSort(int, int), tukar(int, int), tampil();
int menu2(), menu3(); int main()
{
    menu();
    return 0;
    }

void StraightInsertSort(int urutan1, int urutan2)
{
    int i,j;
    struct data temp;
    if(urutan2==1)
        {
            if(urutan1==1)
            {
                for(i=1;i<count;i++)
                {
                    temp=employee[i];
                    j=i-1;
                    while(temp.nip < employee[j].nip && j>=0)
                    {
                        employee[j+1]=employee[j];
                        j--;
                        }
                        employee[j+1]=temp;
                        }
                        }
                        else{
                                for(i=1;i<count;i++)
                                {
                                    temp=employee[i];
                                    j=i-1;
                                    while(temp.nip > employee[j].nip && j>=0)
                                        {
                                            employee[j+1]=employee[j];
                                            j--;
                                        }
                                        employee[j+1]=temp;
                                        }
                                        }
                                        }
                                        else{
                                            if(urutan1==1
                                               )
                                               {
                                                   for(i=1;i<count;i++)
                                                   {
                                                       temp=employee[i];
                                                        j=i-1;
                                                        while(temp.nama[0] < employee[j].nama[0] && j>=0)
                                                            {
                                                                employee[j+1]=employee[j];
                                                                j--;
                                                                }
                                                                employee[j+1]=temp;
                                                                }
                                                                }
                                                                else{
                                                                        for(i=1;i<count;i++)
                                                                        {
                                                                            temp=employee[i];
                                                                            j=i-1;
                                                                            while(temp.nama[0] > employee[j].nama[0] && j>=0){                    employee[j+1]=employee[j];
                                                                            j--;
                                                                            }
                                                                            employee[j+1]=temp;
                                                                            }
                                                                            }
                                                                            }
                                                                            }

void BinaryInsertSort(int urutan1, int urutan2){     int i,l,r,m,j;
struct data temp;
if(urutan2==1)
    {
        if(urutan1==1)
        {
            for(i=1;i<count;i++)
            {
                temp=employee[i];
                l=0;
                r=i-1;
                while(l<=r)
                    {
                        m=(l+r)/2;
                if(temp.nip < employee[m].nip)
                    r=m-1;
                else
                    l=m+1;
                }
                for(j=i-1;j>=l;j--)
                    employee[j+1]=employee[j];
                employee[l]=temp;
                }
                }
                else{
                        for(i=1;i<count;i++)
                        {
                            temp=employee[i];
                            l=0;
                            r=i-1;
                            while(l<=r)
                                {
                                    m=(l+r)/2;
                            if(temp.nip > employee[m].nip)
                                r=m-1;
                            else
                                l=m+1;
                            }
                            for(j=i-1;j>=l;j--)
                                employee[j+1]=employee[j];
                            employee[l]=temp;
                            }
                            }
                            }
                            else{
                                    if(urutan1==1)
                                    {
                                        for(i=1;i<count;i++)
                                        {
                                            temp=employee[i];
                            l=0;                 r=i-1;
                            while(l<=r)
                                {
                                    m=(l+r)/2;
                            if(temp.nama[0] < employee[m].nama[0])
                            r=m-1;
                            else
                                l=m+1;
                            }
                            for(j=i-1;j>=l;j--)
                                employee[j+1]=employee[j];
                            employee[l]=temp;
                            }
                            }
                            else{
                                    for(i=1;i<count;i++)
                                    {
                                        temp=employee[i];
                            l=0;
                            r=i-1;
                            while(l<=r){
                                    m=(l+r)/2;
                            if(temp.nama[0] > employee[m].nama[0])
                                r=m-1;
                            else
                            l=m+1;
                            }
                            for(j=i-1;j>=l;j--)
                                employee[j+1]=employee[j];
                            employee[l]=temp;
                            }
                            }
                            }
                            }

void tukar(int i, int k)
{
    struct data temp;
    temp=employee[i];
    employee[i]=employee[k];
    employee[k]=temp;
    }

void SelectionSort(int urutan1, int urutan2)
{
    int i,j,k;
    if(urutan2==1)
        {
            if(urutan1==1)
            {
                for(i=0;i<count-1;i++)
                {
                    k=i;
    for(j=i+1;j<count;j++)
        {
            if(employee[j].nip < employee[k].nip )
            k=j;
        }
        if(k!=i)
            tukar(i, k);
        }
        }
        else{
                for(i=0;i<count-1;i++)
                {
                    k=i;
        for(j=i+1;j<count;j++)
            {
                if(employee[j].nip > employee[k].nip)
                k=j;
        }
        if(k!=i)
            tukar(i, k);
        }
        }
        }
        else{
                if(urutan1==1)
                {
                    for(i=0;i<count-1;i++)
                    {
                        k=i;
        for(j=i+1;j<count;j++)
            {
                if(employee[j].nama[0] < employee[k].nama[0])
                k=j;
                }
                if(k!=i)
                    tukar(i, k);
                }
                }
                else{
                        for(i=0;i<count-1;i++)
                        {
                            k=i;
                for(j=i+1;j<count;j++)
                    {
                        if(employee[j].nama[0] > employee[k].nama[0])
                        k=j;
                        }
                        if(k!=i)
                            tukar(i, k);
                          }
                          }
                          }
                          }

void menu()
{
    int pil, urutan1, urutan2;
    do{
            puts("1. Input data");
    puts("2. Straight Insertion Sort");
    puts("3. Binary Insertion Sort");
    puts("4. Selection Sort");
    puts("5. tampil");
    puts("6. Exit");
    printf("Pilihan : ");
    scanf("%d", &pil);
    if(pil==1)
        input();
    else if(pil==2)
        {
            urutan1=menu2();
            urutan2=menu3();
            StraightInsertSort(urutan1, urutan2);
            }
            else if(pil==3)
                {
                    urutan1=menu2();
            urutan2=menu3();
            BinaryInsertSort(urutan1, urutan2);
            }
            else if(pil==4)
                {
                    urutan1=menu2();
            urutan2=menu3();
            SelectionSort(urutan1, urutan2);
            }
            else if(pil==5)
                tampil();
            }while(pil!=6);
            }
int menu2()
{
    int pil;
    puts("Pengurutan : ");
    puts("1. Pengurutan naik");
    puts("2. Pengurutan turun");
    printf("Pilihan : ");
    scanf("%d", &pil);
    return pil;
    }

int menu3()
{
    int pil;
    puts("Pengurutan : ");
    puts("1. Pengurutan berdasarkan NIP");
    puts("2. Pengurutan berdasarkan nama");
    printf("Pilihan : ");     scanf("%d", &pil);
     return pil;
     }

void input()
{
    printf("NIP, bertipe bulat : ");     scanf("%d", &employee[count].nip);
    fflush(stdin);
    printf("Nama, bertipe string : ");
    fgets(employee[count].nama, sizeof employee[count].nama, stdin);
    printf("Alamat, bertipe string : ");
    fgets(employee[count].alamat, sizeof employee[count].alamat, stdin);
    printf("Golongan, bertipe char : ");     scanf("%c", &employee[count].golongan);
    fflush(stdin);
    count++; }

void tampil()
{
    printf("\n");
    for(int i=0; i<count; i++)
        {
            printf("NIP\t: %d\n", employee[i].nip);
    printf("Nama\t: %s", employee[i].nama);
    printf("Alamat\t: %s", employee[i].alamat);
    printf("Golongan\t: %c\n", employee[i].golongan);
    }
    printf("\n");
    }
