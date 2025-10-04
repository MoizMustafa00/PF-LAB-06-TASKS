#include<stdio.h>
#include<math.h>
int main()
{
	float M=0, I=0, S=0;
	printf("Enter the value of intensity of quake and standard reference: \n");
	scanf("%f %f", &I, &S);
	M=log10(I/S);
	printf("The magnitude of the earthquake is %.2f\n",M);
	return 0;
}
