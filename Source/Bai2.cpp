#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	
int i,max;
int chuhoa=0 ,chuthuong=0;
printf("nhap vao so luong phan tu nhap max=  ");
scanf("%d",&max);
char s[max];
printf("nhap chuoi : ");
fflush(stdin);
gets(s);
 for(i = 0; i < strlen(s); i++)
 {   
    //kiem tra phan tu nhap la chu hoa
	 if(s[i]>=65 && s[i]<=90){
      chuhoa = chuhoa +1;     
 
       }
       //kiem tra phan tu nhap la chu thuong
	 else if (s[i]>=97 && s[i]<=122){
      chuthuong = chuthuong +1; 
      }
 }
 printf("so luong ki tu hoa là: %d \n",chuhoa);
 printf("\nso luong ki tu thuong là: %d\n",chuthuong);
 getch();
 return 0;
}
