#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,max;
            printf("nhap vao so luong phan tu nhap: ");
            scanf("%d",&max);
            char s[max];
            printf("nhap chuoi : ");
            fflush(stdin);
            gets(s);
            n = strlen(s)-1;
            //dao chuoi
            for(i=n;i>=0; i--)
            {
            printf("%c",s[i]);
            }
             getch();
            return 0;
}
