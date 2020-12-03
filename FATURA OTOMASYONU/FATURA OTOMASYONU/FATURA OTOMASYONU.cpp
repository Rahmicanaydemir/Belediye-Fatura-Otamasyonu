// FATURA OTOMASYONU.cpp : Defines the entry point for the console application.
//

// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int secim,secim1,secim2,secim3,secim4,secim5,secim6;
int ElektrikFaturaTutari,SuFaturaTutari,DogalgazFaturaTutari;
string AboneIsim,AboneNo,AboneNoKar,AboneNoKar1,AboneSoyisim,AboneIsim2;

void ElektrikFaturaGir ()
{
	cout<<"Abone Ismini Giriniz."<<endl;
	cin>>AboneIsim;
	cout<<"Abone Soyismini Giriniz."<<endl;
	cin>>AboneSoyisim;
	cout<<"Abone Nosunu Giriniz."<<endl;
	cin>>AboneNo;
	cout<<"Fatura Tutarini Giriniz."<<endl;
	cin>>ElektrikFaturaTutari;

	fstream dosya;
	dosya.open("elektrik.txt", ios::in|ios::app|ios::out);
	dosya<<AboneIsim<<"		"<<AboneSoyisim<<"		"<<AboneNo<<"		"<<ElektrikFaturaTutari<<endl;
	dosya.close();

}

void SuFaturaGir ()
{
	cout<<"Abone Ismini Giriniz."<<endl;
	cin>>AboneIsim;
	cout<<"Abone Soyismini Giriniz."<<endl;
	cin>>AboneSoyisim;
	cout<<"Abone Nosunu Giriniz."<<endl;
	cin>>AboneNo;
	cout<<"Fatura Tutarini Giriniz."<<endl;
	cin>>SuFaturaTutari;

	fstream dosya;
	dosya.open("su.txt", ios::in|ios::app|ios::out);
	dosya<<AboneIsim<<"		"<<AboneSoyisim<<"		"<<AboneNo<<"		"<<SuFaturaTutari<<endl;
	dosya.close();

}
void DogalgazFaturaGir ()
{
	cout<<"Abone Ismini Giriniz."<<endl;
	cin>>AboneIsim;
	cout<<"Abone Soyismini Giriniz."<<endl;
	cin>>AboneSoyisim;
	cout<<"Abone Nosunu Giriniz."<<endl;
	cin>>AboneNo;
	cout<<"Fatura Tutarini Giriniz."<<endl;
	cin>>DogalgazFaturaTutari;

	fstream dosya;
	dosya.open("dogalgaz.txt", ios::in|ios::app|ios::out);
	dosya<<AboneIsim<<"		"<<AboneSoyisim<<"		"<<AboneNo<<"		"<<DogalgazFaturaTutari<<endl;
	dosya.close();

}

void FaturaOde ()
{
    cout<<"Elektrik Faturasi Icin   1"<<endl; 
	cout<<"Su Faturasi Icin         2"<<endl; 
	cout<<"Dogalgaz Faturasi Icin   3"<<endl; 
	cout<<"Hangi Faturayi Odemek Istiyorsunuz.";
	cin>>secim1;

	if (secim1==1)
	{
		cout<<"abone no";
		cin>>AboneNoKar;
		if (AboneNoKar==AboneNo)
		{
			cout<<"Tutar.. "<<ElektrikFaturaTutari<<endl;
			cout<<"odemek icin 1"<<endl;
			cin>>secim2;
			if (secim2==1)
			{
				cout<<"fatura odendi"<<endl;
			}
		}
	}

	else if (secim1==2)
	{
		cout<<"abone no";
		cin>>AboneNoKar;
		if (AboneNoKar==AboneNo)
		{
			cout<<"Tutar..   "<<SuFaturaTutari<<endl;
			cout<<"odemek icin 2'yi seciniz"<<endl;
			cin>>secim2;
			if (secim2==2)
			{
				cout<<"Fatura Odendi"<<endl;
			}
		}

	}

	else if (secim1==3)
	{

		cout<<"abone no";
		cin>>AboneNoKar;
		if (AboneNoKar==AboneNo)
		{
			cout<<"Tutar.. "<<DogalgazFaturaTutari<<endl;
			cout<<"Odemek Icin 3'u seciniz"<<endl;
			cin>>secim2;
			if (secim2==3)
			{
				cout<<"Fatura Odendi"<<endl;
			}
		}

	}

}

void FaturaGoruntule ()
{
    cout<<"Elektrik Faturasi Icin   1"<<endl; 
	cout<<"Su Faturasi Icin         2"<<endl; 
	cout<<"Dogalgaz Faturasi Icin   3"<<endl; 
	cout<<"Hangi Faturayi Gormek Istiyorsunuz."<<endl;
	cin>>secim3;


if(secim3==1)
{   
	  cout<<"abone no:"; 	cin>>AboneNoKar;

	ifstream dosyaoku("elektrik.txt");

		while (!(dosyaoku.eof()))
		{
			dosyaoku>>AboneIsim>>AboneSoyisim>>AboneNo>>ElektrikFaturaTutari;
		if (AboneNoKar==AboneNo)
		{
			cout<<AboneIsim; cout<<" "; cout<<" Tutar :"<<ElektrikFaturaTutari<<endl;
		
			dosyaoku.close();
		break;
		}
	}	
}

else if(secim3==2)
{ 
	  cout<<"abone no:"; 	cin>>AboneNoKar;

	ifstream dosyaoku("su.txt");

		while (!(dosyaoku.eof()))
		{
			dosyaoku>>AboneIsim>>AboneSoyisim>>AboneNo>>SuFaturaTutari;
		if (AboneNoKar==AboneNo)
		{
			cout<<AboneIsim; cout<<" "; cout<<" Tutar :"<<SuFaturaTutari<<endl;
			dosyaoku.close();
		break;
		}
	}	
}

else if(secim3==3)
{
  cout<<"abone no:"; 	cin>>AboneNoKar;

	ifstream dosyaoku("dogalgaz.txt");

		while (!(dosyaoku.eof()))
		{
			dosyaoku>>AboneIsim>>AboneSoyisim>>AboneNo>>DogalgazFaturaTutari;
		if (AboneNoKar==AboneNo)
		{
			cout<<AboneIsim; cout<<" "; cout<<" Tutar :"<<DogalgazFaturaTutari<<endl;
			dosyaoku.close();
		break;
		}
	}	
}

 
}
void FaturaSilme()
{   int no;
	cout<<"Silmek Ýstediðiniz Faturanin Abone Numarasini Giriniz:";
	cin>>no;
	int AboneNo,AboneIsim;

fstream dosya;
dosya.open("fatura.txt",ios::out|ios::in|ios::app);
fstream dosyasil;
dosyasil.open("FaturaSil.txt",ios::out|ios::in|ios::app);

while(dosya>>AboneNo>>AboneIsim>>AboneSoyisim)
{

	if(AboneNo==no)
	{
	}
	else
	{
		dosyasil<<AboneNo<<" "<<AboneIsim<<" "<<endl;
	}
}
dosyasil.close();
dosya.close();
remove("fatura.txt");

rename("FaturaSil.txt","Fatura.txt");
}



int _tmain(int argc, _TCHAR* argv[])
{
	
	cout<<"                                          BELEDIYE FATURA OTOMASYONU"<<endl;



	 do
	 { 
    
    cout<<"Fatura Girmek Icin         1"<<endl;
	cout<<"Fatura Odemek Icin         2"<<endl;
	cout<<"Fatura Goruntulemek Icin   3"<<endl;
	cout<<"Fatura Silmek Icin         4"<<endl;
	cout<<"Yapmak Istediginiz Islem Nedir"<<endl;
	cin>>secim;

	 if(secim==1)
	 {
	cout<<"Elektrik Faturasi Icin   1"<<endl; 
	cout<<"Su Faturasi Icin         2"<<endl; 
	cout<<"Dogalgaz Faturasi Icin   3"<<endl; 
	cout<<"Hangi Faturayi Girmek Istiyorsunuz."<<endl;
	cin>>secim5;

	if (secim5==1)
	{
		ElektrikFaturaGir();
	}
	else if (secim5==2)
	{
		SuFaturaGir();
	}
	else if(secim5==3)
	{
		DogalgazFaturaGir();
	}
	 
	 }

	 else if(secim==2)
	 {
	 FaturaOde();
	 }

	 else if(secim==3)
	 {
	 FaturaGoruntule();
	 }
	 else if(secim==4)
	 {
	 FaturaSilme();
	 }

		 cout<<"Devam Etmek Icin 1'e basiniz:"<<endl;
		 cin>>secim4;
		 if (secim4==1)
		 {
			 continue;
		 }
		 else
		 {
			 break;
		 }
	 } while (1);  

	return 0;
}



