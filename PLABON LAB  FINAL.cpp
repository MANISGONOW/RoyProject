#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter your number:\n1 FLAG\n2 EMOJI\n3 HOUSE\n4 VILLAGE\n";
    cin>>ch;

    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    switch(ch)
    {
    case 1:
        setcolor(GREEN);

        rectangle(200,100,450,250);
        setfillstyle(1,GREEN);
        floodfill(201,110,GREEN);

        setcolor(RED);
        circle(320,175,65);
        setfillstyle(1,RED);
        floodfill(301,176,RED);

        setcolor(WHITE);
        rectangle(194,95,199,500);
        setfillstyle(1,WHITE);
        floodfill(197,253,WHITE);

        getch();
        closegraph();
        break;

    case 2:
        circle(300,150,150);
        circle(245,120,20);
        circle(350,120,20);
        line(295,120,285,160);
        line(295,120,305,160);
        line(285,160,305,160);

        ellipse(300, 180, 180, 0, 60, 50);
        getch();
        closegraph();

        break;

    case 3:
        /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(170,230,230,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, RED);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLACK);
        floodfill(192, 252, WHITE);
        setfillstyle(HATCH_FILL, BLUE);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();

        break;

    case 4:
        setcolor(WHITE);
        circle(300,50,40);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(301,75, WHITE);
        /* Draw Hut */
        setcolor(WHITE);
         setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(170,230,230,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, RED);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLACK);
        floodfill(192, 252, WHITE);
        setfillstyle(HATCH_FILL, BLUE);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();
        break;
    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}
