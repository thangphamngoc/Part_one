#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	
int i;
int chuhoa=0 ,chuthuong=0;
char s[50];
printf("nhap vao chuoi: ");
gets(s);
 for(i = 0; i < strlen(s); i++)
 {
	 if(s[i]>=65 && s[i]<=90){
      chuhoa = chuhoa +1;     
 
       }
	 else if (s[i]>=97 && s[i]<=122){
      chuthuong = chuthuong +1; 
      }
 }
 printf("so luong ki tu hoa là: %d \n",chuhoa);
 printf("\nso luong ki tu thuong là: %d\n",chuthuong);
 getch();
 return 0;
}
