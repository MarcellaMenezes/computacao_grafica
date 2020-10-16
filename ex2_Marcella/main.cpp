#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define iniX -100
#define fimX 100

#define iniY -100
#define fimY 100

static int pontos = 9;

void desenhaSequenciaPontos(int qnt, int espacamento){ //Ex1
    float xIni=iniX;

    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    for(int i=1; i<=qnt; i++){
        glPointSize(i); //tamanho do ponto
        glBegin(GL_POINTS);
            glColor3f(1.0, 0.0, 0.0); //cor do ponto
            xIni+=espacamento;//inicio dos pontos
            glVertex2f(xIni, 0.0);
        glEnd();
        glFlush();
    }
}

void valorCoresPontoMedio(){ //Ex2
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(100);
    glBegin(GL_LINES);
        glColor3f(1, 0, 0);
        glVertex2f(20,20);
        glColor3f(0, 1, 0);
        glVertex2f(80,20);
     glEnd();
     glFlush();

    glPointSize(5);
    glBegin(GL_POINTS);
        glColor3f(0.5,0.5,0);
        glVertex2f(50,22);
    glEnd();
    glFlush();
}

void desenhaCasa(){ //Ex3
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //casa
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
        glColor3f(1, 0, 0);
        glVertex2f(-30,30);
        glVertex2f(30,30);
        glVertex2f(30,-30);
        glVertex2f(-30,-30);
    glEnd();
    glFlush();

    //telhado
    glBegin(GL_TRIANGLES);
        glColor3f(1,0,0);
        glVertex2f(-30,30);
        glColor3f(0,1,0);
        glVertex2f(0,60);
        glColor3f(0,0,1);
        glVertex2f(30,30);
    glEnd();
    glFlush();

    //janela Esquerda
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(-22,-10);
        glVertex2f(-16,-10);
        glVertex2f(-16,0);
        glVertex2f(-22,0);
    glEnd();
    glFlush();

    //janela Direita
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(16,-10);
        glVertex2f(22,-10);
        glVertex2f(22,0);
        glVertex2f(16,0);
    glEnd();
    glFlush();

    //Porta
    glBegin(GL_QUADS);
        glColor3f(0,1,0); //verde
        glVertex2f(-10,-30);
        glVertex2f(10,-30);
        glColor3f(1,1,1); //branco
        glVertex2f(10,-10);
        glVertex2f(-10,-10);
    glEnd();
    glFlush();

    //Maçaneta
    glBegin(GL_QUADS);
        glColor3f(0,0,0); //preto
        glVertex2f(4,-22);
        glVertex2f(8,-22);
        glVertex2f(8,-18);
        glVertex2f(4,-18);
    glEnd();
    glFlush();
}

void desenhaQuatroQuadrantesDesenhos(){ //Ex4 a)
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //eixo x e y
    glLineWidth(3);
    glBegin(GL_LINES);
        glColor3f(1,1,1); //branco
        glVertex2f(0,-90);
        glVertex2f(0,90);
        glVertex2f(-90,0);
        glVertex2f(90,0);
    glEnd();
    glFlush();

    //primeiro quadrante
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(30,0);
        glVertex2f(70,0);
        glVertex2f(70,50);
        glVertex2f(30,50);
    glEnd();
    glFlush();
    glBegin(GL_QUADS);
        glColor3f(0,0,0);
        glVertex2f(40,10);
        glVertex2f(60,10);
        glVertex2f(60,40);
        glVertex2f(40,40);
    glEnd();
    glFlush();

    //segundo quadrante
    glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex2f(-80,0);
        glVertex2f(-40,0);
        glVertex2f(-40,10);
        glVertex2f(-70,10);
        glVertex2f(-70,50);
        glVertex2f(-80,50);
    glEnd();
    glFlush();

    //terceiro quadrante
    glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex2f(-40,-80);
        glVertex2f(-10,-10);
        glVertex2f(-20,-10);
        glVertex2f(-40,-60);
        glVertex2f(-70,-10);
        glVertex2f(-80,-10);
    glEnd();
    glFlush();

    //quarto quadrante
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(30,-10);
        glVertex2f(40,-10);
        glVertex2f(40,-80);
        glVertex2f(30,-80);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(40,-80);
        glVertex2f(70,-80);
        glVertex2f(70,-70);
        glVertex2f(40,-70);
    glEnd();
    glFlush();

    //quarto quadrante
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(40,-50);
        glVertex2f(70,-50);
        glVertex2f(70,-40);
        glVertex2f(40,-40);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2f(40,-20);
        glVertex2f(70,-20);
        glVertex2f(70,-10);
        glVertex2f(40,-10);
    glEnd();
    glFlush();
}

void desenhaQuatroQuadrantesQuadrados(){ //Ex4 b)
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //primeiro quadrante
    glBegin(GL_QUADS);
        glColor3f(1,0,0);
            glVertex2f(30,10);
        glColor3f(0,1,0);
            glVertex2f(30,30);
        glColor3f(0,0,1);
            glVertex2f(10,30);
        glColor3f(0,0.8,0.6);
            glVertex2f(10,10);
    glEnd();
    glFlush();

    //segundo quadrante
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
            glVertex2f(-10,30);
        glColor3f(0,0.8,0.6);
            glVertex2f(-10,10);
        glColor3f(1,0,0);
            glVertex2f(-30,10);
        glColor3f(0,1,0);
            glVertex2f(-30,30);
    glEnd();
    glFlush();

    //terceiro quadrante
    glBegin(GL_QUADS);
        glColor3f(0,0,1);
            glVertex2f(-10,-30);
        glColor3f(0,1,0);
            glVertex2f(-30,-30);
        glColor3f(1,0,0);
            glVertex2f(-30,-10);
        glColor3f(0,0.8,0.6);
            glVertex2f(-10,-10);
    glEnd();
    glFlush();

    //quarto quadrante
    glBegin(GL_QUADS);
        glColor3f(1,0,0);
            glVertex2f(30,-10);
        glColor3f(0,0.8,0.6);
            glVertex2f(10,-10);
        glColor3f(0,0,1);
            glVertex2f(10,-30);
        glColor3f(0,1,0);
            glVertex2f(30,-30);
    glEnd();
    glFlush();
}

void desenhaQuadradoColorido(){ //Ex5 b)
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(0,0,1);//1º
            glVertex2f(-20,40);
        glColor3f(0,1,0);
            glVertex2f(40,60);
        glColor3f(1,0,0);
            glVertex2f(20,40);
        glColor3f(1,0,0);//2º
            glVertex2f(40,-20);
        glColor3f(0,1,0);
            glVertex2f(20,0);
        glColor3f(0,0,1);
            glVertex2f(-40,-20);
        glColor3f(1,0,0);//3º
            glVertex2f(-20,0);
        glColor3f(0,1,0);
            glVertex2f(-40,60);
        glColor3f(0,0,1);//4º
            glVertex2f(-20,40);
        glColor3f(1,0,0);
            glVertex2f(40,60);
    glEnd();
    glFlush();
}

void desenhaQuadradoSemPreenchimento(){ //Ex5 a)
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(1);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-20,40);
        glVertex2f(40,60);
        glVertex2f(20,40);

        glVertex2f(40,-20);
        glVertex2f(20,0);
        glVertex2f(-40,-20);

        glVertex2f(-20,0);
        glVertex2f(-40,60);

        glVertex2f(-20,40);
        glVertex2f(40,60);
    glEnd();
    glFlush();
}

void desenhaGraficoSeno(){ //Ex6 a)
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    //eixo x e y
    glLineWidth(1);
    glBegin(GL_LINES);
        glColor3f(1,1,1); //branco
        glVertex2f(0,-90);
        glVertex2f(0,90);
        glVertex2f(-90,0);
        glVertex2f(90,0);
    glEnd();
    glFlush();
    //grafico sen
	int qntdPts=200;
	float x = -10;
	float incr=0.1;   //200*0.1=20  [-10,10]=20

	glColor3f(1,0,0);
    glLineWidth(3);
	glBegin(GL_LINE_STRIP);
    for(int i=1;i<=qntdPts;i++){
            float y=sin(x);
            glVertex2f(x,y);
            x+=incr;
		}
	glEnd();
	glFlush();
}

void desenhaGraficoFuncaoSegundoGrau(){ //Ex6 b)
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    //eixo x e y
    glLineWidth(1);
    glBegin(GL_LINES);
        glColor3f(1,1,1); //branco
        glVertex2f(0,-90);
        glVertex2f(0,90);
        glVertex2f(-90,0);
        glVertex2f(90,0);
    glEnd();
    glFlush();
    //grafico func segundo grau
	int numPts=200;
	float x = -10;
	float incr=0.1; //200*0.1=20  [-10,10]=20

	glColor3f(1,0,0);
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
    for(int i=1;i<=numPts;i++){
            float y=((3*pow(x,2))+(5*x)-6);
            glVertex2f(x,y);
            x+=incr;
		}
	glEnd();
	glFlush();
}

void desenhaCircunferencia(){ //Ex7
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<pontos; i++){
        float theta = 2.0 * 3.1415926535897932384 * float(i) /float(pontos); //calculando o angulo do ponto i
        float x = 10 * cos(theta);// raio*cos(angulo)
        float y = 10 * sin(theta);// raio*sin(angulo)
        glColor3f(1,1,1);
        glVertex2f(x , y);//
    }
    glEnd();
    glFlush();

    glColor3f(1,0,0);
    glPointSize(4);
    glBegin(GL_POINTS);
        glVertex2f(0,0);
    glEnd();
    glFlush();

}

void desenha(void){
    //desenhaSequenciaPontos(20,7);
    //valorCoresPontoMedio();
    //desenhaCasa();
    //desenhaQuatroQuadrantesDesenhos();
    //desenhaQuatroQuadrantesQuadrados();
    //desenhaQuadradoSemPreenchimento();
    // desenhaQuadradoColorido();
    //desenhaGraficoSeno();
    //desenhaGraficoFuncaoSegundoGrau();
    desenhaCircunferencia();

}


void tecla (unsigned char key, int x, int y){
    switch (key)
    {
        case 'q':
            exit(0);
            break;

        case '+':
            pontos++;
            break;

        case '-':
            if (pontos>3)
                pontos--;
            break;
    }

    glutPostRedisplay();
}

void inicializa(void){
    glMatrixMode(GL_PROJECTION); //tipo de matriz de projeção
    glLoadIdentity(); //carrega uma matriz identidade para receber os valores
    gluOrtho2D(iniX, fimX, iniY, fimY); //especifica qual o espaço iremos utilizar
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800); //tamanho da janela do openGL
    glutInitWindowPosition(0, 0); //posição da janela
    glutCreateWindow("Exercicio 2");
    glutDisplayFunc(desenha);
    inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}
