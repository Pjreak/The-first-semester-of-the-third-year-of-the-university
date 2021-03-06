#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define M 9
#define P 11
int main()
{
    FILE *fp;
    FILE *co; //定义两个文件指针来打开文件
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0; //定义三个int类型的变量分别存储字母数、运算符数和分配符数
    int j, m;
    //int i = 0; //初始化for循环的计数变量
    char ch; //定义一个char来存储文件的每一个字符
    char *filename_1 = "C://Users//Microsoft//Desktop//text.txt";
    char *filename_2 = "C://Users//Microsoft//Desktop//counts.txt"; //两个文件的路径
    char num_1[M] = "+-=*/<>#";
    char num_2[P] = ".,;(){}[]"; //统计符号类别的两个数组
    //char buf[N + 1];              //存储读入文件的字符数组

    if ((fp = fopen(filename_1, "r")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    }
    if ((co = fopen(filename_2, "a")) == NULL)
    {
        puts("Fail to open file!");
        exit(0);
    } //判断文件打开成功没有

    while (!feof(fp))
    {
        ch = fgetc(fp); //读取fp所指文件的一个字符并赋值给ch
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
        fputc(ch, co); //将ch所存储写入到co所指的文件

        //buf[i] = ch;   //将ch所存储的字符赋值给buf数组
        //i++;
    }
    fprintf(co,"\n%s包含字母为：%d个\n", filename_1, count_1);
    fprintf(co,"%s包含运算符：%d个\n", filename_1, count_2);
    fprintf(co,"%s包含分隔符为：%d个\n", filename_1, count_3);
    fprintf(co,"%s包含数字为：%d个\n", filename_1, count_4); 
    printf("%s包含字母为：%d个\n", filename_1, count_1);
    printf("%s包含运算符：%d个\n", filename_1, count_2);
    printf("%s包含分隔符为：%d个\n", filename_1, count_3);
    printf("%s包含数字为：%d个\n", filename_1, count_4); //输出各种字符的数量
    fclose(fp);
    fclose(co); //关闭两个文件
    getchar();  //防止exe文件闪退，读取一个输入

    return 0;
}