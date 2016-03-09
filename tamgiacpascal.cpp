#include<stdio.h>
#include<conio.h>
int triangle(int m,int n){
	if(m==1||m==n)
		return 1;
	else
		return triangle(m-1,n-1)+triangle(m-1,n);
}
int main(){
	int m,n,p;
	printf("Nhap vao so dong\n");
	scanf("%d",&m);
	printf("\n-------------TAM GIAC PASCAL--------------\n");
	for(n=1;n<m+1;++n)
	{
		for( p=1;p<n+1;++p)
		{
			int k=triangle(n,p);
			printf("%d\t",k);
		}printf("\n");
	}	
}





		
