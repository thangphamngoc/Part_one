#include <stdio.h>
#include <conio.h>

int main()
{
	int day,month,year;
	printf("Nhap vao ngay thang  nam:\n");
	scanf("%d%d%d",&day,&month,&year);
	
	if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d la mot nam nhuan\n", year);
   else
      printf("%d khong phai la nam nhuan\n", year);
  
	switch(month){
		//xet cac thang co 31ngay
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (day>0 && day<=31) {
		printf("ngay %d thang %d nam %d hop le\n",day,month,year);
		break;
		}
		else {
		printf("ngay %d thang %d nam %d khong hop le\n",day,month,year);
		break;	
		}
	    //xet cac thang co 30 ngay
		case 4: case 6: case 9: case 11:
		if(day> 0 && day <=30){
		printf("ngay %d thang %d nam %d hop le\n",day,month,year);	
		break;	
		}
		else {
		printf("ngay %d thang %d nam %d khong hop le\n",day,month,year);
		break;	
		}
		//xet thang 2 la nam thuong
		case 2:
		if(day> 0 && day <=28){
		printf("ngay %d thang %d nam %d hop le\n",day,month,year);	
		break;	
		}
		//xet thang 2 la nam nhuan
		else if((day <=29) && (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))){
		printf("ngay %d thang %d nam %d hop le\n",day,month,year);	
		break;
	    }
	    else {
	    printf("ngay %d thang %d nam %d khong hop le\n",day,month,year);
		break;	
		}
			
		
	}
	
getch();
    return 0;	
}
