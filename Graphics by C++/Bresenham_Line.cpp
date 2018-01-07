#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int bresenham_line(int x1, int y1, int xn, int yn)
{
    int dx, dy, d, incE, incNE;
    int p1=x1, q1=y1, p2=xn, q2=yn;

    dx = xn-x1;
    dy = yn-y1;
    d  = 2*dy-dx;
    incE= 2*dy;
    incNE= 2*(dy-dx);

    do
    {
        putpixel(x1, y1, GREEN);
        if(d<=0)
        {
            d = d+incE;
            x1++;
        }
        else
        {
            d = d+incNE;
            x1++;
            y1++;
        }
    }while(x1<xn);
    delay(5);

    outtextxy(p1+5, q1+5, "(x1,y1)");
    outtextxy(p2+5, q2+5, "(x2,y2)");
}

int main()
{
    int gd=DETECT, gm;
    int x1, y1, xn, yn;
    initgraph(&gd, &gm, "c:\\TurboC3\\BGI");

    cout<<"Enter starting Coordinate: "<<endl;
    cin>>x1>>y1;
    cout<<"Enter ending Coordinate: "<<endl;
    cin>>xn>>yn;

    bresenham_line(x1, y1, xn, yn);
    getch();
}
