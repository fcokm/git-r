#include <iostream>
#include <windows.h>
#difine 
using namespace std;


/*


*/

class a_type{
      double a,b;
    public :
      a_type(double x, double y)
      {a=x; b=y; }       

      

void show(){
     cout<<a<<""<<b<<endl;
     
     }
};


int main()
{
   a_type ob[2][5]={
        a_type(2,4), a_type(3,1), a_type(12,5),a_type(9,7),a_type(11,5),
        a_type(17,2),a_type(8,1),a_type(19,7),a_type(17,10),a_type(2,9)       
      
          };
          
    // a_type *p; 
     //p=&ob[0][0];    
 
      for(int i=0;i<2;i++) {
      for(int j=0;j<5;j++)
    ob[i][j].show();
}
    
    
    //p->show();
   // p++;


	system("pause");
	return 0;
}
