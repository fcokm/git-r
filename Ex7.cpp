#include <iostream>
#include <cstring>
using namespace std;

/*





*/




  char  reverse(char *str,int count){
             char g[4];
            
             for(int i=0;i<count;i++){
                    str[i]=str[count-i]; 
            cout <<str[i]<<endl;
            }
             
             }



int main()
{
char *s="Word";
int f=4;
reverse(s,f);
//printf("%s",reverse(s,f));
system("pause");
return 0;
}

