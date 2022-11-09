//
//  Main.h
//

#ifndef __MAIN_H__
#define __MAIN_H__



//
//  init
//
//  Purpose: To load the required data files and initialize the
//	     OpenGL states for this program.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: All data files are loaded.  OpenGL states are
//		 initialized.
//

void init ();

//
//  keyboardDown
//
//  Purpose: This function is invoked by OpenGL whenever a
//	     "non-special" key is pressed.
//  Argument(s):
//	<1> key: Which key was pressed
//	<2> x
//	<3> y: The x and y coordinates of the mouse in the
//	       window
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The keystroke is handled.
//

void keyboardDown (unsigned char key, int x, int y);

//
//  idle
//
//  Purpose: This function is invoked by OpenGL whenever the
//	     OpenGL system is idle.  Normally, this happens
//	     whenever the display is up to date and no input is
//	     waiting to be handled.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The view is rotated for this frame.  When
//		 enough time has passed, the display is marked
//		 as requiring an update and the function
//		 terminates.
//

void idle ();

//
//  reshape
//
//  Purpose: This function is invoked by OpenGL whenever the
//	     window is resized or becomes visible.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The window matrices are recalculated.
//

void reshape (int w, int h);

//
//  display
//
//  Purpose: This function is invoked by OpenGL whenever the
//	     window needs to be redisplayed.
//  Argument(s): N/A
//  Precondition(s): N/A
//  Returns: N/A
//  Side Effect: The contents of the window are redisplayed.
//

void display ();



#endif
