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

	//ARRAYS//
	Ball arrball[5] = {};
	int n = 5, dis = 70;

	for (int i = 0; i < n; i++)
	{
		arrball[i].rect = { 0, 0, 100, 100 };
		arrball[i].tex = texBall;
		arrball[i].x = dis;
		arrball[i].y = 100;
		arrball[i].vx = 0;
		arrball[i].vy = 0;

		dis = dis + 100;


		const float gravity = 600.0f;         // pixels / second^2
		const float deltaTime = 1.0f / 60.0f; // More or less 60 frames per second

		while (exitApplication != 1)
		{
			PreUpdate(); // Updates events
			/* Handle space pressed */
			if (SpaceWasPressed() == 1 && arrball[i].vy == 0.0f)
			{
				// TODO 4: Apply negative gravity to have the ball bouncing again
				arrball[i].vy = gravity * 1.0f;

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
			
			arrball[i].y = arrball[i].y + arrball[i].vy*deltaTime + (gravity*deltaTime*deltaTime) / 2;
			arrball[i].vy = arrball[i].vy + deltaTime * gravity;

			// Ball touched the floor
			if (arrball[i].y >= 350)
			{
				// TODO 3: If the floor was reached, do something, stop the ball, make it bounce...
				arrball[i].y = arrball[i].y - arrball[i].vy*deltaTime - (gravity*deltaTime*deltaTime) / 2;
				arrball[i].vy = (-arrball[i].vy - deltaTime * gravity)*0.8f;
				if (abs(arrball[i].vy) < 96.0f)
				{
					arrball[i].vy = 0;
				}
			}

			/* Draw the ball */
			Blit(arrball[i].tex, arrball[i].x, arrball[i].y, &arrball[i].rect);
			

	}

	
	

		PostUpdate(); // Presents the screen
	}

	// Unload textures
	UnloadTexture(texBall);
	UnloadTexture(texScreen);

	// Finalize SDL
	CleanUp();

	return 0;
}
