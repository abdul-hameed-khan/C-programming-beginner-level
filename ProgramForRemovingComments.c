#include<stdio.h>
#include<conio.h>

void check_comment(char c);
void singleLine();
void multiLine();
FILE *fp1,*fp2;
int glob = 0;
int main(void){
	char c;
	fp1=fopen("TestingFile.txt","r");
	fp2=fopen("TestingFile1.txt","w");
	
	while((c=fgetc(fp1))!=EOF){
		check_comment(c);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	char ch;
	
//	FILE *fp1,*fp2;
//    int flag=0;
//    fp1=fopen("TestingFile.txt","r");
//    fp2=fopen("NewFile.txt","w");
//	if(fp1==NULL)
//    {
//        printf("Error while opening a file for reading");
//        return 0;
//    }
//    if(fp2==NULL)
//    {
//        printf("Error while opening a file for reading");
//        return 0;
//    }
//    
//    while((ch=fgetc(fp1))!=EOF)
//    {
//	if(flag==0)
//        {
// 
//            if((ch==13)||(ch==10))
//            {
//                continue;
//            }
//            else if((ch!=' '))
//            {
//               fputc(ch,fp2);
//            }
//        }
//    }
//    fclose(fp1);
//    fclose(fp2);
//    remove("TestingFile.txt");
//    rename("NewFile.txt","TestingFile.txt");
    
	printf("\n\n **********Code without white spaces and comments********** \n");
	fp1=fopen("TestingFile2.txt","r");
    while((ch=fgetc(fp1))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp1);
	
	
	if(glob!=0){
		printf("\n\nYes, there is a single line comment in file");
	}
	if(glob!=0){
		printf("\n\nYes, there is a multi-line comment in file");
	}
	
	return 0;
}

int i;
void check_comment(char c){
	char ch;
	
	if(c=='n'){
	 i= i+1;
	 	
	}
	if( c == '/')
    {
        if((ch=fgetc(fp1))=='*'){
		i=i+1;
         multiLine(i);
		}
        else if( ch == '/')
        {
		  i=i+1;
          singleLine(i);
        }
        else
        {
            fputc(c,fp2);
            fputc(ch,fp2);
        }
    }
    else
        fputc(c,fp2);
}


void singleLine(int i){
	char d;
    while((d=fgetc(fp1))!=EOF)
    {	
    	
    	if(d=='\n'){
    		glob++;
    		 printf("Single Comment remove From %d Line\n",i);
    		 return;
		}
    }
}


void multiLine(int i){
	 char d,e;
    while((d=fgetc(fp1))!=EOF) 
    {
    	if(d)
        if(d=='*')
        {
            e=fgetc(fp1);

            if(e=='/'){
				glob++;
				printf("MultiLine Comment remove From %d Line\n",i);

				return;
			}       
        }
   }
}
