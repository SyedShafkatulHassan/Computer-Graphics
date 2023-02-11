//Author:Syed Shafkatul Hassan
//Date:2/11/2023
#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(x) (x).begin(),(x).end()
int main()
{
    int gd = DETECT, gm;
    ll x,x1,y,y1;
    cin>>x>>y>>x1>>y1;

    initgraph(&gd, &gm, "");

    ll dx=x1-x;
    ll dy=y1-y;
    ll Two=2*dy;
    ll p=2*dy-dx;
    while(x<=x1)
    {
        if(p<0)
        {
            putpixel(x,y,10);
            p=p+2*dy;

        }
        else
        {
            putpixel(x,y,10);
            y++;
            p=p+2*dy-2*dx;
        }
        x++;
    }
    getch();
    closegraph();
}

