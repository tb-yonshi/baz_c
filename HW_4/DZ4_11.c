#include <stdio.h>

int main(void)
{
	int a,b,c;
    printf("Input number:");
	scanf ("%d %d %d", &a, &b, &c);
	if ((a+b>c)&&(a+c>b)&&(c+b>a))
	{
        printf("YES");	
	}
    else
    {
        printf("NO");
	}
	return 0;
}

