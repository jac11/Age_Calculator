#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int Bday    , BMonths  ,  Byears   ;
int Cday    , CMonths  ,  Cyears   ;
int resultday  , resultMonths ,  resultyears ;

int info(void);
int Opretion(int , int ,int , int ,int ,int) ;


int info(void){
          
        printf ("[*]Birthday Value dd/MM/YYYY ............... |  ");

        scanf("%d"  , & Bday)   ;  
        scanf("%d"  , & BMonths);
        scanf("%d"  , & Byears );
        if (Bday  >= 32 || BMonths >= 13 ){
                
                printf("[*]Birthday Value dd/MM/YYYY ............... |  Format not Correct \n");
                return info();
        }         
        printf ("\n\n day  -  Months - years \n\n");

        printf("%4d   " , Bday)   ;
        printf("%6d   " , BMonths);
        printf("%5d   " , Byears) ;
        printf("\n\n");

        printf ("[*]Current Data Value  dd/MM/YYYY ........... |  ");

        scanf("%d" ,  & Cday)   ; 
        scanf("%d" ,  & CMonths);
        scanf("%d" ,  & Cyears ) ;
        if (Cday >= 32 || CMonths >=13){
             
                printf("[*]Current Data Value  dd/MM/YYYY ........... |  Format not Correct  \n");
                return info();
        }        
        printf ("\n\n day  -  Months - years \n\n");
        printf("%4d    " , Cday)   ;
        printf("%6d    " , CMonths);
        printf("%4d    " , Cyears) ;

        return (0);
}
int Opretion(int Bday,int BMonths,int Byears,int Cday,int CMonths,int Cyears){

        if (Cday >= Bday ){            
            resultday = Cday - Bday ;
        }
        else {
            if(Cday < Bday){
                if (Cday == 31){                   
                    Cday  = Cday + 31 ;
                }else{
                   Cday  = Cday + 30 ;
                }
                CMonths  = CMonths - 1 ;
                resultday = Cday - Bday ;
                if (CMonths == 0 ){
                    CMonths = CMonths +12;
                    Cyears -1;
                }
            }               
        }
        
        if (CMonths >= BMonths){
                 resultMonths = CMonths - BMonths ;
        }
        else{
          if (CMonths == 0 || CMonths < BMonths ){
               CMonths = CMonths +12;
               Cyears  = Cyears -1 ;
               resultMonths = CMonths - BMonths ;      
          }
        }
        
        if( Cyears > Byears  ||Cyears == Byears ){
             resultyears =  Cyears - Byears;
        }else{
            if (Cyears < Byears){
                 resultyears =  Cyears - Byears;
            }   
        }
            return 0 ;
}
int main (){

        printf("\n");
        printf("===================================\n");    
        printf("    Welcome To Days Calculator    \n" ); 
        printf("===================================\n\n");
        sleep(1);

        info();
        Opretion(Bday,BMonths,Byears,Cday,CMonths,Cyears);
        
        printf("\n==================================\n");
        printf("            the Resulet              \n");
        printf("====================================");

        printf ("\n\n days  -  Months - years \n\n");
        printf ("%4d   ",resultday)   ;
        printf("%6d    " ,resultMonths);
        printf("%4d    " ,resultyears) ;

}




