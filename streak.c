#include<stdio.h>
#include<math.h>

long int streak(long int n){
	long int i=1;
	while(1){
		if(((n+i)%(i+1))!=0){
			break;
		}
		i++;
	}
	return i;
}
int main(){
	long int n,k,i,count=0,x;
	printf("Enter values for i-> P(i,4^i):");
	scanf("%ld",&x);
	n=pow(4,x);
	for(i=2;i<n;i++){
		
		k=streak(i);
		if(k==x){
			count++;
		}
	}

	printf("\nnumber of integers P(%ld,%ld):%ld\n",x,n,count);
}
