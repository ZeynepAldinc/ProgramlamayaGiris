/***************************************************************************
**                     SAKARYA �N�VERS�TES�
**            B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**                B�LG�SAYAR M�HEND�SL��� B�L�M�
**                  PROGRAMLAMAYA G�R�� DERS�
**
**              �DEV NUMARASI: 1
**              ��RENC� ADI: ZEYNEP ALD�N�
**              ��RENC� NUMARASI: B181210390
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
	// be� sat�r olu�turmak i�in olu�turulan for d�ng�s�
	for (int i = 5; i >= 0; i--)
	{
		//bir y�ld�z ve bir bo�luk yazd�rmas� i�in olu�turulan for d�ng�s�
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
			
		}
		// y�ld�zlar aras�nda kalan bo� alana bo�luklar b�rakmak i�in olu�turulan for d�ng�s�
		for (int a = 0; a <= 5-i; a++)
		{
				cout << "    ";
		}
		// bo� alandan sonra tekrar ba�layacak bir y�ld�z ve bir bo�lu�u yazd�rmas� i�in olu�turulan for d�ng�s�
		for (int j = 0; j < i; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
	// yukar�daki k�sm�n simetri�ini yazd�racak olan for d�ng�leri
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
		if ((int)metin[k] == 97 || (int)metin[k] == 65) // a ve A harflerinin ASCII kar��l���
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
	cout << endl << "�" << setw(7) << sayac_o;
	for (int i = 0; i < sayac_o; i++)
	{
		cout << setw(7) << "�";
	}
	cout << endl << "�" << setw(7) << sayacI;
	for (int i = 0; i < sayacI; i++)
	{
		cout << setw(7) << "�";
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
	cout << endl << "�" << setw(7) << sayac_u;
	for (int i = 0; i < sayac_u; i++)
	{
		cout << setw(7) << "�";
	}
	cout << endl << "u" << setw(7) << sayacU;
	for (int i = 0; i < sayacU; i++)
	{
		cout << setw(7) << "u";
	}

	cout << endl;
//while (true) KARAKTERLER�N ASCII KAR�ILI�INI BULMAK ���N
//{
//	char a;
//	cin >> a;
//	cout << (int)a << endl;
//}
	
	
	
	
	system("pause");
	return 0;
}