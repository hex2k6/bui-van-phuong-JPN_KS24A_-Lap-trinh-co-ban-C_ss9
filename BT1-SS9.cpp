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
	int b, addindex;
	printf ("moi ban nhap gia tri muon them vao:");
	scanf ("%d",&b);
	printf ("moi ban nhap vi tri muon them vao: "); 
	scanf ("%d",&addindex);
	if (addindex < 0 || addindex >=100)
	{
		printf ("khong hop le"); 
	} else
	{
		for (int i=currentLength; i>=addindex; i--)
		{
			a[i]=a[i-1];
		}
		a[addindex]=b;
		currentLength ++;
		for (int i=0; i< currentLength; i++)
		{
			printf ("%d ",a[i]);
		}
	} 
	   return 0;

} 
