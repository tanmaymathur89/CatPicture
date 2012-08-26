/**
 * @file CatPictureApp.cpp
 * A simple app to change colors using Cinder.
 *
 * @author Tanmay Mathur
 * @date 2012-08-26
 *
 * @note This file is (c) 2012. It is licensed under the 
 * CC BY 3.0 license (http://creativecommons.org/licenses/by/3.0/),
 * which means you are free to use, share, and remix it as long as you
 * give attribution. Commercial uses are allowed.
 */

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
	float Red;//Variable for Red
	float Green;//Variable for Green
	float Blue;//Variable for Blue
	int i;
};

void CatPictureApp::setup()
{
	i=0;
	Red=0.0f;
	Green=0.5f;
	Blue=1.0f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	if(Red<=1)
		Red=Red+.01f; 
	else 
		Red=0.0f;
	if(Green<=1)
		Green=Green+.01f;
	else 
		Green=0.5f;
	if(Blue>=0)
		Blue=Blue-.01f;
	else 
		Blue=1.0f;
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( Red, Blue,Green) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
