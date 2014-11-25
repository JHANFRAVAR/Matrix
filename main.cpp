#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
    srand((unsigned)time( NULL )); 
    system("Color 2");
    int intMat[10][20];
    int intContf, intContc, intNum=0;
    srand((unsigned)time( NULL )); 
    for (intContf=0; intContf<10; intContf++)
    {
     for(intContc=0; intContc<20; intContc++)
     {
      intMat[intContf][intContc]=(rand()%99);
      cout <<intMat[intContf][intContc]<<",\t";
     }
     cout<<"\n";
    }
    for (intContc=1; intContc<20; intContc+2)
    {
     for(intContf=1; intContf<10; intContf++)
     {
      
      intNum=intMat[intContf][intContc]+intNum;
      cout<<intNum;
      intNum=0; 
     }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
    
