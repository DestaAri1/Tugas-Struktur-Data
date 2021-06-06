/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX 10

int value[MAX];

void main()
{
int choose; do{
choose = menu(); pilihan_menu(choose);
}while(choose!=5);
}


int menu()
{
int choose_menu; puts("");
puts("Menu Pilihan");
puts("1. Random Number");
puts("2. Bubble Sort");
puts("3. Shell Sort");
puts("4. Tampilkan Hasil");
puts("5. Keluar");
printf("Pilih salah satu : ");
scanf("%d", &choose_menu); puts("");
return choose_menu;
}

void pilihan_menu(int pil_menu)
{
if(pil_menu==1){ random_value();
}
else if(pil_menu==2){ Bubble();
}
else if(pil_menu==3){ Shell();
}
else if(pil_menu==4){ tampil();
}
}

void random_value()
{
int i; srand(time(0));
for(i=0; i<MAX; i++){
value[i] = (rand()%100)+1;
}
}
void tampil()
{

int i;
for(i=0; i<10; i++){ printf("%d ", value[i]);
}
puts("");

}


void Tukar(int *a, int *b)
{
int temp; temp=*a;
*a=*b;
*b=temp;
}


void Bubble()
{
int i, j; puts("");
for(i=0; i<MAX-1; i++) for(j=MAX-1; j>=i; j--){
if(value[j-1]>value[j])
Tukar(&value[j-1], &value[j]); tampil();
}
}
void Shell()
{
int jarak, i, j;
bool sudah; jarak = MAX; while(jarak>1){
jarak = jarak/2; sudah = false; while(!sudah){
sudah = true;
for(j=0; j<MAX-jarak; j++){ i = j+ jarak;
if(value[j]>value[i]){ Tukar(&value[j], &value[i]);
sudah = false;
}
}
}
