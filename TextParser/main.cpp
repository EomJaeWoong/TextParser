// TextParser.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CTextParser Parser;

	int ip;
	float fp;
	char chText[13];
	int iLength = sizeof(chText);

	Parser.LoadFile("test.ini");

	Parser.SearchZone("TEST_ZONE");

	Parser.GetValue("TEST_DATA1", &ip);
	Parser.GetValue("TEST_DATA2", &fp);
	Parser.GetValue("TEST_DATA3", chText, &iLength);

	printf("TEST_DATA1 : %d\n", ip);
	printf("TEST_DATA2 : %lf\n", fp);
	printf("TEST_DATA3 : %s\n", chText);

	return 0;
}

