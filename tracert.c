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
struct tracert input1={ "[pencarisyair.com] ", "447 ms"," 3 ms"," 4 ms ","2401:4900:376a:6e68::c0\n"};
struct tracert input2={ "[nomorkeluaran.com] ", "58 ms"," 93 ms"," 61 ms ","2401:4900:c0:1::1e1\n"};
struct tracert input3={ "[inspiringnhkids.com] ", "545 ms"," 102 ms"," 86 ms ","2401:4900:c0b5:1::c05\n"};
struct tracert input4={ "[mangatopnew.com] ", "42 ms"," 73 ms"," 51 ms ","2401:4900:c0d5:1::1k1\n"};
struct tracert input5={ "[kitchenmissus.com] ", "24 ms"," 23 ms"," 41 ms ","2401:4900:c0:1::1e1\n"};
fwrite(&input1,sizeof(struct tracert),1,fptr);
fwrite(&input2,sizeof(struct tracert),1,fptr);
fwrite(&input3,sizeof(struct tracert),1,fptr);
fwrite(&input4,sizeof(struct tracert),1,fptr);
fwrite(&input5,sizeof(struct tracert),1,fptr);
if(fwrite!=0)
printf("contents to file written successfully\n");
else
printf("Error in Writing\n");
  
fclose(fptr);
return 0;
}