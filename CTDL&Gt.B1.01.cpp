#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap (int a[], int &n) { 
	do { 
		printf("\nNhập số phần tử:"); 
		scanf("%d", &n); 
		if(n <= 0 || n > 100) { 
		printf("\nSo phan tu nhap vao phai be hon 100 va lon hon 0 !"); 
		} 
	}
  while(n <= 0 || n > 100); 
	for(int i = 0; i < n; i++) { 
		printf("\nNhap a[%d]: ", i); 
		scanf("%d", &a[i]); 
	} 
} 
void xuat(int a[], int n) { 
	for(int i = 0; i < n; i++) { 
		printf("%d", a[i]); 
	} 
} 
int tongChan(int a[], int n) { 
	if(n == 0) 
		return 0; 
	if (a[n - 1] % 2 == 0) {
		return tongChan(a, n - 1) + a[n - 1];
		return tongChan(a, n - 1);
} 	
int main() { 
	int n; 
	int a[100]; 
	nhap(a, n); 
	xuat(a, n); 
	int tong = tongChan(a, n);
	printf("\nTong cac so chan la %d", tong); 
	return 0; 
}
}

