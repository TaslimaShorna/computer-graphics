#include<stdio.h>
#include<graphics.h>
#include<bits/stdc++.h>

using namespace std;

void lineView();
void circleView();
void triangleView();
void rectangleView();
void polygonView();
void carView();
void flagView();
void footballGroundView();
void bardView();
void chessView();
void shaheedMinarView();

//end shaeed minar

void showMenu();

int main()
{

    int gd=DETECT,gm;
    initgraph (&gd, &gm, "");

    while(true)
    {
        showMenu();
        int n;
        cin>>n;
        cout<<endl;
        if(n==0)
        {
            break;
        }
        cleardevice();
        outtextxy(440,440,"Mst. Taslima Aktar Shorna");
        outtextxy(440,460,"Sonargaon University");
        switch(n)
        {
        case 1:
            lineView();
            continue;
        case 2:
            circleView();
            continue;
        case 3:
            triangleView();
            continue;
        case 4:
            rectangleView();
            continue;
        case 5:
            polygonView();
            continue;
        case 6:
            carView();
            continue;
        case 7:
            flagView();
            continue;
        case 8:
            footballGroundView();
            continue;
        case 9:
            bardView();
            continue;
        case 10:
            chessView();
            continue;
        case 11:
            shaheedMinarView();
            continue;

        default:

            cout<<"Invalid choice! Select a valid option"<<endl<<endl;;
            continue;
        }
    }

    closegraph();

    return 0;
}

void showMenu()
{
    cout<<"Select an option"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"1. Line"<<endl;
    cout<<"2. Circle"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"4. Rectangle"<<endl;
    cout<<"5. Polygon"<<endl;
    cout<<"6. Car"<<endl;
    cout<<"7. National Flag"<<endl;
    cout<<"8. Football Ground"<<endl;
    cout<<"9. Bard"<<endl;
    cout<<"10. Chess"<<endl;
    cout<<"11. Shaeed Minar"<<endl<<endl;
    cout<<"0. Exit"<<endl<<endl;
    cout<<"Your choice: ";
}

void lineView()
{
    line(150, 200, 450, 200);
}

void circleView()
{
    circle(300, 200, 100);
}

void triangleView()
{
    line(150, 300, 450, 300);
    line(450, 300, 300, 100);
    line(300, 100, 150, 300);
}

void rectangleView()
{
    rectangle(150,100,450,300);
}

void polygonView()
{
    int arr[] =
    {
        150,200, 300,80, 450,200, 375,300, 225,300, 150,200
    };
    drawpoly(6, arr);
}

void carView()
{
    line(200, 300, 410, 300);
    line(250, 300, 275, 270);
    line(275, 270, 350, 270);
    line(350, 270, 365, 300);
    line(200, 300, 200, 330);
    line(410, 300, 410, 330);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(270, 292, WHITE);

    // For left wheel of car
    circle(265, 330, 15);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(275, 330, WHITE);
    circle(265, 330, 2);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(266, 330, WHITE);

    // For right wheel of car
    circle(345, 330, 15);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(355, 330, WHITE);
    circle(345, 330, 3);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(346, 330, WHITE);

    // Line left of left wheel
    line(200, 330, 250, 330);
    // Line middle of both wheel
    line(280, 330, 330, 330);
    // Line right of right wheel
    line(410, 330, 360, 330);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(205, 325, WHITE);

}

void flagView()
{

    rectangle(100,100,600,400);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(200, 200, WHITE);
    circle(325, 250, 100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(326, 251, WHITE);
}

void footballGroundView()
{
    // Ground Outline
    rectangle(50, 25, 600, 275);

    // Coloring Green
    setfillstyle(INTERLEAVE_FILL, GREEN);
    floodfill(75, 75, WHITE);

    // Ground Middle Line
    line(325, 25, 325, 275);
    line(328, 25, 328, 275);

    // Coloring White
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(327, 75, WHITE);

    // Mid Circles
    circle(326, 150, 30);
    circle(326, 150, 33);
    circle(326, 150, 15);


    // Outer Rectangle Left
    rectangle(50, 100, 125, 200);
    rectangle(50, 102, 122, 198);

    // Inner Rectangle Left
    rectangle(50, 115, 100, 185);
    rectangle(50, 118, 97, 182);

    // Arc Left Side
    arc(125, 150, 270, 90, 20);
    arc(125, 150, 270, 90, 15);

    // Outer Rectangle Right
    rectangle(525, 100, 600, 200);
    rectangle(528, 102, 600, 198);

    // Inner Rectangle Right
    rectangle(550, 115, 600, 185);
    rectangle(552, 118, 600, 182);

    // Arc Right Side
    arc(525, 150, 90, 270, 20);
    arc(525, 150, 90, 270, 15);

    // Coloring All White
    floodfill(357, 150, WHITE);
    floodfill(294, 150, WHITE);
    floodfill(328, 150, WHITE);
    floodfill(123, 150, WHITE);
    floodfill(98, 150, WHITE);
    floodfill(143, 150, WHITE);
    floodfill(526, 150, WHITE);
    floodfill(551, 150, WHITE);
    floodfill(506, 150, WHITE);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 150, WHITE);
    floodfill(352, 150, WHITE);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(335, 150, WHITE);
    floodfill(315, 150, WHITE);

}

void bardView()
{
    //big ellipse (body)
    setfillstyle(SOLID_FILL, RED);
    fillellipse(260, 240, 150, 70);


    //circle (head)
    circle(440,240,50);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(438, 238, WHITE);
    floodfill(391, 238, WHITE);

    //circle (eye)
    circle(460,230,12);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(455, 225, WHITE);

    //upper triangle
    line(260, 200, 140, 80);
    line(140, 80, 380, 80);
    line(380, 80, 260, 200);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(260,180,WHITE);
    floodfill(260,100,WHITE);

    //right triangle (lip)
    line(480, 220, 480, 260);
    line(480, 260, 520, 240);
    line(520, 240, 480, 220);
    setfillstyle(SOLID_FILL,RED);
    floodfill(500,235,WHITE);

    //line (tail)
    line(30, 180, 110, 230);
    line(30, 240, 110, 240);
    line(30, 300, 110, 250);
}

void chessView()
{
    int row, col, x = 30, y = 30, black = 0;

    for (row = 0; row < 8; row++)
    {
        for (col = 1; col <= 8; col++)
        {
            if (black == 0)
            {
                // set next color as white
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, BLACK);

                rectangle(x, y, x + 30, y + 30);
                floodfill(x + 1, y + 1, WHITE);

                black = 1;
            }
            else
            {
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, WHITE);

                rectangle(x, y, x + 30, y + 30);
                floodfill(x + 1, y + 1, WHITE);

                black = 0;
            }

            x = x + 30;

        }
        if (black == 0)
        {
            black = 1;
        }
        else
        {
            black = 0;
        }

        x = 30;
        y = 30 + y;
    }
}



void shaheedMinarView()
{
    // Stairs
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(120, 350, 470, 360);
    floodfill(125, 355, WHITE);
    rectangle(110, 360, 480, 370);
    floodfill(115, 365, WHITE);
    rectangle(95, 370, 490, 380);
    floodfill(105, 375, WHITE);

    // 1st Minar
    rectangle(130, 250, 165, 350);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(140, 260, 155, 350);
    floodfill(140, 253, WHITE);

    // 2nd Minar
    rectangle(195, 225, 235, 350);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(205, 235, 225, 350);
    floodfill(205, 227, WHITE);

    // 3rd Minar
    rectangle(260, 200, 270, 350);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(265, 207, WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(120, 350, 470, 360);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(265, 207, WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(290, 200, 300, 350);
    floodfill(295, 207, WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(320, 200, 330, 350);
    floodfill(325, 207, WHITE);
    setcolor(WHITE);

    // 1st upper side
    line(260, 200, 305, 140);
    line(261, 200, 305, 141);
    line(262, 200, 305, 142);
    line(263, 200, 305, 143);
    line(264, 200, 305, 144);
    line(265, 200, 305, 145);
    line(266, 200, 305, 146);
    line(267, 200, 305, 147);
    line(268, 200, 305, 148);
    line(269, 200, 305, 149);
    line(270, 200, 305, 150);
    line(271, 200, 305, 151);

    // 3rd side
    line(330, 200, 375, 140);
    line(320, 200, 355, 153);
    line(320, 200, 365, 140);
    line(321, 200, 366, 140);
    line(322, 200, 367, 140);
    line(323, 200, 368, 140);
    line(324, 200, 369, 140);
    line(325, 200, 370, 140);
    line(326, 200, 371, 140);
    line(327, 200, 372, 140);
    line(328, 200, 373, 140);
    line(329, 200, 374, 140);
    line(330, 200, 375, 140);

    // 2nd side
    line(290, 200, 325, 153);
    line(291, 200, 326, 153);
    line(292, 200, 327, 153);
    line(293, 200, 328, 153);
    line(294, 200, 329, 153);
    line(295, 200, 330, 153);
    line(296, 200, 331, 153);
    line(297, 200, 332, 153);
    line(298, 200, 333, 153);
    line(299, 200, 334, 153);
    line(300, 200, 335, 153);

    // Upper Side all 1st line Joint
    line(305, 140, 375, 140);
    line(306, 141, 365, 141);
    line(306, 142, 366, 142);
    line(306, 143, 367, 143);
    line(306, 144, 368, 144);
    line(306, 145, 369, 145);
    line(306, 146, 370, 146);
    line(306, 147, 371, 147);
    line(306, 147, 370, 147);
    line(306, 148, 369, 148);
    line(306, 149, 366, 149);
    line(306, 150, 367, 150);
    line(306, 151, 366, 151);
    line(306, 151, 365, 152);

    // Joint side
    line(305, 152, 325, 152);
    line(335, 152, 355, 152);

    // Circle Draw
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(295, 275, 50);
    floodfill(295, 275, RED);

    // 4th Minar
    setcolor(WHITE);
    rectangle(355, 225, 395, 350);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(365, 235, 385, 350);
    floodfill(365, 227, WHITE);

    // 5th Minar
    rectangle(420, 250, 460, 350);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(430, 260, 450, 350);
    floodfill(430, 253, WHITE);

}
//end shaeed minar
