#include<stdio.h>
#include<stdlib.h>
void nhap(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
}
void in(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}	
}
int main(){
	float *a;
	int n;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	nhap(a,n);
	in(a,n);
	free(a);
}
