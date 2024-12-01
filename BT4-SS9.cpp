#include <stdio.h>
int main()
{
	int a, b, arr[100];
do{
   printf ("1.nhap vao mang\n");
   printf ("2.hien thi mang\n");
   printf ("3.them phan tu\n");
   printf ("4.sua phan tu\n");
   printf ("5.xoa phan tu\n");
   printf ("6.thoat\n");
   printf ("moi ban nhap lua chon :\n");
   scanf ("%d",&a);
   switch (a)
   {
   	 case 1:
		printf ("MOI Nhap so luong cua mang :");
		scanf ("%d",&b);
		for (int i=0; i<b; i++)
		{
			printf ("moi nhap gia tri thu %d cua mang :",i+1);
			scanf ("%d",&arr[i]); 
		} 
		break;
	 case 2:
	 for (int i=0; i<b; i++)
	 {
	 	printf ("%d\n",arr[i]); 
	  }
	  break;
	  case 3:
	  int c, addindex;
	  printf ("moi ban gia tri muon them :");
	  scanf ("%d",&c);
	  printf ("moi ban nhap vi tri muon them :");
	  scanf ("%d",&addindex);
	  if (addindex<0 || addindex > b)
	  {
	  	printf ("khong hop le\n"); 
	  } else
	   {
	   	for (int i=b; i>=addindex; i--)
		{
		  arr[i]=arr[i-1];
		}
			arr[addindex]=c; 
		     b++; 
		for (int i=0; i<b; i++ )
		{
			printf ("%d ",arr[i]);  
		}
		printf ("\n"); 
	   }
	   break;
	   case 4:
	     c=0;
		 addindex=0; 
	   printf ("moi ban nhap gia tri muon sua :");
	   scanf ("%d",&c);
	   printf ("moi ban nhap vi tri muon sua :");
	   scanf ("%d",&addindex);
	   if (addindex<0 || addindex > b)
	    {
	  	  printf ("khong hop le\n"); 
	    } else
		{
			for (int i=0; i<=addindex-1; i++)
			{
				arr[i]=arr[i];  
			} 
			arr[addindex-1] = c;
			for (int i=0; i<b; i++)
			{
			  printf ("%d ",arr[i]); 
			} 
			printf ("\n");
		}
		break;
		case 5:
		 addindex=0; 
	   printf ("moi ban nhap vi tri muon xóa :");
	   scanf ("%d",&addindex);
	    if (addindex<0 || addindex > b)
	    {
	  	  printf ("khong hop le\n"); 
	    } else
		{
			for (int i=addindex-1; i<b; i++)
			{
				arr[i]=arr[i+1];  
			}
			b--; 
			for (int i=0; i<b; i++)
			{
			  printf ("%d ",arr[i]); 
			} 
			printf ("\n");
		}
		break;
		case 6:
		return 1; 
		default:
			printf ("khong hop le");
			break;
   }
} while (a>0 && a<7);
return 0; 
}
