#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80];                                                  // 문자열을 입력할 배열
	char res_str[80];                                              // 생략 문자열을 저장할 배열
	const char *star = "**********";                               // 생략 부분을 채울 문자열
	int len;                                                       // 입력 문자열의 길이 보관
	printf_s("단어 입력 : ");
	scanf_s("%s", str,30);
	len = strlen(str);                                             // 입력한 단어의 길이 계산
	if (len <= 5)                                                  //길이가 5 이하이면 그대로 복사
	{
		strcpy_s(res_str, str);
	}
	else                                                           // 5초과
	{
		strncpy_s(res_str, str, 5);                                // 먼저 다섯 문자만 복사
		res_str[5] = '\0';                                         
		strncat_s(res_str, star, len - 5);                         // 문자열의 길이만큼 별
	}
	printf_s("입력한 단어 : %s, 생략한 단어 : %s\n", str, res_str);
	return 0;
}