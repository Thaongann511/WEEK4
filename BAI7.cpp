#include <string.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	char s[100],a;
	s[0] = '\0';
	printf ("\n - Nhap vao xau ki tu : ",s);
	gets(s);
	printf("\n - Xau nhan duoc la: %s", s );
	printf("\n\n - Nhap ki tu can lay: ",a);
	scanf("%c",&a);
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==a)
		{
			j = i;
			while(s[j+1]!='\0')
			{
				s[j] = s[j+1];
				j++;
			}
			s[j] = '\0';
			i--;
		}
	}
	printf("\n\n - Xau sau khi xoa la: %s",s);
	getch ();
	return 0;
}
