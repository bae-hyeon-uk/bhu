#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80];                                                  // ���ڿ��� �Է��� �迭
	char res_str[80];                                              // ���� ���ڿ��� ������ �迭
	const char *star = "**********";                               // ���� �κ��� ä�� ���ڿ�
	int len;                                                       // �Է� ���ڿ��� ���� ����
	printf_s("�ܾ� �Է� : ");
	scanf_s("%s", str,30);
	len = strlen(str);                                             // �Է��� �ܾ��� ���� ���
	if (len <= 5)                                                  //���̰� 5 �����̸� �״�� ����
	{
		strcpy_s(res_str, str);
	}
	else                                                           // 5�ʰ�
	{
		strncpy_s(res_str, str, 5);                                // ���� �ټ� ���ڸ� ����
		res_str[5] = '\0';                                         
		strncat_s(res_str, star, len - 5);                         // ���ڿ��� ���̸�ŭ ��
	}
	printf_s("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res_str);
	return 0;
}