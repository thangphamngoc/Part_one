#include <stdio.h>
#include <conio.h>
int UCLN(int a,int b)
{
	if(a==0 || b==0){
	return a+b;	
		}
	while(a!=b){
		if(a>b) a=a-b;
		if(a<b) b =b-a;
		
	}
	return a;
}

int BCNN(int a, int b){
	if (a==0 || b==0) return 0 ;
	else return (a*b)/UCLN(a,b);
}

main(){
	int a,b;
	printf("nhap 2 so a & b : ");
	scanf("%d %d",&a ,&b);
	printf("UCLN la:%d \n",UCLN(a,b));
	printf("BCNN la:%d",BCNN(a,b));	
	getch();
    
}
