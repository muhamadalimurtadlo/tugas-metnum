#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
 int pilih,i,x,y,hasil;

printf(" NAMA : MUHAMAD ALI MURTADLO \n");
printf(" NIM : 3411151053\n");
printf("------------ MENU -----------\n"); 
printf("\t 1.Penjumlahan \n ");
printf("\t 2.Pengurangan \n");
printf("\t 3.Perkalian \n");
printf("\t 4.Pembagian \n");
printf("\t 5.Fungsi \n");
printf("PILIH : ");
scanf("%d",&pilih);

system("cls");
if (pilih = 1){
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x+y;
	printf("%d + %d = %d", x,y,hasil);
	getch();
	
}
system("cls");
if (pilih = 2){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x-y;
	printf("%d - %d = %d", x,y,hasil);
	getch();

}

system("cls");
if (pilih = 3){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x*y;
	printf("%d * %d = %d", x,y,hasil);
	getch();
	
}

system("cls");
if (pilih = 4){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	hasil = x/y;
	printf("%d / %d = %d", x,y,hasil);
	getch();
	
}
system("cls");
if (pilih = 5){
	system("cls");
	printf("masukan nilai x : "),scanf("%d", &x);
	printf("masukan nilai y : "),scanf("%d", &y);
	for (i=x; i<=y; i++){
	hasil=(2*i*2)-((3*i)+1);
	printf("hasil : %d\n", hasil);
	getch();
}
}
return 0;
}
