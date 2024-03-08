#include<stdio.h>
int main()
{
	int key,swap,i,a[6]={1,3,2,5,4,7};
	printf("enter number to search");
	scanf("%d",&key);

   	for(i=0;i<5;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			if(a[i]>a[i+1])
			{
				swap=a[i];
				a[i]=a[i+1];
				a[i+1]=swap;
				
			}
			
		}
    	}

	
	int low=0,high=5;
	while(low<=high)
	{
		int mid=(high+low)/2;
		if(a[mid]==key)
		{
			printf("%d is at %d",key,i);
		}
		if(a[mid]<key){
			low=mid+1;
			
		}
		if(a[mid]>key)
		{
			high=mid-1;
		}
	}
	

	
}
