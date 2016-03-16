#include<stdio.h>
#include<string.h>
char index1[10][10],index2[10][10];

int asciisum(char* str)
{

    int i,res=0;
    for(i=0;str[i]!='\0';i++)
    {
        res = res+str[i];
    }
    return res;
}

int duplicate(char* str,int ind)
{

    int i=0,flag=0;
    if(ind==1)
    {
        for(i=0;index1[i][0]!='\0';i++)
        {
            if(strcmp(index1[i],str)==0)
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        for(i=0;index2[i][0]!='\0';i++)
        {
            if(strcmp(index2[i],str)==0)
            {
                flag = 1;
                break;
            }
        }


    }
    return flag;
}

int main()
{
    int i,j=0,k=-1,count=0;
    char c,sent1[]="this is a sentence";
    char sent2[]="hist hits si a senteecn";
    char temp[20];
    for(i=0;sent1[i]!='\0';i++)
    {
        if(sent1[i]==' ')
        {
            j=0;
            if(duplicate(temp,1)==0)
            {

                k++;
                strcpy(index1[k],temp);
                index1[k+1][0]='\0';

            }
        }
        else
        {
            temp[j]=sent1[i];
            temp[++j]='\0';

        }
    }
    if(duplicate(temp,1)==0)
            {

                k++;
                strcpy(index1[k],temp);
                index1[k+1][0]='\0';

            }

    k=-1;
    j=0;

    for(i=0;sent2[i]!='\0';i++)
    {
        if(sent2[i]==' ')
        {
            j=0;
            if(duplicate(temp,2)==0)
            {

                k++;
                strcpy(index2[k],temp);
                index2[k+1][0]='\0';

            }
        }
        else
        {
            temp[j]=sent2[i];
            j++;
            temp[j]='\0';
        }
    }

    if(duplicate(temp,2)==0)
    {

                k++;
                strcpy(index2[k],temp);
                index2[k+1][0]='\0';

    }
    for(i=0;index1[i][0]!='\0';i++)
    {

        count=0;
        for(j=0;index2[j][0]!='\0';j++)
        {
            if(asciisum(index1[i])==asciisum(index2[j]))
            {
                count++;
            }
        }
        printf("\nWord : %s Anagram Count : %d",(index1+i),count);
    }
    return 0;
}
