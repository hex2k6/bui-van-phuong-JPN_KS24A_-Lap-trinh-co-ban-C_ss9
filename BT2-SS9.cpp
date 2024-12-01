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
	printf ("moi ban nhap gia tri muon sua vao:");
	scanf ("%d",&b);
	printf ("moi ban nhap vi tri muon sua vao: "); 
	scanf ("%d",&addindex);
	if (addindex <0 || addindex >currentLength)
	{
		printf ("khong hop le\n");
	} else {
		for (int i=0; i<=addindex; i++)
		{
			if (a[i]==a[addindex-1])
			{
				a[i] = b;
			}
		}
	}
	for (int i=0; i< currentLength; i++)
   {
   	 printf ("%2d",a[i]);
   }
   return 0;
}
	
