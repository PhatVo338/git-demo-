#include <stdio.h>
#include <conio.h>
#include <string.h>
int STRLEN(char *s)
{ 
	int dem=0;
	while (s[dem]!='\0')
	{  
		dem++;
	}
	return dem;
}
void STRCPY (char *s1, char *s2)
{ 
	int length=STRLEN(s2);  
	for (int i=0; i<length; i++)
	{
		s1[i]=s2[i];  
	}
	s1[length]='\0'; 
}
char* STRLWR(char *s)
{  
	char *p=strdup(s);
	int length= strlen(p);
	for (int i=0; i<length; i++)
	{
		if (p[i]>='A'&&p[i]<='Z')
		{
			p[i]+=32;  
		}
	}
	return p;
}
char* STRUPR(char *s)
{ 
	char *p=strdup(s);
	int length= strlen(p);
	for (int i=0; i<length; i++)
	{
		if (p[i]>='a'&&p[i]<='z')
		{
			p[i]-=32;
		}
	}
	return p;
}
int main ()
{
	char s[30];
	strcpy (s,"Phat Dep Trai"); 
	int dodai=STRLEN(s);
	printf ("\ndodai= %d",dodai); 
	char p[30];
	strcpy (p,STRLWR(s)); 
	printf ("\nchuoithuong: %s",p); 
	strcpy (p,STRUPR(s)); 
	printf ("\nchuoihoa: %s",p);  
	printf ("\nchuoi s ban dau: %s",s);  
	return 0;
}