#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define M 9
#define P 11
int main()
{
    FILE *fp;
    FILE *co; //���������ļ�ָ�������ļ�
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0; //��������int���͵ı����ֱ�洢��ĸ������������ͷ������
    int j, m;
    //int i = 0; //��ʼ��forѭ���ļ�������
    char ch; //����һ��char���洢�ļ���ÿһ���ַ�
    char *filename_1 = "C://Users//Microsoft//Desktop//text.txt";
    char *filename_2 = "C://Users//Microsoft//Desktop//counts.txt"; //�����ļ���·��
    char num_1[M] = "+-=*/<>#";
    char num_2[P] = ".,;(){}[]"; //ͳ�Ʒ���������������
    //char buf[N + 1];              //�洢�����ļ����ַ�����

    if ((fp = fopen(filename_1, "r")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    }
    if ((co = fopen(filename_2, "a")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    } //�ж��ļ��򿪳ɹ�û��

    while (!feof(fp))
    {
        ch = fgetc(fp); //��ȡfp��ָ�ļ���һ���ַ�����ֵ��ch
        if (isdigit(ch))
        {
            count_4++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            count_1++;
        }
        for (m = 0; m < M - 1; m++)
        {
            if (num_1[m] == ch)
            {
                count_2++;
            }
        }
        for (j = 0; j < P - 1; j++)
        {
            if (num_2[j] == ch)
            {
                count_3++;
            }
        }
        fputc(ch, co); //��ch���洢д�뵽co��ָ���ļ�

        //buf[i] = ch;   //��ch���洢���ַ���ֵ��buf����
        //i++;
    }
    fprintf(co,"\n%s������ĸΪ��%d��\n", filename_1, count_1);
    fprintf(co,"%s�����������%d��\n", filename_1, count_2);
    fprintf(co,"%s�����ָ���Ϊ��%d��\n", filename_1, count_3);
    fprintf(co,"%s��������Ϊ��%d��\n", filename_1, count_4); 
    //lenth = strlen(buf);
    // printf("%s�������ַ���\n%s\n", filename_1, buf); //����ļ����ݺ��ַ���С
    // printf("%s��%d���ַ�\n", filename_1, lenth - 1); //����ļ��ַ�����

    // for (i = 0; i < N; i++)
    // {
    //     if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z'))
    //     {
    //         count_1++;
    //     }
    //     for (m = 0; m < M - 1; m++)
    //     {
    //         if (num_1[m] == buf[i])
    //         {
    //             count_2++;
    //         }
    //     }
    //     for (j = 0; j < P - 1; j++)
    //     {
    //         if (num_2[j] == buf[i])
    //         {
    //             count_3++;
    //         }
    //     }
    //����forѭ��ͳ����ĸ����������ָ�������

    printf("%s������ĸΪ��%d��\n", filename_1, count_1);
    printf("%s�����������%d��\n", filename_1, count_2);
    printf("%s�����ָ���Ϊ��%d��\n", filename_1, count_3);
    printf("%s��������Ϊ��%d��\n", filename_1, count_4); //��������ַ�������
    fclose(fp);
    fclose(co); //�ر������ļ�
    getchar();  //��ֹexe�ļ����ˣ���ȡһ������

    return 0;
}