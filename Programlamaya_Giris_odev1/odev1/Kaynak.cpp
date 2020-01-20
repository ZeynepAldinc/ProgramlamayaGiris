/***************************************************************************
**                     SAKARYA ÜNÝVERSÝTESÝ
**            BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**                BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**                  PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**              ÖDEV NUMARASI: 1
**              ÖÐRENCÝ ADI: ZEYNEP ALDÝNÇ
**              ÖÐRENCÝ NUMARASI: B181210390
**              DERS GRUBU: C
****************************************************************************/
#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	// beþ satýr oluþturmak için oluþturulan for döngüsü
	for (int i = 5; i >= 0; i--)
	{
		//bir yýldýz ve bir boþluk yazdýrmasý için oluþturulan for döngüsü
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
			
		}
		// yýldýzlar arasýnda kalan boþ alana boþluklar býrakmak için oluþturulan for döngüsü
		for (int a = 0; a <= 5-i; a++)
		{
				cout << "    ";
		}
		// boþ alandan sonra tekrar baþlayacak bir yýldýz ve bir boþluðu yazdýrmasý için oluþturulan for döngüsü
		for (int j = 0; j < i; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
	// yukarýdaki kýsmýn simetriðini yazdýracak olan for döngüleri
	for (int i = 5; i >= 0; i--)
	{
		for (int j = 5; j > i; j--)
		{
			cout << "* ";
		}
		for (int b = 5; b >= 5-i ; b--)
		{
			cout << "    ";
		}
		for (int j = 5; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	string metin;
	int sayacA = 0;
	int sayacE = 0;
	int sayacI = 0;
	int sayac_i = 0;
	int sayacO = 0;
	int sayacU = 0;
	int sayac_u = 0;
	int sayac_o = 0;
	int en_buyuk = 0;
	cout << "Metin Giriniz:";
	getline(cin, metin);
	
	for (int k = 0; k < metin.length(); k++)
	{
		if ((int)metin[k] == 97 || (int)metin[k] == 65) // a ve A harflerinin ASCII karþýlýðý
		{
			sayacA++;
			if (en_buyuk <= sayacA)
			{
				en_buyuk = sayacA;
			}
		}
		else if ((int)metin[k] == 101 || (int)metin[k] == 69)
		{
			sayacE++;
			if (en_buyuk <= sayacE)
			{
				en_buyuk = sayacE;
			}
		}
		else if ((int)metin[k] == -103 || (int)metin[k] == -108)
		{
			sayac_o++;
			if (en_buyuk <= sayac_o)
			{
				en_buyuk = sayac_o;
			}
		}
		else if ((int)metin[k] == -115 || (int)metin[k] == 73)
		{
			sayacI++;
			if (en_buyuk <= sayacI)
			{
				en_buyuk = sayacI;
			}
		}
		else if ((int)metin[k] == 111 || (int)metin[k] == 79)
		{
			sayacO++;
			if (en_buyuk <= sayacO)
			{
				en_buyuk = sayacO;
			}

		}
		else if ((int)metin[k] == 117 || (int)metin[k] == 85)
		{
			sayacU++;
			if (en_buyuk <= sayacU)
			{
				en_buyuk = sayacU;
			}
		}
		else if ((int)metin[k] == -127 || (int)metin[k] == -102)
		{
			sayac_u++;
			if (en_buyuk <= sayac_u)
			{
				en_buyuk = sayac_u;
			}
		}
		else if ((int)metin[k] == 105 || (int)metin[k] == -104)
		{
			sayac_i++;
			if (en_buyuk <= sayac_i)
			{
				en_buyuk = sayac_i;
			}
		}
	}

	cout << "HARF" << setw(4) << "TS";
	for (int i = 1; i <= en_buyuk; i++)
	{
		cout << setw(7) << i ;
	}
	cout << endl << "a" << setw(7) << sayacA;
	for (int i = 0; i < sayacA; i++)
	{
		cout << setw(7) << "a";
	}
	cout << endl << "e" << setw(7) << sayacE;
	for (int i = 0; i < sayacE; i++)
	{
		cout << setw(7) << "e";
	}
	cout << endl << "ö" << setw(7) << sayac_o;
	for (int i = 0; i < sayac_o; i++)
	{
		cout << setw(7) << "ö";
	}
	cout << endl << "ý" << setw(7) << sayacI;
	for (int i = 0; i < sayacI; i++)
	{
		cout << setw(7) << "ý";
	}
	cout << endl << "i" << setw(7) << sayac_i;
	for (int i = 0; i < sayac_i; i++)
	{
		cout << setw(7) << "i";
	}
	cout << endl << "o" << setw(7) << sayacO;
	for (int i = 0; i < sayacO; i++)
	{
		cout << setw(7) << "o";
	}
	cout << endl << "ü" << setw(7) << sayac_u;
	for (int i = 0; i < sayac_u; i++)
	{
		cout << setw(7) << "ü";
	}
	cout << endl << "u" << setw(7) << sayacU;
	for (int i = 0; i < sayacU; i++)
	{
		cout << setw(7) << "u";
	}

	cout << endl;
//while (true) KARAKTERLERÝN ASCII KARÞILIÐINI BULMAK ÝÇÝN
//{
//	char a;
//	cin >> a;
//	cout << (int)a << endl;
//}
	
	
	
	
	system("pause");
	return 0;
}