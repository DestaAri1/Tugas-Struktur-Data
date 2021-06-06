/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
void inisialisasi(), tampil(), StraightInsertSort(), BinaryInsertSort(), SelectionSort(), Tukar();
void main()
{
    puts("Straight Insert Sort : \n");
    inisialisasi();
    StraightInsertSort();
    puts("Binary Insert Sort : \n");
    inisialisasi();
    BinaryInsertSort();
    puts("Selection Sort : \n");
    inisialisasi();
    SelectionSort();
    }

void StraightInsertSort()
{      int i, j, k, x;
int geser=0, banding=0;
for(i=1; i<MAX; i++)
    {
        x = Data[i];
    j = i-1;
    banding++;
    while (x < Data[j])
        {
            Data[j+1] = Data[j];
    j--;
    geser++;
    banding++;
    }
    Data[j+1] = x;
    }
    tampil(banding,geser);
    }

    void BinaryInsertSort()
    {  int i, j, l, r, m, x;
    int geser=0, banding=0;
    for (i=1; i<MAX; i++)
        {
            x = Data[i];
    l = 0;
    r = i - 1;
    while(l <= r)
        {
            m = (l + r) / 2;
    banding++;
    if(x < Data[m])
        {
            r = m - 1;
    }
    else
        l = m + 1;
    }
     for(j=i-1; j>=l; j--)
        {
            Data[j+1] = Data[j];
     geser++;
     }
     Data[l]=x;
     }
     tampil(banding, geser);
     }

void Tukar (int *a, int *b)
{
    int temp;
      temp = *a;
      *a = *b;
      *b = temp;
      }

void SelectionSort()
{  int i, j, k, banding=0, geser=0;
for(i=0; i<MAX-1;i++)
    {
          k = i;
for (j=i+1; j<MAX; j++)
    {
        if(Data[k] > Data[j])
        k = j;
        banding++;
        }
        if(i!=k)
            {
                Tukar(&Data[i], &Data[k]);
        geser++;
        }
        }
        tampil(banding, geser);
        }

void inisialisasi()
{
    srand(0);
    printf("DATA SEBELUM TERURUT\n");
    for(int i=0; i<MAX; i++)
        {
            Data[i] = (int) rand()/1000+1;
    printf("Data ke %d : %d \n", i, Data[i]);
    }
    }

void tampil(int x,int y)
{     printf("\nDATA SETELAH TERURUT\n");
for(int i=0; i<MAX; i++)
    printf("Data ke %d : %d \n", i, Data[i]);
printf("\n");
printf("Perbandingan : %d\n", x);
printf("Pergeseran   : %d\n\n", y);
}
