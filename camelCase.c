#include <stdio.h>
void convert(char*res,int len,char*temp)
{
	int i,j;
	if(len==0)
	{
		res[len]=temp[0]+32;
	}
	else
	{
		res[len]=temp[0]-32;
	}
	for(i=len+1,j=1;temp[j]!='\0';i++,j++)
	{
	
		res[i]=temp[j];
	}
	res[i]='\0';
}
	
int main(void) {
	// your code goes here
	char res[50],temp[20];
	int len=0,i=0,j=0;
	char str[]="This will be a gud day";
	for(i=0,j=0;str[i]!='\0';i++)
	
	{
		if(str[i]!=' ')
		{
			temp[j]=str[i];
			j++;
		}
		else{
			temp[j]='\0';
		//	printf("%s %d\n",temp,j);
			convert(res,len,temp);
			len=len+j;
		//	printf("len = %d",len);
			j=0;
		}
		
	}
	temp[j]='\0';
	//printf("%s %d\n",temp,j);
	convert(res,len,temp);
	len=len+j;
		//	printf("len = %d",len);
	j=0;
	
	printf("%s",res);
	return 0;
}


