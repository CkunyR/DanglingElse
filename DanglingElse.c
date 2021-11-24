#include <stdio.h>

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)

		if (b == 2)
			printf("666\n");
	    else//else和离它最近的if进行匹配！！
		    printf("111\n");

	return 0;
}
