#include <stdio.h>
#include <conio.h>
 
int main(){
    int a, b, c;
    int temp;
    printf("Nhap 3 so nguyen a, b, c: \n ");
    scanf("%d %d %d", &a, &b, &c);  
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    } 
   if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    printf("\n%d    %d    %d", c, b, a);  
    getch();
    return 0;
}
