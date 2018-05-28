#include<conio.h>
#include<stdio.h>

int main(){
float duong ; float tien;
printf("Nhap vao chieu dai(m)= ");
scanf("%f",&duong);
if(duong<=1000){
tien=10000;
printf("Ban phai tra so tien la : %.f  ",tien );
}
else if(30000>=duong){
tien= 10000 + (((duong -1000)/200)*1500);
printf("Ban phai tra :%.f ",tien);
}
else if(duong>30){
tien= 10000 + ((29000/200)*1500) + (((duong-30000)/1000)*8000);
printf("Ban phai tra :%.f ",tien); 
}
getch();
return 0;
}
