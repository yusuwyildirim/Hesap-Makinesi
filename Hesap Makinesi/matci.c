#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void girisPanel();                            //============================GIRIS PANEL============================
void usPanel();                              //============================US HESAPLAMA============================
void hataPanel();                           //============================HATA PANEL===============================
void islemPanel();                         //============================ISLEM PANEL===============================
void toplamaPanel();                      //============================TOPLAMA PANEL==============================
void cikarmaPanel();                     //============================CIKARMA PANEL===============================
void carpmaPanel();                     //============================CARRPMA PANEL================================
void bolmePanel();                     //============================BOLME PANEL===================================
void faktoriyelPanel();               //============================FAKTORIYEL PANEL===============================
void fibonacciPanel();               //============================FIBONACCI PANEL=================================
void cikisPanel();                  //============================CIKIS PANEL======================================




int main() {
	
	girisPanel();
	
	
	islemPanel();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch(0);
	
	return 0;
}




void girisPanel(){
	
	printf("**************HESAP MAKINESI**************");
	printf("\n\n\n");
	
	
}



void hataPanel(){
	
	printf("HATA!\n\n");
	printf("Hatali deger girdiniz!\n");
	
	
}



void usPanel(){                              
	
	int ussonuc;
	int sayi;
	int us;
	int i;
	
	ussonuc=1;
	
	printf("************************US HESAPLAMA************************");
	printf("\n\n\n\n");
	
	printf("Lutfen ussunu almak istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	printf("Lutfen ussu giriniz:\n");
	scanf("%d",&us);
	
	if(us==0){
		ussonuc=1;
		printf("SONUC= %d\n\n",ussonuc);
		
	}
	else{
		
	
	if(us==1){
		ussonuc=sayi;
		printf("SONUC= %d\n\n",ussonuc);
	}
	
	else{
		
		
	
	for(i=0;i<us;i++){
		
		ussonuc=ussonuc*sayi;

		
	}
	
	printf("SONUC= %d\n\n",ussonuc);
	
	
}

}



}



void toplamaPanel(){
	
	
	int toplamsayi[100];
	bool kontrol;
	kontrol=true;
	char secenek;
	int toplam;
	int i;
	
	toplam=0;
			
		while(kontrol==true){

	toplama:
	printf("Lutfen toplamak istediginiz sayilari giriniz:\n");
	printf("%d. sayi --> \t",i+1);
	scanf("%d",&toplamsayi[i]);
	
	toplam=toplam+toplamsayi[i];
	soru:
	printf("Baska bir sayi girecek misiniz?\n\n E/H\n");
	scanf("%s",&secenek);
	i++;
	
if(secenek=='e' || secenek=='E'){
	
	goto toplama;
	
}
	
	else if(secenek=='h' || secenek=='H'){
	
		printf("SONUC= %d\n\n",toplam);
		break;
		
	}
	
	else{
		hataPanel();
	}
	
	
}
	
	

}
	


void cikarmaPanel(){
	
int sayi1;
int sayi2;
int sonuccikar;


printf("Lutfen cikarmak istediginiz sayilari giriniz:\n");
printf("1.sayi -->\t");
scanf("%d",&sayi1);
printf("2.sayi -->\t");
scanf("%d",&sayi2);

sonuccikar=sayi1-sayi2;

printf("SONUC= %d\n\n",sonuccikar);
	
	

		
}



void carpmaPanel(){
	
	
	int carpmasayi[100];
	bool kontrol;
	kontrol=true;
	char secenek;
	int carpim;
	int i;
	
	carpim=1;
	
			
		while(kontrol==true){

	carpma:
	printf("Lutfen carpmak istediginiz sayilari giriniz:\n");
	printf("%d. sayi --> \t",i+1);
	scanf("%d",&carpmasayi[i]);
	
	carpim=carpim*carpmasayi[i];
	soru:
	printf("Baska bir sayi girecek misiniz?\n\n E/H\n");
	scanf("%s",&secenek);
	
 
if(secenek=='e' || secenek=='E'){
	
	goto carpma;
	
}
	
	else if(secenek=='h' || secenek=='H'){
		
		printf("SONUC= %d\n\n",carpim);
	    kontrol=false;
	    
	}
	
	else{
		hataPanel();
	}
}
	
	

		
}



void bolmePanel(){
	

float sayi1;
float sayi2;
float sonucbol;


printf("Lutfen bolmek istediginiz sayilari giriniz:\n");
printf("1.sayi -->\t");
scanf("%f",&sayi1);
printf("2.sayi -->\t");
scanf("%f",&sayi2);

sonucbol=sayi1/sayi2;

printf("SONUC= %f\n\n",sonucbol);
	
}



void faktoriyelPanel(){
	
int faktoriyel = 1; 
    int sayi;
    int i;
    
    printf("Lutfen hesaplanmasini istediginiz faktoriyeli giriniz:\n");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++)
    {
        faktoriyel*=i;                                      
    }
    printf("SONUC= %d\n\n",faktoriyel);
		
	}
	
	
	
void fibonacciPanel(){
int i, n, t1 = 0, t2 = 1, nextTerm;
int basamak;
int s1;
int s2;
int sterim;

s1=0;
s2=1;


    printf("Kac basamak gormek istiyorsunuz?\n");
    scanf("%d", &basamak);

    printf("Fibonacci Dizisi --> ");

    for (i=1;i<=basamak;++i)
    {
        printf("%d, ", s1);
        sterim=s1+s2;
        s1=s2;
        s2=sterim;
    }
	printf("\n\n");
}
	
	
	
void cikisPanel(){
	
	exit(0);
	
}



void islemPanel(){
	
	int islem;
	
	islemp:
	
	printf("Lutfen yapmak istediginiz islemi seciniz:\n");
	printf("[1]TOPLAMA\n[2]CIKARMA\n[3]CARPMA\n[4]BOLME\n[5]US HESAPLAMA\n[6]FAKTORIYEL HESAPLAMA\n[7]FIBONACCI\n[99]CIKIS\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			toplamaPanel();
			goto islemp;
			
		case 2:
		    cikarmaPanel();
		    goto islemp;
		
		case 3:
			carpmaPanel();
			goto islemp;
			
		case 4:
			bolmePanel();
			goto islemp;
			
		case 5:
			usPanel();
			goto islemp;
			
		case 6:
			faktoriyelPanel();
			goto islemp;
			
		case 7:
			fibonacciPanel();
			goto islemp;
			
		case 99:
			cikisPanel();
			
		default:
			hataPanel();
			goto islemp;
			
			
	}
	
	
	
	
}



void creative(){
	
	//@yusuwyildirim
	
}






















