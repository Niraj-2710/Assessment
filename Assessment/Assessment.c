// Create an application that can perform all string related operations

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverseString(char str[])
{
    int i=0,j,len=strlen(str);
    for(j=len-1;i<j;j--)
	{
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
    }
    printf("\n\n\t Reversed string: %s\n",str);
}
void concatenateStrings(char str1[],char str2[])
{
    strcat(str1,str2);
    printf("\n\n\t Concatenated string: %s\n",str1);
}
int isPalindrome(char str[])
{
    int i,j,len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
	{
        if(str[i]!=str[j])
            return 0;
    }
    return 1;
}
void copyString(char str1[],char str2[])
{
    strcpy(str1,str2);
    printf("\n\n\t Copied string : %s\n",str1);
}
int stringLength(char str[])
{
    int len = strlen(str);
    printf("\n\n\t Length of the string: %d\n",len);
    return len;
}
int characterFrequency(char str[],char ch)
{
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==ch)
            count++;
    }
    printf("\n\n\t Frequency of '%c' : %d\n",ch,count);
    return count;
}
void countVowelsConsonants(char str[])
{
    int i,vowels=0,consonants=0;
    for(i=0;str[i]!='\0';i++)
	{
        char ch=tolower(str[i]);
        if(ch=='a'&&'A' || ch=='e'&&'E' || ch=='i'&&'I' || ch=='o'&&'O' || ch=='u'&&'U')
            vowels++;
        else if(isalpha(ch))
            consonants++;
    }
    printf("\n\n\t Vowels : %d, Consonants : %d\n",vowels,consonants);
}
void countSpacesDigits(char str[])
{
    int i,spaces=0,digits=0;
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==' ')
		{
            spaces++;
		}
		else if(isdigit(str[i]))
		{
            digits++;
        }
    }
    printf("\n\n\t Spaces : %d, Digits : %d\n",spaces,digits);
}


main()
{
    char str[100],str2[100];
    int choice,continue_op=1;

    while(continue_op)
	{
        printf("\n\n\t ----- Main Menu -----\n");
        printf("\n\n\t 1. Reverse a string :\n");
        printf("\n\n\t 2. Concatenate strings :\n");
        printf("\n\n\t 3. Check for palindrome :\n");
        printf("\n\n\t 4. Copy a string :\n");
        printf("\n\n\t 5. Find string length :\n");
        printf("\n\n\t 6. Find character frequency :\n");
        printf("\n\n\t 7. Count vowels and consonants :\n");
        printf("\n\n\t 8. Count spaces and digits :\n");
        printf("\n\n\t Please Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
		{
            case 1:
                printf("\n\n\t Enter a string : ");
                scanf("%s",&str);
                reverseString(str);
                break;
            case 2:
                printf("\n\n\t Enter first string : ");
                scanf("%s",&str);
                printf("\n\n\t Enter second string : ");
                scanf("%s",&str2);
                concatenateStrings(str,str2);
                break;
            case 3:
                printf("\n\n\t Enter a string : ");
                scanf("%s",&str);
                if(isPalindrome(str))
                    printf("\n\n\t The string is a palindrome.\n");
                else
                    printf("\n\n\t The string is not a palindrome.\n");
                break;
            case 4:
                printf("\n\n\t Enter a string : ");
                scanf("%s",&str2);
                copyString(str,str2);
                break;
            case 5:
                printf("\n\n\t Enter a string : ");
                scanf("%s",&str);
                stringLength(str);
                break;
            case 6:
                printf("\n\n\t Enter a string : ");
                scanf("%s",&str);
                char ch;
                printf("\n\n\t Enter a character : ");
                scanf(" %c",&ch);
                characterFrequency(str,ch);
                break;
            case 7:
                printf("\n\n\t Enter a string : ");
                scanf("%s",str);
                countVowelsConsonants(str);
                break;
            case 8:
                printf("\n\n\t Enter a string : ");
                scanf("%d",&str);
                gets(str);
                countSpacesDigits(str);
                break;
            default:
                printf("\n\n\t Invalid choice!\n");
        }
        printf("\n\n\t Do you want to continue(any number for yes, 0 for no)? - ");
        scanf("%d",&continue_op);
    }
}
