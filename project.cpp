
#include<stdio.h>
#include<graphics.h>
#include<bits/stdc++.h>

using namespace std;

void lineView();
void circleView();
void triangleView();
void rectangleView();
void polygonView();
void flagView();
void bardView();
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
            flagView();
            continue;
        case 7:
            bardView();
            continue;
        case 8:
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
    cout<<"6. National Flag"<<endl;
    cout<<"7. Bard"<<endl;
    cout<<"8. Shaeed Minar"<<endl<<endl;
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

void flagView(){

    rectangle(100,100,600,400);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(200, 200, WHITE);
    circle(325, 250, 100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(326, 251, WHITE);
}

void bardView(){
    //big ellipse (body)
    setfillstyle(SOLID_FILL, RED);
    fillellipse(260, 240, 150, 70);


    //circle (head)

    //fillellipse(440, 240, 50, 50);
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


//start shaheed minar

void stairs()
{

    setcolor (WHITE);
    setfillstyle (SOLID_FILL, GREEN);
    rectangle(600-480,450-100,950-480,460-100);
    floodfill (605-480,455-100, WHITE);
    rectangle(590-480,460-100,960-480,470-100);
    floodfill (595-480,465-100, WHITE);
    rectangle(575-480,470-100,970-480,480-100);
    floodfill (585-480,475-100, WHITE);
}

void firstMinar()
{
    rectangle(610-480,350-100,645-480,450-100);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle(620-480,360-100,635-480,450-100);
    floodfill(620-480,353-100, WHITE);
}

void secondMinar()
{
    rectangle(675-480,325-100,715-480,450-100);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle(685-480,335-100,705-480,450-100);
    floodfill(685-480,327-100,WHITE);
}

void thirdMinar()
{
    rectangle(740-480,300-100,750-480,450-100);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(745-480,307-100, WHITE);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle (600-480,450-100,950-480,460-100);
}

void fourthMinar()
{
    setcolor (WHITE);
    rectangle (835-480,325-100,875-480,450-100);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle(845-480,335-100,865-480,450-100);
    floodfill (845-480,327-100,WHITE);
}

void fifthMinar()
{
    rectangle (900-480,350-100,940-480,450-100);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle(910-480,360-100,930-480,450-100);
    floodfill(910-480,353-100,WHITE);
}

void firstUpperSide()
{
    line(740-480,300-100,785-480,240-100);
    line(741-480,300-100,785-480,241-100);
    line(742-480,300-100,785-480,242-100);
    line(743-480,300-100,785-480,243-100);
    line(744-480,300-100,785-480,244-100);
    line(745-480,300-100,785-480,245-100);
    line(746-480,300-100,785-480,246-100);
    line(747-480,300-100,785-480,247-100);
    line(748-480,300-100,785-480,248-100);
    line(749-480,300-100,785-480,249-100);
    line(750-480,300-100,785-480,250-100);
    line(751-480,300-100,785-480,251-100);
}

void secondUpperSide()
{
    line(770-480,300-100,805-480,253-100);
    line(771-480,300-100,806-480,253-100);
    line(772-480,300-100,807-480,253-100);
    line(773-480,300-100,808-480,253-100);
    line(774-480,300-100,809-480,253-100);
    line(775-480,300-100,810-480,253-100);
    line(776-480,300-100,811-480,253-100);
    line(777-480,300-100,812-480,253-100);
    line(778-480,300-100,813-480,253-100);
    line(779-480,300-100,814-480,253-100);
    line(780-480,300-100,815-480,253-100);
}

void thirdUpperSide()
{
    line(810-480,300-100,855-480,240-100);
    line(800-480,300-100,835-480,253-100);

    line(800-480,300-100,845-480,240-100);
    line(801-480,300-100,846-480,240-100);
    line(802-480,300-100,847-480,240-100);
    line(803-480,300-100,848-480,240-100);
    line(804-480,300-100,849-480,240-100);
    line(805-480,300-100,850-480,240-100);
    line(806-480,300-100,851-480,240-100);
    line(807-480,300-100,852-480,240-100);
    line(808-480,300-100,853-480,240-100);
    line(809-480,300-100,854-480,240-100);
    line(810-480,300-100,855-480,240-100);
}

void jointUpperSide()
{

    line(785-480,240-100,855-480,240-100);
    line(786-480,241-100,845-480,241-100);
    line(786-480,242-100,846-480,242-100);
    line(786-480,243-100,847-480,243-100);
    line(786-480,244-100,848-480,244-100);
    line(786-480,245-100,849-480,245-100);
    line(786-480,246-100,850-480,246-100);
    line(786-480,247-100,851-480,247-100);

    line(786-480,247-100,850-480,247-100);
    line(786-480,248-100,849-480,248-100);
    line(786-480,249-100,846-480,249-100);
    line(786-480,250-100,847-480,250-100);
    line(786-480,251-100,846-480,251-100);
    line(786-480,252-100,845-480,252-100);

    //Joint side
    line(785-480,253-100,805-480,253-100);
    line(815-480,253-100,835-480,253-100);
}

void centerRedCircle()
{
    setcolor (RED);
    setfillstyle (SOLID_FILL, RED);
    circle (775-480,375-100,50);
    floodfill(775-480,375-100, RED);
}

void shaheedMinarView()
{
    //stairs
    stairs();

    //1st Minar
    firstMinar();

    //2nd Minar
    secondMinar();

    //3rd Minar
    thirdMinar();

    setfillstyle (SOLID_FILL, WHITE);
    floodfill(745-480,307-100, WHITE);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle(770-480,300-100,780-480,450-100);
    floodfill (775-480,307-100, WHITE);
    setfillstyle (SOLID_FILL, WHITE);
    rectangle (800-480, 300-100,810-480,450-100);
    floodfill (805-480, 307-100, WHITE);
    setcolor (WHITE);

    //1st upper side
    firstUpperSide();

    //3rd side
    thirdUpperSide();

    //2nd side
    secondUpperSide();

    //Upper Side all 1st line Joint
    jointUpperSide();

    //Circle Draw
    centerRedCircle();

    //4th Minar
    fourthMinar();

    //5th Minar
    fifthMinar();
}
//end shaeed minar

