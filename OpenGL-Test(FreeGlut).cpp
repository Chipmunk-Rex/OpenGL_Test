

#include <iostream>


//int main()
//{
//    std::cout << "Hello World!\n";
//}
#include <GL/glut.h>
using namespace std;
float x = 0;
float yCoord = 0;
void Render(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();
	glTranslatef(x, yCoord, 0);

	glBegin(GL_TRIANGLES);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glEnd();
	glutSwapBuffers();
}
void processNormalKeys(unsigned char key, int x, int y){
	switch (key)
	{
	case 'w':
		yCoord += 0.05;
		cout << yCoord << endl;
		break;
	case 'o':
		cout << "test O";

	default:
		break;
	}
	glutPostRedisplay();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT); // 화면 지우기

	// 사각형 그리기
	glBegin(GL_QUADS); // 사각형 그리기 시작
	glVertex2f(-0.5, -0.5); // 왼쪽 아래
	glVertex2f(0.5, -0.5);  // 오른쪽 아래
	glVertex2f(0.5, 0.5);   // 오른쪽 위
	glVertex2f(-0.5, 0.5);  // 왼쪽 위
	glEnd(); // 그리기 종료

	glutSwapBuffers(); // 더블 버퍼링 사용 시 버퍼 교체
}
void Update() {

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	glutInitWindowSize(600, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("1945 OpenGL");
	/*

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 60.0, 0.0, 70.0, -30.0, 30.0);

	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	glEnable(GL_TEXTURE_2D);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);*/
	glClearColor(0.0, 0.0, 0.0, 1);

	glutKeyboardFunc(processNormalKeys);
	glutDisplayFunc(Render);
	glutIdleFunc(Update);

	glutMainLoop();
    return 0;
}