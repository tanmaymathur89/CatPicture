#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
private:
	float change;
	float change1;
	float change2;
	int i;
};

void CatPictureApp::setup()
{
	i=0;
	change=0.0f;
	change1=0.5f;
	change2=1.0f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	i++;
	if(change<=1)change=change+.01f; else {change=change/(2*i);}
if(change1<=1)change1=change1+.01f;else {change1=change1/(2*i);}
if(change2>=0)change2=change2-.01f;else {change2=change2/(2*i);}
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( change, change1,change2) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
