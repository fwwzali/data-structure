#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct mahasiswa{
		char npm[30];
		char nama[30];
		int semester;
		float ipk;
		int thn_lahir;
};
typedef struct mahasiswa mhs;

int umur(int thn_lahir);

int main(){
	    
    mhs maba;
    //strcpy(maba.npm,"105060800111030");
    maba.npm = "01924270";
    strcpy(maba.nama,"fawwaz ali akbar");
    maba.semester = 1;
    maba.ipk = 0.0;
    maba.thn_lahir = 1999;
    
    printf("\n\n-----STRUCT DATA --------\n\n");
    printf("NPM: %s\n",maba.npm);
    printf("Nama: %\n",maba.nama);
    printf("Semester: %d\n",maba.semester);
    printf("IPK: %f\n",maba.ipk);
    printf("Umur: %i\n",umur(maba.thn_lahir));
}

int umur(int thn_lahir)
{
	return 2018-thn_lahir;
}

