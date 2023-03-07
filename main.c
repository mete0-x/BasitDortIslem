#include <stdio.h>
#include <stdlib.h>

int main(void)
{
printf("iki sayi giriniz ;\n");

int a,b,carp,fark,top  = 0;
float bol = 0;

scanf("%d%d",&a,&b);
 top = a + b ;
 fark = a - b ;
 carp = a * b ;
bol = (float)a/(float)b;
printf("toplam : :%d \n",top);
printf("fark : : %d \n ",fark);
printf("carp : : %d \n",carp);
printf("bol : : %.1f \n",bol);

}
