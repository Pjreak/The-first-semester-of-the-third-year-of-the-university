#include<stdio.h>
#include<stdlib.h>
int num_later,num_data,num_operator,num_separator;//�ֱ��ʾ��ĸ�ַ�����ʮ���������ַ�����������ַ������ָ����� 
void Count_String(char ch){
	if((ch>='A'&&ch<='Z')||ch>='a'&&ch<='z'){
		num_later++;
	}
	else if(ch>='0'&&ch<='9'){
		num_data++;
	} 
	else if(ch=='+'||ch=='-'||ch=='*'||ch=='|'||ch=='<'||ch=='>'||ch=='='||ch=='#'){
		num_operator++;
	}
	else {
	
		if(ch=='.'||ch==','||ch==';'||ch=='`'||ch=='('||ch==')'||ch=='{'||ch=='}'||ch=='['||ch==']')
		num_separator++;
}
	}
	
	
int main(){
	char ch;
	FILE *fp1,*fp2;
	if((fp1=fopen("C://Users//Phreak//Desktop//test.txt","r"))==NULL){
		printf("file open failed!\n");
		exit(0);
	}//���ļ�fp1 
	if((fp2=fopen("C://Users//Phreak//Desktop//counts.txt","w"))==NULL){
		printf("file open failed!\n");
		exit(0);
	}
	while(!feof(fp1)){//��fp1�ж�ȡ�ַ���ÿ��ֻ��һ����ֱ�������ļ�ĩβ
     ch=fgetc(fp1);//���ַ� 
     putchar(ch);
	  Count_String(ch);//ͳ���ַ�����
	  fputc(ch,fp2) ;//�Ѷ������ַ�д������һ���ļ� 
		
	}
	// if(!fclose(fp1)){
	// 	printf("\n�ļ�fp1�رճɹ�\n");
		
	// } 
	// 	if(!fclose(fp2)){
	// 	printf("�ļ�fp2�رճɹ�\n");
		
	// } 
	printf("num_later=%d,num_data=%d,num_operator=%d,num_separator=%d",num_later,num_data,num_operator,num_separator);
	return 0;
}
