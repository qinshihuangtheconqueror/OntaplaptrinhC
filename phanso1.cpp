#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
typedef struct ps{
	int tu;
	int mau;
    
}ps;
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
} /* uoc chung lon nhat /*
int lcm(int a,int b){
	return a*b/gcd(a,b);
} /* boi chung nho nhat/*
ps toigian(ps a){
	ps res;
	int uc=gcd(abs(a.tu),abs(a.mau));
	res.tu= a.tu/uc;
	res.mau= a.mau/uc;
	return res;
} /* tim phan so toi gian */
ps tong(ps a, ps b){
	ps res;
	int mc= lcm(a.mau, b.mau);
	res.mau=mc;
	res.tu=mc/ a.mau*a.tu + mc / b.mau* b.tu;
	return toigian(res);
} /*tong, hieu 2 phan so o dang toi gian */
ps  hieu(ps a, ps b){
	ps res;
	int mc= lcm(a.mau, b.mau);
	res.mau=mc;
	res.tu=mc/ a.mau*a.tu - mc / b.mau* b.tu;
	return toigian(res);
}
int main(){
	ps a,b;

		printf("Please enter the number you want:");
		scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
	printf("%d/%d\n%d/%d\n", a.tu,a.mau,b.tu,b.mau);
	ps t=tong(a,b);
	ps h=hieu(a,b);
	printf("%d/%d\n%d/%d\n",t.tu,t.mau,h.tu,h.mau);
	return 0;
}
	

