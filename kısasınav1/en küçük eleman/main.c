#include <stdio.h>
//Akif Silan 1220505044  dizinin icindeki en kucuk elemani bulma fonksiyonu
int enkucukdeger(int dizi[], int boyut) {
	int enkucukeleman = dizi[0]; //dizinin 1. elemanini kendim atadim null atamasin diye
    int a=0;  // tekrardan null deger atamasýn diye 0 koydum
    for (a = 1; a < boyut; a++) { // dizi icindeki elemanlarý birbiriyle kiyaslamasi icin dongu kurdum 1'den kac boyutluysa o boyuta kadar
        if (dizi[a] < enkucukeleman) {  //  bu 2 satirda sirayla dizinin elemanlarini kiyaslayacak        
		 enkucukeleman = dizi[a]; 
        }
    }
    return enkucukeleman; //bu fonksiyonun en kucuk elemanidir
}

int main() {
    int boyut; 
    printf("Akif Silan 1220505044");
    printf("\n\nDizinin boyutunu giriniz = "); //kullanicidan dizinin boyutunu sorup aliyoruz
    scanf("%d", &boyut); 
    printf("\n");
    int dizi[boyut]; //dizinin boyutunu tanimladim
    int a=0;
    for (a = 0; a < boyut; a++) {  //kullanicidan aldýgýmýz degeri donguye soktuk
        printf("Dizinin %d. elemanini giriniz = ",a+1);
		scanf("%d", &dizi[a]);
    }
    int enkucukeleman=0; 
    enkucukeleman = enkucukdeger(dizi, boyut);  //en kucuk elemani bulmak icin degiskenlere verdigim dizi ve boyut sayisini yazdim 
    printf("\nEn kucuk elemaniniz = %d", enkucukeleman); // ve en kucuk sayiyi bulup yazdirdim
    return 0;
}

