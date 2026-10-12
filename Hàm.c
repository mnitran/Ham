#include <stdio.h>
#include <math.h>

int i;

void nhap(int *n){
	do {
		printf("Nhap n (0 < n < 1000): ");
		scanf("%d", &*n);
	}
	while (*n <= 0 || *n >= 1000);
}

void lkus(int n){
	for (i = 1; i <= n; i++){
		if (n % i == 0)
			printf("%d ", i);
	}
}

long tongchan(int n){
	long tong = 0;
	for(i = 0; i < n; i+=2){
		tong += i;
	}
	return tong;
}

float tbc(int n){
	int d = 0; 
	long tong = 0;
	for (i = 1; i < n; i += 2){
		tong += i;
		d++;
	}
	if (d == 0)
		return 0;
	return (float)tong/d;
}

int boi35(int n){
	int d = 0;
	for (i = 0; i < n; i++){
		if (i % 15 == 0)
			d++;
	}
	return d;
}

int ngto(int n){
	for (i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int chinhphuong(int n){
	int m = sqrt(n);
	if (m*m != n)
		return 0;
	else 
		return 1;
}

void hoanthien(int n){
	int tong = 0;
	for (i = 1; i < n; i++){
		if (n % i == 0)
			tong += i;
	}
	if (tong == n)
		printf("\n7. n la so hoan thien");
	else 
		printf("\n7. n khong la so hoan thien");
}

int chusole(int n){
	int d = 0;
	while (n){
		if ((n%10) % 2 != 0)
			d++;
		n = n/10;
	}
	return d;
}

void chusochan(int n){
	int d = 0;
	while (n){
		if ((n%10) % 2 == 0){
			printf("%d ", n%10);
			d++;
		}
		n = n/10;
	}
	if (d == 0)
		printf("n khong co chu so chan");
}

int toanchan(int n){
	while (n){
		if ((n%10) % 2 != 0)
			return 0;
		n = n/10;
	}
	return 1;
}

int tangdan(int n){
	int max = n % 10;
	n = n/10;
	while (n){
		if (max < (n%10))
			return 0;
		max = n % 10;
		n /= 10;
	}
	return 1;
}

long tongcschan(int n){
	long tong = 0;
	while (n){
		if ((n%10) % 2 == 0)
			tong += n % 10;
		n /= 10;
	}
	return tong;
}

int csln(int n){
	int max = n % 10;
	n /= 10;
	while (n){
		if (n%10 > max)
			max = n % 10;
		n /= 10;
	}
	return max;
}

int doixung(int n){
	int m = 0;
	while (n){
		m = m*10 + (n%10);
		n /= 10; 
	}
	return m;
}

int main(){
	int n;
	nhap(&n);
	printf("\n1. Cac uoc so cua n: ");
	lkus(n);
	printf("\n2. Tong cac so chan nho hon n: %ld", tongchan(n));	
	printf("\n3. Trung binh cong cac so le nho hon n: %.2f", tbc(n));
	printf("\n4. So cac so la boi cua 3 va 5 va nho hon n: %d", boi35(n));
	if (ngto(n))
		printf("\n5. n la so nguyen to");
	else 
		printf("\n5. n khong la so nguyen to");
	if (chinhphuong(n))
		printf("\n6. n la so chinh phuong");
	else
		printf("\n6. n khong la so chinh phuong");
	hoanthien(n);
	printf("\n8. So chu so le cua n: %d", chusole(n));
	printf("\n9. Liet ke cac chu so chan cua n: ");
	chusochan(n);
	if (toanchan(n))
		printf("\n10. n toan chu so chan");
	else
		printf("\n10. n khong toan chu so chan");
	if (tangdan(n))
		printf("\n11. Cac chu so cua n tang dan");
	else
		printf("\n11. Cac chu so cua n khong tang dan");
	printf("\n12. Tong cac chu so chan cua n: %ld", tongcschan(n));
	printf("\n13. Chu so lon nhat cua n: %d", csln(n));
	if (doixung(n) == n )
		printf("\n14. n la so doi xung");
	else
		printf("\n14. n khong la so doi xung");
	
	
 return 0;
}
