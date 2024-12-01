#include <stdio.h>
int main()
{
 int a[100];
int  currentLength=0;
 printf ("so luong phan tu muon nhap :");
 scanf ("%d",&currentLength);
 for (int i=0; i< currentLength; i++)
   {
 	 printf ("phan tu thu %d la :",i+1);
	  scanf ("%d",&a[i]); 
	}	
	int b;
	printf ("moi ban nhap vi tri muon xóa :");
	scanf ("%d",&b);
	if (b<0 || b>currentLength) 
	{
		printf ("khong phu hop"); 
	}else {
	for (int i =b-1; i<currentLength ; i++  )
	{
		a[i]=a[i+1];
	} 
	 currentLength--;
    }
	 for (int i=0; i<currentLength; i++)
	{
	 	printf ("%d",a[i]); 
	}
	return 0; 
 } 
