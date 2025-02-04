#include <iostream>
using namespace std;
int main()
{
	int bakiye = 500;
	int islem;
	string isim = "Faruk Balaban";
	int id = 4789362819;
	cout << "Hosgeldiniz " << isim << endl;
	cout << "musteri id'niz " << id << endl;
	cout << "islem belirtiniz " << endl;
	cout << "1- Bakiyeyi goruntule" << endl;
	cout << "2- Para cek" << endl;
	cout << "3- Para yatır " << endl;
	cout << "4- Cıkıs" << endl;
	switch (islem)
	{
	case 1:
		cout << "Bakiyeniz = " << bakiye;
		break;
	case 2:
		cout << "Cekilecek Miktarı Belirtiniz" << endl;
		int miktar;
		cin >> miktar;
		if (miktar > bakiye)
			cout << "Bakiyeniz yetersiz";
		else {
			if (miktar % 5 != 0)
				cout << "Sadece 5 ve katlarını cekebilirsiniz";
			else {
				bakiye = bakiye - miktar;
				cout << "Paraninizi basariyla cektiniz. Yeni bakiyeniz = " << bakiye;
			}
		}
		break;
	case 3:
		int yatiralacakmiktar;
		cout << "yatiralacak miktari yaziniz" << endl;
		cin >> yatiralacakmiktar;
		bakiye = bakiye + yatiralacakmiktar;
		cout << "Paranizi bsariyla yatirdiniz. yeni bakiye = " << bakiye;
		break;
	case 4:
		cout << "Cikis yapiliyor...";
		break;
	default:
		cout << "Boyle bir islem yok";
		break;
	}
}
