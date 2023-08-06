#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   char s[25];
	printf("nhap chuoi: ");
	gets(s);
	strupr(s);
	for(int i=0;i<strlen(s);i++) {
		if(i%2!=0&&s[i]!=' ') {
			s[i]=s[i]+32;
		}
	}
	printf("\n Ket qua la: ");
	puts(s);
}

