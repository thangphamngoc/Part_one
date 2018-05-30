#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main() 
{
    int i,max;
    printf("nhap vao so luong phan tu nhap max = ");
    scanf("%d",&max);
	char s[max];
	fflush(stdin);
    printf("nhap vao xau can chuan hoa: ");
    gets(s);
    // xóa dau cach cuoi 
    while( s[0] == ' ' ) strcpy(&s[0], &s[1]);
    // xoa dau cach cuoi  
    while( s[ strlen(s)-1 ] == ' ') s[ strlen(s)-1 ] = '\0';    
    //chuyen chu cai dau tien thanh chu hoa
	if('a'<=s[0]&&s[0]<='z'){
		s[0]=s[0]-32;
	}
         // xóa 2 dau cach canh nhau
     for(i = 0; i < strlen(s); i++)
    {
        if( s[i] == ' ' && s[i+1] == ' ')
        {
            strcpy(&s[i], &s[i+1]);
            i--; 
        }
	}
		//xóa dau cach truoc dau cham hoac phay
	for(i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ',' || s[i]== '.') && (s[i-1] == ' '))
	   {
 	     strcpy(&s[i-1],&s[i]);
		 i--;
		}
	}
	//xóa 2 dau cham hoac phay lien nhau
	for(i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ',' && s[i+1]== ',') || (s[i] == '.' && s[i+1] == '.') )
	   {
 	     strcpy(&s[i],&s[i+1]);
		 i--;
		}
	}
	// thêm dau cach sau dau cham hoac dau phay
	for(i=0;i<=strlen(s);i++)
	{ 
		if((s[i] == ',' || s[i]== '.') && s[i+1]!=' ')
		{
			for(int j= strlen(s)+1 ; j>=i+2 ;j--){
			s[j] = s[j-1];
			
			}
			s[i+1] = '  ';
		}
	}
	
    printf("Xau sau khi chuan hoa: %s\n", s);
     getch();
    return 0;
}
