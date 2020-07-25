#include<windows.h>
#include <GL/glut.h>

using namespace std;





void init(void)
{
    glClearColor( (55.0/255.0), (12.0/255.0), (22.0/255.0), 0.0);	// Set display window colour to white
    glMatrixMode(GL_PROJECTION);      // Select the Projection matrix for operation
    glLoadIdentity();   		// Set projection parameters
    gluOrtho2D(0,450, 0,450);
}





void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    float x=180.0,y=300.0;


    /** CONE **/

    float C[3][16][2]=
    {
        {{0,0},{0,0},{0,0},{0,0},{0,0} , {-2,-5} , {3,-3} , {2.78,-3.03} , {2.43,-2.93} , {1.79,-2.55} , {1.3,-2.12} , {0.82,-1.63} , {0.57,-1.34} , {0.36,-1.05} , {0.14,-0.72} , {-0.03,-0.27}},
        {{0,0} , {0.23,0.06} , {0.58,-0.08} , {0.92,-0.27} , {1.16,-0.44} , {1.39,-0.63} , {1.65,-0.85} , {1.88,-1.05} , {2.12,-1.3} , {2.33,-1.53} , {2.49,-1.75} , {2.66,-1.98} , {2.84,-2.28} , {2.93,-2.46} , {3.02,-2.75} , {3,-3}},
        {{3,-3} , {2.78,-3.03} , {2.43,-2.93} , {1.79,-2.55} , {1.3,-2.12} , {0.82,-1.63} , {0.57,-1.34} , {0.36,-1.05} , {0.14,-0.72} , {-0.03,-0.27},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}
    };

    glColor3f( (28.0/255.0), (28.0/255.0), (28.0/255.0));


    float nx=3.5,ny=10.0;
    glColor3f( (12.0/255.0), (12.0/255.0), (12.0/255.0));
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j  = 0 ; j < 16 ; j++)
            glVertex2f( (C[i][j][0]+nx)*25,(C[i][j][1]+ny)*25 ) ;
        glEnd();
        glColor3f( (37.0/255.0), (37.0/255.0), (37.0/255.0));
    }
    glColor3f( (12.0/255.0), (12.0/255.0), (12.0/255.0));
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j  = 0 ; j < 16 ; j++)
            glVertex2f( 450-(C[i][j][0]+nx)*25,(C[i][j][1]+ny)*25 ) ;
        glEnd();
        glColor3f( (37.0/255.0), (37.0/255.0), (37.0/255.0));
    }






    /**--------------------                 Alphabets Section              --------------------------**/


    float H[3][4][2] =
    {
        {{0,0},  {0,-20}, { 3,-20}, { 3,0}},
        {{ 3,-9}, { 3,-11}, { 12,-11}, { 12,-9}},
        {{ 12,0},  { 12,-20}, { 15,-20}, { 15,0}}
    };

    float I[3][4][2] =
    {
        {{0,0}, {0,-3},{ 9,-3}, { 9,0}},
        {{ 3,-3}, { 3,-17},{ 6,-17},{ 6,-3}},
        {{0,-17},{0,-20}, { 9,-20}, { 9,-17}}
    };

    float T[8][2] =
    {
        { 6,-3}, { 6,-20}, { 10,-20},
        { 10,-3}, { 16,-3}, { 16,0},{0,0}, {0,-3}
    };

    float Y[9][2] =
    {
        { 10,-8},{ 3,0}, {0,0},{ 8,-10}, { 8,-20}, { 12,-20},
        { 12,-10}, { 19,0}, { 16,0}
    };

    float P[2][16][2] =
    {
        {{ 3,-10},{5.95,-9.99}, {7.19,-9.69}, {8.32,-8.97}, {9.23,-7.87}, {9.81,-6.46}, {10,-5.09}, {9.9,-4.02}, {9.52,-2.78}, {8.92,-1.74}, {8,-0.82}, {6.94,-0.24}, {5.85,0},{0,0}, {0,-20}, { 3,-20}},
        { { 3,-2}, { 3,-4},{ 3,-4},{ 3,-4}, { 3,-7}, {6.24,-7.04}, {7.03,-6.73}, {7.59,-6.25}, {8.06,-5.47}, {7.94,-3.24}, {8.24,-4.63}, {8.18,-3.9}, {7.6,-2.74}, {7.1,-2.29}, {6.34,-1.95}, {5.15,-1.96}}
    };

    float R[3][17][2] =
    {
        {{ 3,-10},{8.46,-9.92}, {9.5,-9.65}, {10.36,-9.15}, {11.06,-8.32}, {11.49,-7.48}, {11.84,-6.44}, {11.95,-4.97}, {11.96,-3.64}, {11.55,-2.54}, {11.06,-1.53}, {10.22,-0.700001}, {9.3,-0.32}, {8.37,-0.0400009},{0,0}, {0,-20}, { 3,-20}},
        { { 3,-10}, { 10,-20}, { 11,-20}, { 13,-20}, { 6,-10}, { 4,-10}},
        { { 3,-2},{ 3,-8}, {7.3,-7.96}, {8.14,-7.71}, {9.64,-6.44}, {9.64,-6.44}, {9.92,-5.29}, {9.89,-4.27}, {9.53,-3.47}, {9.07,-2.81}, {8.34,-2.34}, {7.33,-2.04}}
    };

    float A[2][7][2] =
    {
        { { 1.5,-5}, { 6,-20},{ 9,-20}, { 3,0}, {0,0}, {-6,-20}, {-3,-20} },
        { { 4,-13},  {-1,-13},  {0,-10}, { 3,-10},{ 3,-10},{ 3,-10},{ 3,-10} }
    };

    float B[3][13][2] =
    {
        {   { 8,-10},{ 10.5,-8}, { 11,-6}, { 11,-3}, { 10,-1}, { 8,0},
            {0,0},{0,-20},{ 8,-20},{ 10,-19},{ 11,-17},{ 11,-14},{ 10.5,-17}
        },

        {   { 2,-2}, { 7,-2},{ 8.8,-3}, { 9.3,-5}, { 8.8,-7}, { 7,-8}, { 2,-8},
            { 2,-8},{ 2,-8},{ 2,-8},{ 2,-8},{ 2,-8},{ 2,-8}
        },

        {   { 2,-12}, { 7,-12},{ 8.8,-13}, { 9.3,-15}, { 8.8,-17}, { 7,-18}, { 2,-18},
            { 2,-18},{ 2,-18},{ 2,-18},{ 2,-18},{ 2,-18},{ 2,-18}
        }
    };

    float D[2][11][2] =
    {
        {   {0,0}, { 9,0},{ 11,-2}, { 12.2,-4}, { 13,-6.5}, { 13,-10}, { 13,-13},
            { 12,-16},{ 11,-18},{ 9,-20},{0,-20}
        },

        {   { 2,-2}, { 7,-2},{ 8.6,-3.5}, { 9.9,-5.3}, { 10.2,-8.7}, { 10.2,-10}, { 9.9,-13.25},
            { 8.6,-16.75},{ 7,-18},{ 2,-18},{ 2,-18}
        }
    };



    /**--------------------                 Alphabets Section              --------------------------**/







    /** printing - H **/

    glColor3f(1,1,1);
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 4 ;  j ++)
            glVertex2f( x+H[i][j][0], y+H[i][j][1] );
        glEnd();
    }




    /** printing - A **/

    x+=25.0;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 2 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 7 ;  j ++)
            glVertex2f(x+A[i][j][0],y+A[i][j][1]);
        glEnd();
    }


    /** printing  - PP **/
    for(int k = 1 ; k <= 2 ; k ++)
    {
        x += 15;
        glColor3f(1,1,1);
        for(int i = 0 ; i < 2 ; i ++)
        {
            glBegin(GL_POLYGON);
            for(int j = 0 ; j < 16 ;  j ++)
                glVertex2f(x+P[i][j][0],y+P[i][j][1]);
            glEnd();
            glColor3f((55.0/255.0), (12.0/255.0), (22.0/255.0));
        }
    }


    /** printing  - Y **/
    x+=15;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    for(int i = 0 ; i < 9 ;  i ++)
        glVertex2f(x+Y[i][0],y+Y[i][1]);
    glEnd();






    float s = 1.2;


    /** printing - B **/
    x-=127.0;
    y-=80.0;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 13 ;  j ++)
            glVertex2f( s*(x+B[i][j][0]), s*(y+B[i][j][1]) );
        glEnd();
        glColor3f((55.0/255.0), (12.0/255.0), (22.0/255.0));
    }


    /** printing - I **/
    x+=15;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 4 ;  j ++)
            glVertex2f( s*(x+I[i][j][0]), s*(y+I[i][j][1]) );
        glEnd();
    }

    /** printing - R **/
    x+=13;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 17 ;  j ++)
            glVertex2f( s*(x+R[i][j][0]), s*(y+R[i][j][1]) );
        glEnd();
        if(i==1)
            glColor3f((55.0/255.0), (12.0/255.0), (22.0/255.0));
    }



    /** printing - T **/
    x+=15;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    for(int i = 0 ; i < 8 ;  i ++)
        glVertex2f( s*(x+T[i][0]), s*(y+T[i][1]) );
    glEnd();



    /** printing - H **/
    x+=20;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 3 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 4 ;  j ++)
            glVertex2f( s*(x+H[i][j][0]), s*(y+H[i][j][1]) );
        glEnd();
    }



    /** printing - D **/
    x+=20;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 2 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 11 ;  j ++)
            glVertex2f( s*(x+D[i][j][0]), s*(y+D[i][j][1]) );
        glEnd();
        glColor3f((55.0/255.0), (12.0/255.0), (22.0/255.0));
    }

    /** printing - A **/

    x+=20.0;
    glColor3f(1,1,1);
    for(int i = 0 ; i < 2 ; i ++)
    {
        glBegin(GL_POLYGON);
        for(int j = 0 ; j < 7 ;  j ++)
            glVertex2f( s*(x+A[i][j][0]), s*(y+A[i][j][1]) );
        glEnd();
    }

    /** printing  - Y **/
    x+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    for(int i = 0 ; i < 9 ;  i ++)
        glVertex2f( s*(x+Y[i][0]), s*(y+Y[i][1]) );
    glEnd();






    /** Gift Box **/

    float G[4][12][2] = {
       { {0,0}, {0,-40}, {70,-40}, {70,0}} ,
       { {0,-17}, {70,-17}, {70,-22}, {0,-22}},
       { {33,0}, {33,-40}, {37,-40}, {37,0}},
       { {29.97,-14.82}, {28.5,-15.38}, {28.2,-16.5}, {28.69,-17.52}, {30,-18}, {32,-17.93}, {33.01,-17.93}, {33.01,-17}, {33,-15}, {32.57,-13.32}, {31.15,-12.91}, {30.06,-13.56}}
    };

    x=55.0;y=50.0;
    float sf = 2.5;
    glColor3f( (28.0/255.0), (28.0/255.0), (28.0/255.0));
    for(int i = 0 ; i < 4 ; i++){


        if(i==3){
            for(int k = 0 ; k < 4 ; k ++){
                glBegin(GL_POLYGON);
                for(int j = 0 ; j < 12 ; j ++){
                    if(k==0){
                        glVertex2f( (x+G[i][j][0])*sf , (y+G[i][j][1])*sf );
                    }
                    else if(k==1){
                        glVertex2f( 450-(x+G[i][j][0])*sf, (y+G[i][j][1])*sf );
                    }
                    else if(k==2)
                        glVertex2f( (x+G[i][j][0])*sf, 153-(y+G[i][j][1])*sf );
                    else
                        glVertex2f( 450-(x+G[i][j][0])*sf, 153-(y+G[i][j][1])*sf );
                }
                glEnd();
            }
        }
        else{
            glBegin(GL_POLYGON);
            for(int j = 0 ; j < 12 ; j ++)
                glVertex2f( (x+G[i][j][0])*sf , (y+G[i][j][1])*sf );
            glEnd();
        }


        glColor3f(201.0/255.0,163.0/255.0,171.0/255.0 );
        if(i==2)
        {glColor3f(1.0,0.0,0.0);
        x-=24;
        y-=10;
        sf++;
        }
    }



    glFlush();

}




int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(400, 50);				// Set window position
    glutInitWindowSize(650, 650);					// Set window size
    glutCreateWindow("171-15-9556");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(drawShapes);	// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
