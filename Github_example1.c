#include<stdio.h>
#include<string.h>

	int main()
	{
		FILE *ptr_file;
		char buf[1000];
		int x;
		unsigned long length;
		int holder[10];

		printf("opening up file output.text\n");
		ptr_file =fopen("/Users/rockfordfaurot/Documents/Programing/C/output.txt", "r");
		
		if (!ptr_file)
		{
			printf("fopen was unsuccesfull.\n");
			return 1;
		}
		printf("Test\n");
		
		while(fgets(buf,1000,ptr_file)!=NULL)
		{
			x++;
			length = strlen(buf);
			printf("the string length is %lu\n", length);
		}
		
		fclose(ptr_file);
		printf("The number of lines in the file is: %d\n", x);
		return  0;
	}