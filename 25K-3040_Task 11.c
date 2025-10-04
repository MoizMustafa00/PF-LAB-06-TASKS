#include<stdio.h>
#include<math.h>
int main()
{
	float H=0, theta=0, L=0;
	printf("Enter the height of the building (in meters): \n");
	scanf("%f", &H);
	printf("Enter the angle of elevation of the sun (in radians): \n");
	scanf("%f", &theta);
	L=H/tan(theta);
	printf("The length of the shadow is %.2fm\n",L);
	return 0;
}
