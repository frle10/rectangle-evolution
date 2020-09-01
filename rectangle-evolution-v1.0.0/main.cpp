#include <iostream>
#include <cstdlib>
#include <winbgim.h>

using namespace std;

int main()
{
    int gdriver=9;
    int gmode=2;
    int x=290;
    int y=235;
    int odgovor;
    initgraph(&gdriver,&gmode,"");
    setbkcolor(WHITE);
    setcolor(BLACK);
    cleardevice();
    while(odgovor != 27)
    {
                  rectangle(x,y,x+60,y+10);
                  odgovor=getch();
                  if(odgovor == 75)
                  {
                              x=x-5;
                  }
                              if(odgovor == 77)
                              {
                                         x=x+5;
                              }
                                         if(odgovor == 72)
                                         {
                                                    y=y-5;
                                         }
                                                    if(odgovor == 80)
                                                    {
                                                               y=y+5;
                                                    }
                                                    cleardevice();
    }
                                                               closegraph();
                                                               return 0;
}
