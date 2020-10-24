#include<conio.h>
#include<iostream>
int GCP(int a, int b)
{
	if (b==0)
	return a;
	else{
		return GCP(b,a%b);
	}	
}
int main()
{
	int u,v;
	printf("Enter the two values \n");
	scanf("%d", &u);
	scanf("%d", &v);
	int ans=GCP(u,v);
	printf("%d",ans);
	return 0;
}

