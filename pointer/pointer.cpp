#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int a = 10;
	int *b;
	//error karena beda, yang satu pointer yang stu bukan
	//b=a;
	
	//ini baru benar karena pointer harus diisi dengan alamat
	//jadi '&' adalah kita mengambil alamat dari variable nya
	b=&a;
	
	printf("b = %x\n",b); //jika variable saja, yang dikembaikan adalah alamat
	printf("b* = %d\n",*b);	//jika dengan * maka yang dikembalikan adalah nilai dari alamat
	
	//kalau kita menggunakan *, maka secara otomatis yang akan disimpan adalah alamat dari vareiable lain
	*b=a;
	
	printf("b = %x\n",b); //jika variable saja, yang dikembaikan adalah alamat
	printf("b* = %d",*b);	//jika dengan * maka yang dikembalikan adalah nilai dari alamat   
}

