#include <stdio.h>
#include <conio.h>
void main()
{
	int mark;
	int n;
	printf("Enter the number of marks: "); 
	scanf("%d",&n);
	float Sum=0;
	for (int i=0;i<n;i++)
	{
		printf("Enter %i mark: ",1+i);
	scanf("%d",&mark);
	Sum=Sum+mark;
	}
	Sum=Sum/n;
	printf("average=%g",Sum);
getch();
}
