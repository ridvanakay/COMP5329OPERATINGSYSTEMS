#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tracert
{
char ip_address[27];
char hope1[8];
char hope_2[8];
char hope_3[8];
char des_ip_address[27];
};
int main()
{
FILE *fptr;
fptr = fopen("tracert.txt","w");
if(fptr== NULL)
{
fprintf(stderr,"\n Error opened file\n");
exit(1);
}
struct tracert input1={ "[2404:6800:4007:816::200e] ", "447 ms"," 3 ms"," 4 ms ","2401:4900:376a:6e68::c0\n"};
struct tracert input2={ "[2404:6800:4007:816::200e] ", "58 ms"," 93 ms"," 61 ms ","2401:4900:c0:1::1e1\n"};
fwrite(&input1,sizeof(struct tracert),1,fptr);
fwrite(&input2,sizeof(struct tracert),1,fptr);
if(fwrite!=0)
printf("contents to file written successfully\n");
else
printf("Error in Writing\n");
  
fclose(fptr);
return 0;
}