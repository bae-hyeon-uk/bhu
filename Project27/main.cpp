#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20], str3[30];
	char temp[20];

	printf("세 개의 단어 입력: ");
	scanf("%s %s %s", str1, str2, str3);    
	
	if(strcmp(str1, str2) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}                                     // str1이 str2보다 뒤에 나오는 경우에 두 문자열을 바꿈

	if(strcmp(str1, str3) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);
	}                                     // str1이 str3보다 뒤에 나오는 경우에 두 문자열을 바꿈

	if(strcmp(str2, str3) > 0)
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}                                     // str1이 str2보다 뒤에 나오는 경우에 두 문자열을 바꿈
	
	printf("%s, %s, %s\n", str1, str2, str3);

	return 0;
}
