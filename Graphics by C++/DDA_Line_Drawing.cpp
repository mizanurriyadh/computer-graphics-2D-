#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

float slope;

void ddaline(int x1,int y1,int xn,int yn)
{
    int p1=x1, p2=xn, q1=y1, q2=yn;
    int i;
    float dx, dy;

    slope = (yn-y1)/(xn-x1);

    for(i=x1; i<xn; i++)
    {
    if(slope<=1)
    {
        dx = 1;
        dy = slope;
    }
    else
    {
        dy = 1;
        dx = 1/slope;
    }

    x1 = x1 + dx;
    y1 = y1 + dy;

    putpixel(round(x1), round(y1), RED);
    delay(5);

    outtextxy(p1+5, q1+5, "(x1,y1)");
    outtextxy(p2+5, q2+5, "(x2,y2)");
 }
}

float round(float a)
{
    int b = a+0.5;
    return b;
}
int main()
{
    int gd=DETECT, gm;
    int x1, y1, xn, yn;
    initgraph(&gd, &gm, "c:\\turboc3\\BGI");

    cout<<"Enter starting Coordinate"<<endl;
    cin>>x1>>y1;
    cout<<"Enter ending Coordinate"<<endl;
    cin>>xn>>yn;

    ddaline(x1, y1, xn, yn);
    getch();
}
