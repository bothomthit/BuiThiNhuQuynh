#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void Nhap(float a[], int &n){
  do{
    printf("nhap vao so phan tu:");
    scanf("%d",&n);
    if(n <= 0 || n > MAX) { 
		printf("\nSo phan tu phai lon hon 0 va khong qua 100!"); 
		} 
	}
  while(n <= 0 || n > MAX); 
	for(int i = 0; i < n; i++) { 
		printf("\nNhap a[%f]: ", i); 
		scanf("%f", &a[i]); 
	} 
 
void xuat(float a[], int n) 
{ 
	for(int i = 0; i < n; i++) { 
		printf("%f", a[i]); 
    int demsoDuong(float a[],int n){
    if(n==0)
      return 0;
      int soptDuong = demsoDuong(a, n-1)
      }
      if(a[n-1]>0)
        soptDuong++;
      return soptDuong;
      int main(){
        int n;
        float a;
        int i;
       void Nhap( a, n);
         void xuat(a,n);
        int soptDuong = demsoDuong(a, n);
        printf("co %d so duong trong mang",soptDuong);
        return 0;
      }
      
	} 
} 
