
#include <iostream>
using namespace std;

void siralama(int* dizi, int adet)
{
	for (int i = 0; i < adet; i++)
	{
		for (int j = i + 1; j < adet; j++)
		{
			if(dizi[i] > dizi[j]) // iki döngüye ihtiyaç duydum.. ilk döngü referansı alır, ikinci döngü referans ile karşılaştırılacak elemanı.
			{
				int gecici = dizi[i]; //yer değiştirmeler burada yapılıyor.
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
			//else
			//{
			//	continue;
			//} // bu kısmı sildim çünkü gereksiz olduğunu düşündüm.. else olmasa bile zaten döngü diğer adıma geçecektir continue olmasa bile..
		}
	}
	for (int a = 0; a < adet; a++)
	{
		cout << dizi[a] << " ";
	}

}








int main()
{

	int dizi[] = { 2, 6, 3, 4, 9, 23, 1 }; //şimdilik sıradan bir dizi..
	siralama(dizi, 7);

}

