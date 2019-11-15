// TestCLanguage.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "define.h"
#include "string.h"

void  ReadFile_ShowFile(char *strFileName);
void  Others()
{
	double dSum = PI;
	dSum = Add(1,5);
	
	int a = 99; //hmj test

	for(int i = 0; i < 99999; i++)
	{
		// i = 99998

		dSum++;
	}

	int n = 100;

	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////

	if(n == 22)
	{

		n = 44;
	}
	char str[256];
	sprintf(str,"str = %d\n",n),
		//	printf("%d",n); 
		printf(str); 

	int m;

	char str1[256];
	char str2[256];
	char str3[256];

	//	scanf("%s%s%d",str1,str2,&m);
	//	scanf(str,"%s%s%d",str1,str1,&m);

	//	cscanf()
	//	cscanf(str,"%s%s%d",str1,str1,&m);

	char *p = NULL;
	sprintf(str,"张数,=,男,=,女,=,100\n"),
		p = strtok(str,",");

	while(p)
	{
		printf(p);
		printf("\n");
		p = strtok(NULL,",");
	}

	//p = strtok(NULL," ");

	//p = strtok(NULL," ");
}

int _tmain(int argc, _TCHAR* argv[])
{


	ReadFile_ShowFile("d:\\person2.txt");

	return 0;
}


int  Add(int nNum1,int nNum2)
{

	return 0;
}



struct PersonInfo
{
	char m_strName[256];
	char m_strSex[256];
	int  m_nAge;
	int *m_pFileNmae;
	PersonInfo(int nAge)
	{
		m_nAge = nAge;
		m_pFileNmae = NULL;
	}
	PersonInfo()
	{
		m_nAge = 30;
		m_pFileNmae = NULL;
	}

	void myFunction1()
	{
		;
	}
};

void  ReadFile_ShowFile(char *strFileName)
{

	 FILE * pF;
	 pF = fopen(strFileName,"r");

	 char strLine[256];

	 char strName[256];
	 char strSex[256];
	 int  nAge;

	 int nRead = fscanf(pF,"%s %s %d",strName,strSex,&nAge);
	 while(nRead > 0)
	 {
		 printf(strName); printf(" ");
		 printf(strSex); printf(" ");
		 printf("%d",nAge); printf(" ");
		 printf("\n");

		 nRead = fscanf(pF,"%s %s %d",strName,strSex,&nAge);
		 /* if(nRead == -1)
		 {
		 fseek(pF,0,0);
		 nRead = fscanf(pF,"%s %s %d",strName,strSex,&nAge);
		 }*/
	 }

	// fread(strLine,1,256,pF);

	 PersonInfo stuctPerson1;
	 stuctPerson1.m_pFileNmae = NULL;

	 PersonInfo* pstuctPerson3 = new PersonInfo;
	  pstuctPerson3->m_pFileNmae = NULL;


	  PersonInfo* pstuctPerson4 = new PersonInfo(6);


	 PersonInfo stuctPerson2(5);
	 int nNum = 2;
 	 PersonInfo* pstuctPersons = new PersonInfo[nNum];


	

	 fseek(pF,0,0);
	  
	 nRead = fscanf(pF,"%s %s %d",stuctPerson1.m_strName,stuctPerson1.m_strSex,&(stuctPerson1.m_nAge));

	 while(nRead > 0)
	 {

		 nLow++;
		 nRead = fscanf(pF,"%s %s %d",stuctPerson1.m_strName,stuctPerson1.m_strSex,&(stuctPerson1.m_nAge));

	 }



	 PersonInfo* pstuctPersons6 = new PersonInfo[nLow];
	 fseek(pF,0,0);
	 int nIndex = 0;
	 nRead = fscanf(pF,"%s %s %d",pstuctPersons6[nIndex].m_strName,pstuctPersons6[nIndex].m_strSex,&(pstuctPersons6[nIndex].m_nAge));

	 while(nRead > 0)
	 {

		 nIndex++;
		 nRead = fscanf(pF,"%s %s %d",pstuctPersons6[nIndex].m_strName,pstuctPersons6[nIndex].m_strSex,&(pstuctPersons6[nIndex].m_nAge));

	 }


	 PersonInfo stuctPersons[200];
	 fseek(pF,0,0);
	 nIndex = 0;
	 nRead = fscanf(pF,"%s %s %d",stuctPersons[nIndex].m_strName,stuctPersons[nIndex].m_strSex,&(stuctPersons[nIndex].m_nAge));

	  while(nRead > 0)
	 {
		 
		 nIndex++;
	//	 nRead = fscanf(pF,"%s %s %d",stuctPersons[nIndex].m_strName,stuctPersons[nIndex].m_strSex,&(stuctPersons[nIndex].m_nAge));

	 }


	 fclose(pF);
}
