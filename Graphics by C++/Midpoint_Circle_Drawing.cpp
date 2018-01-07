#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int midpoint_circle(int xn, int yn, int radius)
{
    int p1=xn, q1=yn, r=radius;
    int x, y, d;
    x = 0;
    y = radius;
    d = 1-radius;

    do{
            putpixel(xn+x, yn+y, RED);
            putpixel(xn-y, yn-x, RED);
            putpixel(xn+y, yn-x, RED);
            putpixel(xn-y, yn+x, RED);
            putpixel(xn+y, yn+x, RED);
            putpixel(xn-x, yn-y, RED);
            putpixel(xn+x, yn-y, RED);
            putpixel(xn-x, yn+y, RED);
              x=x+1;
        if(d<0)
        {
            d = d+(2*x+3);
        }
        else
        {
            y = y-1;
            d = d+(2*(x-y)+5);
        }
    }while(x<y);
}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    int xn, yn, radius;
    cout<<"Enter center Coordinate of the Circle: "<<endl;
    cin>>xn>>yn;
    cout<<"Enter Radius: "<<endl;
    cin>>radius;

    midpoint_circle(xn,yn,radius);
    getch();
}
