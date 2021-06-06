/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
using namespace std;

int Data[MAX];
void inisialisasi(), tampil(), StraightInsertSort(), BinaryInsertSort(), SelectionSort(), Tukar();
 void main()
 {
    puts("Straight Insert Sort : \n");
         inisialisasi();
         StraightInsertSort();
         tampil();
         puts("Binary Insert Sort : \n");
         inisialisasi();
         BinaryInsertSort();
         tampil();
         puts("Selection Sort : \n");
         inisialisasi();
         SelectionSort();
         tampil();
}

void StraightInsertSort()
 {
    int i, j, x;
          for(i=1; i<MAX; i++)
            {
                x = Data[i];
          j = i - 1;
                while (x < Data[j])
                    {
                        printf("%d Bergeser ke atas, %d kebawah\n", x, Data[j]);
                Data[j+1] = Data[j];
                          j--;
                          }
                            Data[j+1] = x;
                            }
                             }
                             void BinaryInsertSort()
                             {
                                 int i, j, l, r, m, x;
                                 for (i=1; i<MAX; i++)
                                    {
                                        x = Data[i];
                                 l = 0;
                                 r = i - 1;
                                 while(l <= r)
                                    {
                                        m = (l + r) / 2;
                                 if(x < Data[m])
                                    r = m - 1;
                                 else l = m + 1;
                                 }
                                       for(j=i-1; j>=l; j--)
                                        {
                                            printf("%d Bergeser ke atas, %d kebawah\n", x, Data[j]);
                                       Data[j+1] = Data[j];
                                        }
                                            Data[l]=x;
                                            }
                                            }
void Tukar (int *a, int *b)
{  printf("%d Tukar dengan %d\n", *a, *b);
  int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    }
void SelectionSort()
{
    int i, j, k;
    for(i=0; i<MAX-1;i++)
        {
            k = i;
    for (j=i+1; j<MAX; j++)
        {
            if(Data[k] > Data[j])
            k = j;
    }
    if(i!=k)
        Tukar(&Data[i], &Data[k]);
    }
    }

void inisialisasi()
{
    srand(0);
    printf("DATA SEBELUM TERURUT\n");
    or(int i=0; i<MAX; i++)
    {
         Data[i] = (int) rand()/1000+1;
         printf("Data ke %d : %d \n", i, Data[i]);
         }
         }

void tampil()
{     printf("\nDATA SETELAH TERURUT\n");
for(int i=0; i<MAX; i++)
    printf("Data ke %d : %d \n", i, Data[i]);
printf("\n");
}
