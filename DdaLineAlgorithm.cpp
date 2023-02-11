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
	ll x1,x2,y1,y2;

	x1=100,x2=200,y1=20,y2=50;
	cin>>x1>>y1>>x1>>x2;

	initgraph(&gd, &gm, "");

	ll dx=x2-x1;
	ll dy=y2-y1;
	ll m=dy/dx;
	ll x=x1,y=y1;
    if(abs(m)<1)
    {
        while(x<=x2)
        {
            putpixel(x,y,WHITE);
            x++;
            y=y+m;
            delay(100);
        }
    }
    else
    {
        while(y<=y2)
        {
            y++;
            x=x+(1/m);
        }
    }
	getch();
	closegraph();
}
