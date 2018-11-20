/**********************************************************************
 *
 * IMPORTANT NOTE:
 * Make sure you compile the project in x86 architecture.
 * If you see x64 in the combo box above, change it to x86.
 * This is because the libraries we are using (SDL, libpng, etc) are
 * compiled in x86 architecture, so we have to adapt.
 *
 **********************************************************************/

#pragma comment(linker,"/ENTRY:mainCRTStartup")
#pragma comment(linker,"/SUBSYSTEM:WINDOWS")

#include <stdlib.h>
#include "sdl_functions.h"


float abs(float i)
{
	if (i <= 0)
	{
		return -i;
	}
	return i;
}

struct Ball
{
	SDL_Rect rect;    // position in the texture
	SDL_Texture *tex; // texture
	float x, y;       // position in the world
	float vx, vy;     // velocity in the world
};


int main(int argc, char* argv[])
{
	// Initialize SDL
	if (Init() == 0) {
		return 1;
	}

	// Load a texture
	SDL_Texture *texScreen = LoadTexture("Assets/Screens/screen02.png");
	SDL_Texture *texBall = LoadTexture("Assets/Sprites/ball.png");

	Ball ball = {
		{0, 0, 100, 100}, // SDL_Rect
		texBall,          // SDL_Texture
		270, 100,         // Initial position in the screen
		0, 0              // Initial velocity
	};


	//OTHER BALLS//
	Ball ball2 = {
		{ 0, 0, 100, 100 }, // SDL_Rect
		texBall,          // SDL_Texture
		170, 100,         // Initial position in the screen
		0, 0              // Initial velocity
	};

	Ball ball3 = {
		{ 0, 0, 100, 100 }, // SDL_Rect
		texBall,          // SDL_Texture
		70, 100,         // Initial position in the screen
		0, 0              // Initial velocity
	};

	Ball ball4 = {
		{ 0, 0, 100, 100 }, // SDL_Rect
		texBall,          // SDL_Texture
		370, 100,         // Initial position in the screen
		0, 0              // Initial velocity
	};

	Ball ball5 = {
		{ 0, 0, 100, 100 }, // SDL_Rect
		texBall,          // SDL_Texture
		470, 100,         // Initial position in the screen
		0, 0              // Initial velocity
	};

	const float gravity = 600.0f;         // pixels / second^2
	const float deltaTime = 1.0f / 60.0f; // More or less 60 frames per second

	while (exitApplication != 1)
	{
		PreUpdate(); // Updates events

		/* Handle space pressed */
		if (SpaceWasPressed() == 1 && ball.vy == 0.0f)
		{
			// TODO 4: Apply negative gravity to have the ball bouncing again
			ball.vy = gravity*1.0f;

		}
		if (SpaceWasPressed() == 1 && ball2.vy == 0.0f)
		{
			// TODO 4: Apply negative gravity to have the ball bouncing again
			ball2.vy = gravity * 1.8f;
			
		}
		if (SpaceWasPressed() == 1 && ball3.vy == 0.0f)
		{
			// TODO 4: Apply negative gravity to have the ball bouncing again
			
			ball3.vy = gravity * 1.6f;

		}
		if (SpaceWasPressed() == 1 && ball4.vy == 0.0f)
		{
			// TODO 4: Apply negative gravity to have the ball bouncing again
			ball4.vy = gravity * 1.2f;
			
		}
		if (SpaceWasPressed() == 1 && ball5.vy == 0.0f)
		{
			// TODO 4: Apply negative gravity to have the ball bouncing again
			ball5.vy = gravity * 1.2f;

		}
		

		/* Draw the screen */
		SDL_Rect rect;
		rect.x = 0;
		rect.y = 0;
		rect.w = 640;
		rect.h = 480;
		Blit(texScreen, 0, 0, &rect);

		// Apply gravity
		// TODO 1: Update ball position based on the current position, the current velocity, the acceleration (gravity) and the time passed (deltaTime)
		// TODO 2: Update ball velocity based on the current velocity, the acceleration (gravity) and the time passed (deltaTime)
		ball.y = ball.y + ball.vy*deltaTime + (gravity*deltaTime*deltaTime)/2;
		ball.vy = ball.vy + deltaTime * gravity;
		
		ball2.y = ball2.y + ball2.vy*deltaTime + (gravity*deltaTime*deltaTime) / 2;
		ball2.vy = ball2.vy + deltaTime * gravity;
		ball3.y = ball3.y + ball3.vy*deltaTime + (gravity*deltaTime*deltaTime) / 2;
		ball3.vy = ball3.vy + deltaTime * gravity;
		ball4.y = ball4.y + ball4.vy*deltaTime + (gravity*deltaTime*deltaTime) / 2;
		ball4.vy = ball4.vy + deltaTime * gravity;
		ball5.y = ball5.y + ball5.vy*deltaTime + (gravity*deltaTime*deltaTime) / 2;
		ball5.vy = ball5.vy + deltaTime * gravity;


		// Ball touched the floor
		if (ball.y >= 350)
		{
			// TODO 3: If the floor was reached, do something, stop the ball, make it bounce...
			ball.y = ball.y - ball.vy*deltaTime - (gravity*deltaTime*deltaTime) / 2;
			ball.vy = (-ball.vy - deltaTime * gravity)*0.8f;
			if (abs(ball.vy) < 96.0f)
			{
				ball.vy = 0;
			}

		}
		if (ball2.y >= 350)
		{
			// TODO 3: If the floor was reached, do something, stop the ball, make it bounce...
			ball2.y = ball2.y - ball2.vy*deltaTime - (gravity*deltaTime*deltaTime) / 2;
			ball2.vy = (-ball2.vy - deltaTime * gravity)*0.8f;
			if (abs(ball2.vy) < 96.0f)
			{
				ball2.vy = 0;
			}
			
		}
		if (ball3.y >= 350)
		{
			// TODO 3: If the floor was reached, do something, stop the ball, make it bounce...
			ball3.y = ball3.y - ball3.vy*deltaTime - (gravity*deltaTime*deltaTime) / 2;
			ball3.vy = (-ball3.vy - deltaTime * gravity)*0.7f;
			if (abs(ball3.vy) < 96.0f)
			{
				ball3.vy = 0;
			}
			
		}
		if (ball4.y >= 350)
		{
			// TODO 3: If the floor was reached, do something, stop the ball, make it bounce...
			ball4.y = ball4.y - ball4.vy*deltaTime - (gravity*deltaTime*deltaTime) / 2;
			ball4.vy = (-ball4.vy - deltaTime * gravity)*0.5f;
			if (abs(ball4.vy) < 96.0f)
			{
				ball4.vy = 0;
			}
			
		}
		if (ball5.y >= 350)
		{
			// TODO 3: If the floor was reached, do something, stop the ball, make it bounce...
			ball5.y = ball5.y - ball5.vy*deltaTime - (gravity*deltaTime*deltaTime) / 2;
			ball5.vy = (-ball5.vy - deltaTime * gravity)*0.9f;
			if (abs(ball5.vy) < 96.0f)
			{
				ball5.vy = 0;
			}

		}
		

		/* Draw the ball */
		Blit(ball.tex, ball.x, ball.y, &ball.rect);

		//DRAW OTHER BALLS//
		Blit(ball2.tex, ball2.x, ball2.y, &ball2.rect);
		Blit(ball3.tex, ball3.x, ball3.y, &ball3.rect);
		Blit(ball4.tex, ball4.x, ball4.y, &ball4.rect);
		Blit(ball5.tex, ball5.x, ball5.y, &ball5.rect);

		PostUpdate(); // Presents the screen
	}

	// Unload textures
	UnloadTexture(texBall);
	UnloadTexture(texScreen);

	// Finalize SDL
	CleanUp();

	return 0;
}
