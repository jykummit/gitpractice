#include<stdio.h>

int main()
{
	int n,r,rev=0,temp;
	printf("enter n value\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==temp){
		printf("paliindrome number\n");
	}
	else{
		printf("not palindrome number\n");
	}
	return 0;
}
