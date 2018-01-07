#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"C:\\TurboC3\\BGI");
    int x, y, flag=0;

    x=getmaxx()/2;
    y=30;

    while(1)
    {
        if(y>=getmaxy()-30 || y<=30)
            flag = !flag;
        circle(x, y, 30);
        floodfill(x, y, GREEN);
        setcolor(GREEN);
        setfillstyle(SOLID_FILL, GREEN);
        delay(50);
        cleardevice();

        if(flag)
        {
            y = y + 5;
        }
        else {
                y = y - 5;
            }
    }

    getch();
}
