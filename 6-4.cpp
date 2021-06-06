/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void balik(char [],char [], int, int);
 int main()
  {
          char str[99],
           temp[99];
               int x=0;
                   printf("Input string : ");
                    fgets(str, sizeof str, stdin);
                        int i=strlen(str)-2;
                            strcpy(temp,str);
                                balik(str,temp,i,x);
                                    printf("Kebalikannya adalah : %s", str);
                                     }

void balik(char str[],char temp[], int i, int x)
{
        if(i<0)
            {
                        return;
        }
            str[x]=temp[i];
                balik(str,temp, i-1, x+1);
                 }
