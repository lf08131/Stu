//ѧ���ɼ�����ϵͳ
//ʱ�� 2018.03.07
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	char m_strNum[20];
	char m_strName[30];
	char m_strSex[3];
	int m_nAge;
	double m_fMathScore;
    double m_fChineseScore;
	double m_fEnglishScore;
	double m_fCScore;
};

int Input(struct Student stu[], int *n); 
int Revise(struct Student stu[], int *n);
int MathInput(struct Student stu[], int *n);
int EnglishInput(struct Student stu[], int *n);
int CInput(struct Student stu[], int *n);
int MathArray(struct Student stu[], int *n);
int EnglishArray(struct Student stu[], int *n);
int CArray(struct Student stu[], int *n);
int Search(struct Student stu[], int *n);
int Count(struct Student stu[], int *n);
int Output(struct Student stu[], int *n);

int main()
{
	
    struct Student stu[500];
	struct Student *p = stu;
	int n;
	int word;
	int w;
	int q;
	int i;

	for (i=w-1; i<w; i++)
	{
		printf("**************************************\n");
		printf("****        0.¼��ѧ����Ϣ        ****\n");
		printf("****        1.��ѧ�ɼ�����        ****\n");
		printf("****        2.�˳����߷���        ****\n");
		printf("****        3.Ӣ��ɼ�����        ****\n");
		printf("****        4��C���Գɼ�����      ****\n");
		printf("****      5.��ѯĳ��ѧ���ĳɼ�    ****\n");
		printf("****6.�������Ŀ�������Ƶ�ѧ������****\n");
		printf("****        7.�޸�ѧ����Ϣ        ****\n");
		printf("****        8.����ѧ����Ϣ        ****\n");
		printf("**************************************\n");
	
		scanf("%d", &word);
		
		switch(word)
		{
			case 0:
				
				Input(p,&n);
				printf("������ѧ����\n");
				MathInput(p, &n);
			
				printf("����Ӣ�����\n");
				EnglishInput(p, &n);
			
				printf("����C���Է���\n");
				CInput(p, &n);

				printf("��1���أ������������\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
				
			case 1:
		
				MathArray(p, &n);

				printf("��1���أ������������\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
	
			case 2:
	
				printf("��1���أ������������\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
				
				break;
	
			case 3:
	    		
				EnglishArray(p, &n);

				printf("��1���أ������������\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
		
			
	    	case 4:
	    		
				CArray(p, &n);
			
				printf("��1���أ������������\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
	
			case 5:
				
				Search(p, &n);
				
				printf("��1���أ������������\n");
		    	scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
				
				break;

			case 6:
		
		    	Count(p, &n);
					
				printf("��1���أ������������\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}	
				
		   	 	break;

			case 7:

				Revise(p, &n);
		 
				printf("��1���أ������������\n");
							
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}

				break;

			case 8:

				Output(p, &n);

				printf("��1���أ������������\n");
							
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}

				break;
		   	 	
		   	default :

		   	 	printf("\n");

		   	 	break;
		}
			
	}
	
	return 0;
}

int Input(struct Student stu[], int *n)
{
	int i;
	FILE *fp;
	
	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					//���ļ�
		{
			puts("�Ҳ����ļ�");
			exit(1);
		}
		
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		//¼��
	{
	}

	printf("������ȫ��ѧ��������\n"); 
	scanf("%d", &*n);
	printf("�������ѧ������Ϣ:\n");
	
	for (i=0; i<*n; i++)
	{
		printf("�������%d��ѧ������Ϣ\n",i+1);
    	printf("ѧ��\n");
    	scanf("%s", stu[i].m_strNum);
    	printf("����\n");
    	scanf("%s", stu[i].m_strName);
    	printf("�Ա�\n");
    	scanf("%s", stu[i].m_strSex);
    	printf("����\n");
    	scanf("%d", &stu[i].m_nAge);
    }

	    
	fclose(fp);

    for (i=0; i<*n; i++)
    {
    	printf("��%d��ѧ��:\n",i+1);
    	printf("ѧ��  ����  �Ա�  ����\n");
    	printf("%5s%5s%5s%5d\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge);
	}
	fclose(fp);
	return (i);
}


//�޸�ѧ����Ϣ 

int Revise(struct Student stu[], int *n)
{
	int c;
	int z;
	int i;
	int m;
	int j;
	int f;
	int a;
	char num[20];
	FILE *fp;

	printf("******************\n");
	printf("** 1.   ���    **\n");
	printf("** 2.   ɾ��    **\n");
	printf("** 3.   �޸�    **\n");
	printf("******************\n");
			
	scanf("%d",&z);

	switch(z)
	{
		case 1:

			int c;
			int i;
			
			printf("���� ��\n");
			scanf("%d", &c);
			(*n)=(*n)+c;
					
			if ((fp = fopen("D:\\1.txt", "a")) == NULL)					
				{
					puts("�Ҳ����ļ�");
					exit(1);
				}
				
			for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		
			{
			}
			
			for (i=*n-c; i<*n; i++)
			{

				printf("�������%d��ѧ������Ϣ\n",i+1);
    			printf("ѧ��\n");
    			scanf("%s", stu[i].m_strNum);
    			printf("����\n");
    			scanf("%s", stu[i].m_strName);
    			printf("�Ա�\n");
    			scanf("%s", stu[i].m_strSex);
    			printf("����\n");
    			scanf("%d", &stu[i].m_nAge);
				printf("��ѧ�ɼ�\n");
				scanf("%lf", &stu[i].m_fMathScore);
				printf("Ӣ��ɼ�\n");
				scanf("%lf", &stu[i].m_fEnglishScore);
				printf("C���Գɼ�\n");
				scanf("%lf", &stu[i].m_fCScore);
			}
    
			fclose(fp);

			for (i=0; i<*n; i++)
			{
    			printf("��%d��ѧ��:\n",i+1);
    			printf("ѧ��  ����  �Ա�  ����  ��ѧ�ɼ�  Ӣ��ɼ�  C���Գɼ�\n");
    			printf("%5s%5s%5s%5d%5lf%5lf%5lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fMathScore, stu[i].m_fCScore);
			}

			break;	
				
		case 2:
	
			f = 0;
			
			if ((fp = fopen("D:\\1.txt", "r")) == NULL)
			{
				puts("�Ҳ����ļ�");
				exit(1);
			}
			
			scanf("%s",&num);

			for (i=0; fread(&stu[i], sizeof(struct Student),1,fp); i++)
			{
				if (strcmp(num, stu[i].m_strNum) == 0)
				{
					a = i;			
					f = 1;
				}
			}
			
			fclose(fp);
			
			if ((fp = fopen("D:\\1.txt","w")) == NULL)
			{
				puts("�Ҳ����ļ�");
				exit(1);
			}
			
			for (j=0; j<*n; j++)
			{
				if (j == a)
				{
					printf("\n");
					printf("\n");
					printf("ѧ��Ϊ%s��ͬѧ��Ϣ��ɾ��", num);
				
				}
				else
				{
					fwrite(&stu[j], sizeof(struct Student), 1, fp);					//��δɾ����ѧ���ɼ�ȫ��д���ļ�
				}
			}

			(*n)--;

			fclose(fp);
							
			break;	
					
		case 3:
		
			char name[20];
			double english;
			double chinese;
			double Math;
			double Cyu;
			char num[20];
			
			f = 0;
			m = 5;
			
			if ((fp = fopen("D:\\1.txt", "r")) == NULL)
			{
				puts("�Ҳ����ļ�");
				exit(1);
			}
			
			scanf("%s",&num);

			for (i=0; fread(&stu[i], sizeof(struct Student), 1 , fp); i++)
			{
				if (strcmp(num, stu[i].m_strNum) == 0)								//����ѧ���ҵ�����Ҫ��ѧ����Ϣ
				{	
					printf("��ͬѧ��ϢΪ��\n");
					printf("����  %s\n", stu[i].m_strName);
					printf("ѧ��  %s\n", stu[i].m_strNum);
					printf("�Ա�  %s\n", stu[i].m_strSex);
					printf("����  %d\n", stu[i].m_nAge);
					printf("Ӣ�%lf\n", stu[i].m_fEnglishScore);
					printf("��ѧ��%lf\n", stu[i].m_fMathScore);
					printf("C���ԣ�%lf\n", stu[i].m_fCScore);
					
					a = i;
					
					f = 1;
				}
			}
	
			fclose(fp);
			
			printf("ѧ��\n");
    		scanf("%s", stu[i].m_strNum);
    		printf("����\n");
    		scanf("%s", stu[i].m_strName);
    		printf("�Ա�\n");
    		scanf("%s", stu[i].m_strSex);
    		printf("����\n");
    		scanf("%d", &stu[i].m_nAge);
			printf("��ѧ����\n");
			scanf("%lf", &stu[i].m_fMathScore);	
			printf("Ӣ�����\n");
			scanf("%lf", &stu[i].m_fEnglishScore); 
			printf("C���Է���\n");
			scanf("%lf", &stu[i].m_fCScore);  
			
			if ((fp = fopen("D:\\1.txt", "w")) == NULL)
			{
				puts("�Ҳ����ļ�");
				exit(1);
			}
			
			for (j=0; j<*n; j++)
			{
				fwrite(&stu[j], sizeof (struct Student), 1, fp);				//���޸����Լ�û���޸ĵ�ѧ���ɼ�ȫ��д���ļ�
			}
			
			fclose(fp);
		
		break;
	}

		
	return (i);
	return (a);
	return (c);
	return (j);
	return (m);
	return (f);
	return (z);
	
}

//������ѧ����
int MathInput(struct Student stu[], int *n) 
{
	int i;
	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					
	{
		puts("�Ҳ����ļ�");
		exit(1);
	}
	
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)	
	{
	}
	
	for (i=0; i<*n; i++)
	{			
        printf("��ѧ����\n");
        scanf("%lf", &stu[i].m_fMathScore);		
    }	
         
	fclose(fp);

    printf("ѧ��  ����  �Ա�  ����  ��ѧ�ɼ� \n");	
    		
    for (i=0; i<*n; i++)
    {
    	printf("%5s%5s%5s%5d%12lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fMathScore);
	}
			
	return (i);
}

//����Ӣ�����
int EnglishInput(struct Student stu[], int *n)
{
	int i;
	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					//���ļ�
	{
		puts("�Ҳ����ļ�");
		exit(1);
	}
		
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		//¼��
	{
	}

	for (i=0; i<*n; i++)
    {
	    printf("Ӣ�����\n");
        scanf("%lf", &stu[i].m_fEnglishScore);  	
    }	
        
	fclose(fp);
    printf("ѧ��  ����  �Ա�  ����  Ӣ��ɼ�  \n");	
       	 
    for (i=0; i<*n; i++)
    {
        printf("%5s%5s%5s%5d%5lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fEnglishScore);
	}
			
	return (i);
}

//����C���Է���
int CInput(struct Student stu[], int *n)
{
	int i;
	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					//���ļ�
	{
		puts("�Ҳ����ļ�");
		exit(1);
	}
	
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		//¼��
	{
	}
	
	for (i=0; i<*n; i++)
    { 
	    printf("C���Է���\n");
        scanf("%lf", &stu[i].m_fCScore);  
    }   
            
	fclose(fp);

    printf("ѧ��  ����  �Ա�  ����  C���Գɼ�  \n");
				
    for (i=0; i<*n; i++)
    {
       	printf("%5s%5s%5s%5d%5lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fCScore);
	}
	
	return (i);
	
}

//��ѧ�ɼ�����
int MathArray(struct Student stu[], int *n)
{
	
	int i;
	int a;
	int c;
	double temp;
	char str[20];


	for (a=*n; a>=0; a--)
	{	
		
		for (i=0; i<*n-1; i++)
		{
		   	if(stu[i].m_fMathScore < stu[i+1].m_fMathScore)
		   	{
			    temp=stu[i+1].m_fMathScore;
		   		stu[i+1].m_fMathScore = stu[i].m_fMathScore;
		   		stu[i].m_fMathScore = temp;

		   		strcpy(str,stu[i+1].m_strName);
		   		strcpy(stu[i+1].m_strName,stu[i].m_strName);
		   		strcpy(stu[i].m_strName,str);

					
			}
		}
		    	
	}
	
   
    
	for (i=0; i<*n; i++)
	{
		printf("%d:\n",i+1);
		printf("%s,%lf\n", stu[i].m_strName, stu[i].m_fMathScore);	
	}

	
	
	return (i);
	return (a);
	return (c);
		
}

//Ӣ��ɼ�����
int EnglishArray(struct Student stu[], int *n)
{
	int i;
	int a;
	int c;
	double temp;
	char str[20];

	
	
	for (a=*n; a>=0; a--)
	{	
		for (i=0; i<*n-1; i++)
	   	{
	    	if(stu[i].m_fEnglishScore < stu[i+1].m_fEnglishScore)
	    	{
	    		temp=stu[i+1].m_fEnglishScore;
		   		stu[i+1].m_fEnglishScore = stu[i].m_fEnglishScore;
		   		stu[i].m_fEnglishScore = temp;

		   		strcpy(str,stu[i+1].m_strName);
		   		strcpy(stu[i+1].m_strName,stu[i].m_strName);
		   		strcpy(stu[i].m_strName,str);

				
			}
	  	}
   	}
   	
    
   	for (i=0; i<*n; i++)
   	{
		printf("%d:\n",i+1);
	 	printf("%s,%lf", stu[i].m_strName, stu[i].m_fEnglishScore);	
	}

	

	return (i);
	return (a);
	return (c);
	
}

//C���Գɼ�����
int CArray(struct Student stu[], int *n)
{
	int i;
	int a;
	int c;
	double temp;
	char str[20];

	
	
	for (a=*n; a>=0; a--)
	{	
    	for (i=0; i<*n-1; i++)
	   	{
	    	if(stu[i].m_fCScore < stu[i+1].m_fCScore)
	    	{
	    		temp=stu[i+1].m_fCScore;
		   		stu[i+1].m_fCScore = stu[i].m_fCScore;
		   		stu[i].m_fCScore = temp;

		   		strcpy(str,stu[i+1].m_strName);
		   		strcpy(stu[i+1].m_strName,stu[i].m_strName);
		   		strcpy(stu[i].m_strName,str);

		
			}			
	   	}
   	}
   	
    
   	for (i=0; i<*n; i++)
   	{
		printf("%d:\n",i+1);
	 	printf("%s,%lf", stu[i].m_strName, stu[i].m_fCScore);	
	}

		

	return (i);
	return (a);
	return (c);

}

//��ѯĳ��ѧ���ĳɼ� 
int Search(struct Student stu[], int *n)
{
	int i;
	char number[20];
	char name[20];
	FILE *fp;

	scanf("%s",number);
	scanf("%s",name);
	if ((fp = fopen("D:\\1.txt", "r")) == NULL)
	{
		puts("�Ҳ����ļ�");
		exit(1);
	}
				
	for (i=0;i<*n;i++)
	{	
		if(strcmp(number ,stu[i].m_strNum) == 0 && strcmp(name, stu[i].m_strName) == 0)
		{  
		   	printf("%5lf\n%5lf\n%5lf\n", stu[i].m_fMathScore, stu[i].m_fEnglishScore, stu[i].m_fCScore);
		}
	}

	fclose(fp);

	return(i);
}

//�������Ŀ�������Ƶ�ѧ������
int Count(struct Student stu[], int *n)
{
	int i; 
	int k;
	k=0;

	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "r")) == NULL)
	{
		puts("�Ҳ����ļ�");
		exit(1);
	}
		    
	for (i=0; i<*n; i++)
	{
		if(stu[i].m_fMathScore<60)
		{
		    k++;
		}
		    
		
			
		if(stu[i].m_fEnglishScore<60)
		{
			k++;
		}
			
		if(stu[i].m_fCScore<60)
		{
			k++;
		}
			
		if(k>=3)
		{
			printf("%s\n", stu[i].m_strNum);
	    	printf("%s\n", stu[i].m_strName);
		}
	}	

	fclose(fp);

	return(i);
	return(k);		
}

//����ͬѧ��Ϣ
int Output(struct Student stu[], int *n)						
{
	int i;

	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "r")) == NULL)
	{
		puts("�Ҳ����ļ�");
		exit(1);
	}

	for (i=0; i<*n; i++)
	{
		printf("���֣�%s\n", stu[i].m_strName);
		printf("ѧ�ţ�%s\n", stu[i].m_strNum);
		printf("ѧ�ţ�%s\n", stu[i].m_strSex);
		printf("����, %d\n",stu[i].m_nAge);
		printf("C���ԣ�%lf\n", stu[i].m_fCScore);	
		printf("Ӣ�%lf\n", stu[i].m_fEnglishScore);
		printf("��ѧ��%lf\n", stu[i].m_fMathScore);	
	}

	if (*n == 0)
	{
		printf("\n");
		printf("\n");
		printf("��δ¼��ѧ���ɼ����밴��������ʾ����\n");
	}

	fclose(fp);

	return (i);
}
