//学生成绩管理系统
//时间 2018.03.07
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
		printf("****        0.录入学生信息        ****\n");
		printf("****        1.数学成绩排名        ****\n");
		printf("****        2.退出或者返回        ****\n");
		printf("****        3.英语成绩排名        ****\n");
		printf("****        4。C语言成绩排名      ****\n");
		printf("****      5.查询某个学生的成绩    ****\n");
		printf("****6.不及格科目超过两科的学生名单****\n");
		printf("****        7.修改学生信息        ****\n");
		printf("****        8.所有学生信息        ****\n");
		printf("**************************************\n");
	
		scanf("%d", &word);
		
		switch(word)
		{
			case 0:
				
				Input(p,&n);
				printf("输入数学分数\n");
				MathInput(p, &n);
			
				printf("输入英语分数\n");
				EnglishInput(p, &n);
			
				printf("输入C语言分数\n");
				CInput(p, &n);

				printf("按1返回，按任意键继续\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
				
			case 1:
		
				MathArray(p, &n);

				printf("按1返回，按任意键继续\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
	
			case 2:
	
				printf("按1返回，按任意键继续\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
				
				break;
	
			case 3:
	    		
				EnglishArray(p, &n);

				printf("按1返回，按任意键继续\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
		
			
	    	case 4:
	    		
				CArray(p, &n);
			
				printf("按1返回，按任意键继续\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
			
				break;
	
			case 5:
				
				Search(p, &n);
				
				printf("按1返回，按任意键继续\n");
		    	scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}
				
				break;

			case 6:
		
		    	Count(p, &n);
					
				printf("按1返回，按任意键继续\n");
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}	
				
		   	 	break;

			case 7:

				Revise(p, &n);
		 
				printf("按1返回，按任意键继续\n");
							
				scanf("%d", &q);
				if(q == 1)
				{
					w++;
				}

				break;

			case 8:

				Output(p, &n);

				printf("按1返回，按任意键继续\n");
							
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
	
	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					//打开文件
		{
			puts("找不到文件");
			exit(1);
		}
		
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		//录入
	{
	}

	printf("请输入全体学生的人数\n"); 
	scanf("%d", &*n);
	printf("请输入各学生的信息:\n");
	
	for (i=0; i<*n; i++)
	{
		printf("请输入第%d个学生的信息\n",i+1);
    	printf("学号\n");
    	scanf("%s", stu[i].m_strNum);
    	printf("名字\n");
    	scanf("%s", stu[i].m_strName);
    	printf("性别\n");
    	scanf("%s", stu[i].m_strSex);
    	printf("年龄\n");
    	scanf("%d", &stu[i].m_nAge);
    }

	    
	fclose(fp);

    for (i=0; i<*n; i++)
    {
    	printf("第%d个学生:\n",i+1);
    	printf("学号  名字  性别  年龄\n");
    	printf("%5s%5s%5s%5d\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge);
	}
	fclose(fp);
	return (i);
}


//修改学生信息 

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
	printf("** 1.   添加    **\n");
	printf("** 2.   删除    **\n");
	printf("** 3.   修改    **\n");
	printf("******************\n");
			
	scanf("%d",&z);

	switch(z)
	{
		case 1:

			int c;
			int i;
			
			printf("增加 人\n");
			scanf("%d", &c);
			(*n)=(*n)+c;
					
			if ((fp = fopen("D:\\1.txt", "a")) == NULL)					
				{
					puts("找不到文件");
					exit(1);
				}
				
			for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		
			{
			}
			
			for (i=*n-c; i<*n; i++)
			{

				printf("请输入第%d个学生的信息\n",i+1);
    			printf("学号\n");
    			scanf("%s", stu[i].m_strNum);
    			printf("名字\n");
    			scanf("%s", stu[i].m_strName);
    			printf("性别\n");
    			scanf("%s", stu[i].m_strSex);
    			printf("年龄\n");
    			scanf("%d", &stu[i].m_nAge);
				printf("数学成绩\n");
				scanf("%lf", &stu[i].m_fMathScore);
				printf("英语成绩\n");
				scanf("%lf", &stu[i].m_fEnglishScore);
				printf("C语言成绩\n");
				scanf("%lf", &stu[i].m_fCScore);
			}
    
			fclose(fp);

			for (i=0; i<*n; i++)
			{
    			printf("第%d个学生:\n",i+1);
    			printf("学号  名字  性别  年龄  数学成绩  英语成绩  C语言成绩\n");
    			printf("%5s%5s%5s%5d%5lf%5lf%5lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fMathScore, stu[i].m_fCScore);
			}

			break;	
				
		case 2:
	
			f = 0;
			
			if ((fp = fopen("D:\\1.txt", "r")) == NULL)
			{
				puts("找不到文件");
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
				puts("找不到文件");
				exit(1);
			}
			
			for (j=0; j<*n; j++)
			{
				if (j == a)
				{
					printf("\n");
					printf("\n");
					printf("学号为%s的同学信息已删除", num);
				
				}
				else
				{
					fwrite(&stu[j], sizeof(struct Student), 1, fp);					//将未删除的学生成绩全部写回文件
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
				puts("找不到文件");
				exit(1);
			}
			
			scanf("%s",&num);

			for (i=0; fread(&stu[i], sizeof(struct Student), 1 , fp); i++)
			{
				if (strcmp(num, stu[i].m_strNum) == 0)								//根据学号找到所需要的学生信息
				{	
					printf("该同学信息为：\n");
					printf("姓名  %s\n", stu[i].m_strName);
					printf("学号  %s\n", stu[i].m_strNum);
					printf("性别  %s\n", stu[i].m_strSex);
					printf("年龄  %d\n", stu[i].m_nAge);
					printf("英语：%lf\n", stu[i].m_fEnglishScore);
					printf("数学：%lf\n", stu[i].m_fMathScore);
					printf("C语言：%lf\n", stu[i].m_fCScore);
					
					a = i;
					
					f = 1;
				}
			}
	
			fclose(fp);
			
			printf("学号\n");
    		scanf("%s", stu[i].m_strNum);
    		printf("名字\n");
    		scanf("%s", stu[i].m_strName);
    		printf("性别\n");
    		scanf("%s", stu[i].m_strSex);
    		printf("年龄\n");
    		scanf("%d", &stu[i].m_nAge);
			printf("数学分数\n");
			scanf("%lf", &stu[i].m_fMathScore);	
			printf("英语分数\n");
			scanf("%lf", &stu[i].m_fEnglishScore); 
			printf("C语言分数\n");
			scanf("%lf", &stu[i].m_fCScore);  
			
			if ((fp = fopen("D:\\1.txt", "w")) == NULL)
			{
				puts("找不到文件");
				exit(1);
			}
			
			for (j=0; j<*n; j++)
			{
				fwrite(&stu[j], sizeof (struct Student), 1, fp);				//将修改完以及没有修改的学生成绩全部写回文件
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

//输入数学分数
int MathInput(struct Student stu[], int *n) 
{
	int i;
	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					
	{
		puts("找不到文件");
		exit(1);
	}
	
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)	
	{
	}
	
	for (i=0; i<*n; i++)
	{			
        printf("数学分数\n");
        scanf("%lf", &stu[i].m_fMathScore);		
    }	
         
	fclose(fp);

    printf("学号  名字  性别  年龄  数学成绩 \n");	
    		
    for (i=0; i<*n; i++)
    {
    	printf("%5s%5s%5s%5d%12lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fMathScore);
	}
			
	return (i);
}

//输入英语分数
int EnglishInput(struct Student stu[], int *n)
{
	int i;
	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					//打开文件
	{
		puts("找不到文件");
		exit(1);
	}
		
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		//录入
	{
	}

	for (i=0; i<*n; i++)
    {
	    printf("英语分数\n");
        scanf("%lf", &stu[i].m_fEnglishScore);  	
    }	
        
	fclose(fp);
    printf("学号  名字  性别  年龄  英语成绩  \n");	
       	 
    for (i=0; i<*n; i++)
    {
        printf("%5s%5s%5s%5d%5lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fEnglishScore);
	}
			
	return (i);
}

//输入C语言分数
int CInput(struct Student stu[], int *n)
{
	int i;
	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "a")) == NULL)					//打开文件
	{
		puts("找不到文件");
		exit(1);
	}
	
	for (i=0; fread(&stu[i], sizeof(struct Student), 1, fp); i++)		//录入
	{
	}
	
	for (i=0; i<*n; i++)
    { 
	    printf("C语言分数\n");
        scanf("%lf", &stu[i].m_fCScore);  
    }   
            
	fclose(fp);

    printf("学号  名字  性别  年龄  C语言成绩  \n");
				
    for (i=0; i<*n; i++)
    {
       	printf("%5s%5s%5s%5d%5lf\n", stu[i].m_strNum, stu[i].m_strName, stu[i].m_strSex, stu[i].m_nAge, stu[i].m_fCScore);
	}
	
	return (i);
	
}

//数学成绩排名
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

//英语成绩排名
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

//C语言成绩排名
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

//查询某个学生的成绩 
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
		puts("找不到文件");
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

//不及格科目超过两科的学生名单
int Count(struct Student stu[], int *n)
{
	int i; 
	int k;
	k=0;

	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "r")) == NULL)
	{
		puts("找不到文件");
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

//所有同学信息
int Output(struct Student stu[], int *n)						
{
	int i;

	FILE *fp;

	if ((fp = fopen("D:\\1.txt", "r")) == NULL)
	{
		puts("找不到文件");
		exit(1);
	}

	for (i=0; i<*n; i++)
	{
		printf("名字：%s\n", stu[i].m_strName);
		printf("学号：%s\n", stu[i].m_strNum);
		printf("学号：%s\n", stu[i].m_strSex);
		printf("年龄, %d\n",stu[i].m_nAge);
		printf("C语言：%lf\n", stu[i].m_fCScore);	
		printf("英语：%lf\n", stu[i].m_fEnglishScore);
		printf("数学：%lf\n", stu[i].m_fMathScore);	
	}

	if (*n == 0)
	{
		printf("\n");
		printf("\n");
		printf("还未录入学生成绩，请按照以下提示操作\n");
	}

	fclose(fp);

	return (i);
}
