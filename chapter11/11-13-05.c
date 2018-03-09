/*********************************************************************
* title:	search character from a string. 
*	
* C primer Plus  charpter 11 exerices 11-13-05
* 2018/03/09
*********************************************************************/

#include <stdio.h>
#include<string.h>
#define LEN 80
char *get_word(char *str,int n);
char *search_ch(char *str,char ch,int n);
int main (void)
{
    char str[LEN];
    char tar;
    char *get_pt,*tar_pt;
    puts("Input a string:");
    get_pt = get_word(str,LEN);
    if(get_pt == NULL)
        puts("receive failed.");
    else
    {  
        while(getchar() != '\n')
            continue;
        puts("The string received is: ");
        puts(get_pt);
        puts("what do you want to search for?");
        while((scanf("%c",&tar) == 1) && (tar != '#'))
        {
            while(getchar() != '\n')
                continue;
            printf("search %c.\n",tar);
            tar_pt = search_ch(get_pt,tar,strlen(get_pt));
            if(tar_pt == NULL)
                printf("No %c here!!\n",tar);
            else
                printf("%c at %p.\n",tar,tar_pt);
            puts("Try again? or input # to quit!");

        }
    }
    puts("DONE!");
return 0;
}

char *get_word(char *str,int n)
{
    int ch;
    int i;
    for(i = 0;i < n;i++)
    {
        ch = getchar();
        if(ch != EOF && ch != '\n' && ch != ' ' && ch != '\t')
            *(str + i) = ch;
        else if(ch == EOF) 
            return NULL;
        else if(ch == ' ' || ch == '\t' || ch == '\n')
        {
            if(i > 0)
                break;
            else
            {
                i--;
                continue;
            }
        }
    }
    *(str + i) = '\0';
    return str;
}

char *search_ch(char *str,char ch,int n)
{
    int i,count;
    count = 0;

    for(i = 0;i < n;i++)
    {
        if(str[i] == ch)
        {
            count ++;
            return &str[i];
        }
        else
            ;
    }
    return NULL;
}


