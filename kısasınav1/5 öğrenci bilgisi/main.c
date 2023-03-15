#include <stdio.h>
#include <stdlib.h>
//Akif Silan 1220505044  ogrencilerin kisisel bilgilerini gösteren kod

struct ogrenci {
   char isim[30];
   char soyisim[30];
   int no;
   int yas; 
   char memleket[30];
};

int main() {
	//ogrencilerin isim soyisim numara adres ve yasini yazdiriyoruz
	
	printf("Akif Silan 1220505044\n\n\n");
	
	struct ogrenci Akif ={"Akif","Silan",1220505044,19,"Rize"};
	printf("Ad : %s\nSoyad : %s\nNumara : %d\nYas : %d\nMemleket : %s\n",Akif.isim, Akif.soyisim, Akif.no, Akif.yas, Akif.memleket);
	printf("\n");
	
	struct ogrenci Kadir = {"Kadir","Kilic",1220505050,20,"Mardin"};
	printf("Ad : %s\nSoyad : %s\nNumara : %d\nYas : %d\nMemleket : %s\n",Kadir.isim, Kadir.soyisim, Kadir.no, Kadir.yas, Kadir.memleket);
	printf("\n");
	
	struct ogrenci Emirhan = {"Emirhan","Keskin",1220505021,20,"Trabzon"};
	printf("Ad : %s\nSoyad : %s\nNumara : %d\nYas : %d\nMemleket : %s\n",Emirhan.isim, Emirhan.soyisim, Emirhan.no, Emirhan.yas, Emirhan.memleket);
	printf("\n");
	
	struct ogrenci Yusuf = {"Yusuf","Ugras",1220505023,19,"Adana"};
	printf("Ad : %s\nSoyad : %s\nNumara : %d\nYas : %d\nMemleket : %s\n",Yusuf.isim, Yusuf.soyisim, Yusuf.no, Yusuf.yas, Yusuf.memleket);
	printf("\n");
	
	struct ogrenci Omer = {"Omer","Kargali",1220505069,20,"Ankara"};
	printf("Ad : %s\nSoyad : %s\nNumara : %d\nYas : %d\nMemleket : %s\n",Omer.isim, Omer.soyisim, Omer.no, Omer.yas, Omer.memleket);
	
	
	return 0;
}

