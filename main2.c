#include <stdio.h>
#include <conio.h>

int main()
{
  int enb, enk, i, n, fark;/* 1.satýrýn  sabit zamanlý 1 deðeri*/
  printf("Dizinin Eleman Sayisini Giriniz :");
  scanf("%d", &n);
  int dizi[n];/*2.satýrýn degeride sabit 1 deðeri*/
  for (i = 0; i < n; i++)/*3.i=0 1deðeri i<n n durum i++ n durum 2n+1 durum*/
  {
    printf("%d. elememani giriniz : ", i+1);
    scanf("%d", &dizi[i]);
  }
  enk = dizi[0];
  enb = dizi[0];/*4. 5. satýrlar 1 er durum toplam 2 durum*/
  for (i = 1; i < n; i++)/*6.satýr 1 durum n durum n durum gelir 2n+1*/
  {
    if (dizi[i] < enk)/*7.n*(n+1)  */
      enk = dizi[i];/*8*n^2 durum*/
    else if (dizi[i] > enb)/*n*(n+1 )durum*/
      enb = dizi[i];/*n^2 durum*/
      /*T(n)=2n^2+6n+5*/
  }
  printf(" En kucuk sayi : %d ",enk);
  return 0;
}








