#include <stdio.h>

using namespace std;

struct Array
{
	int* A;
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	printf("\nElements are:\n");
	for (i=0; i<arr.length; ++i)
		printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr;
	arr.length=0;
	int n,i;
	
	printf("Enter array size: ");
	scanf_s("%d",&arr.size);
	arr.A=new int[arr.size];	

	printf("Enter number of array elements: ");
	scanf_s("%d",&n);

	printf("Give all the elements: ");
	for(i=0;i<n;++i)
		scanf_s("%d",&arr.A[i]);
	arr.length=n;

	Display(arr);

	return 0;
}