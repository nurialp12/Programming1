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


/*
 * Struct containing information about a GameObject.
 * Image information and screen position.
 */
struct GameObject
{
	SDL_Texture *tex; // texture
	SDL_Rect rect;    // position in the texture
	float x, y;       // position in the world
};

/*
 * This function renders a game object on screen.
 */
void renderGameObject(GameObject object)
{
	Blit(object.tex, object.x, object.y, &object.rect);
}

int main(int argc, char* argv[])
{
	// Initialize SDL
	if (Init() == 0) {
		return 1;
	}

	// Load a texture
	SDL_Texture *texBackground = LoadTexture("Assets/background.png");
	SDL_Texture *texLifebar = LoadTexture("Assets/lifebar.png");
	SDL_Texture *texKen = LoadTexture("Assets/ken.png");
	SDL_Texture *texRyu = LoadTexture("Assets/ryu.png");

	// Creating Game objects
	GameObject goBackground = {
		texBackground,
		{0, 0, 640, 480},
		0, 0
	};
	GameObject goLifebar = {
		texLifebar,
		{0, 0, 640, 100},
		0, 0
	};
	GameObject goRyu = {
		texRyu,
		{0, 0, 116, 184},
		430, 290
	};
	GameObject goKen = {
		texKen,
		{0, 0, 116, 184},
		100, 290
	};

#define USE_BIT_FLAGS

	// Render flags
#if defined(USE_BIT_FLAGS)
	int renderFlags = 0;
	// TODO 1: Enable renderFlags' bit 0 to render the background
	// TODO 2: Enable renderFlags' bit 1 to render the lifebar
	// TODO 3: Enable renderFlags' bit 2 to render the players
	renderFlags = 1 << 2 | 1 << 1 | 1;
#else
	int mustRenderBackground = 1;
	int mustRenderLifebar = 1;
	int mustRenderPlayers = 1;
#endif

	while (exitApplication != 1)
	{
		// Update events
		PreUpdate();

#if defined(USE_BIT_FLAGS)
		// Handle events
		if (KeyWasPressed(SDL_SCANCODE_1))
		{
			// TODO 4: Switch renderFlags' bit 0
			/*renderFlags = ~((~(0)) ^ renderFlags | 1);*/
			renderFlags = renderFlags ^ (1);
		}
		else if (KeyWasPressed(SDL_SCANCODE_2))
		{
			// TODO 5: Switch renderFlags' bit 1
			/*renderFlags = ~((~(0)) ^ renderFlags | 1 << 1);*/
			renderFlags = renderFlags ^ (1<<1);
		}
		else if (KeyWasPressed(SDL_SCANCODE_3))
		{
			// TODO 6: Switch renderFlags' bit 2
			/*renderFlags = ~((~(0)) ^ renderFlags | 1 << 2);*/
			renderFlags = renderFlags ^ (1 << 2);
		}

		// Render game objects
		// TODO 7: If renderFlags' bit 0 is set, render the background
		if ((renderFlags & 1) != 0)
		{
			renderGameObject(goBackground);
		
		}
		// TODO 8: If renderFlags' bit 1 is set, render the lifebar
		if ((renderFlags & (1<<1)) != 0)
		{
			renderGameObject(goLifebar);
		
		}
		// TODO 9: If renderFlags' bit 2 is set, render the players
		if ((renderFlags & (1 << 2)) != 0)
		{
			renderGameObject(goRyu);
			renderGameObject(goKen);
			
		}
#else
		// Handle events
		if (KeyWasPressed(SDL_SCANCODE_1))
		{
			mustRenderBackground = !mustRenderBackground; // flip mustRenderBackground
		}
		else if (KeyWasPressed(SDL_SCANCODE_2))
		{
			mustRenderLifebar = !mustRenderLifebar; // flip mustRenderLifebar
		}
		else if (KeyWasPressed(SDL_SCANCODE_3))
		{
			mustRenderPlayers = !mustRenderPlayers; // flip mustRenderPlayers
		}

		// Render game objects
		if (mustRenderBackground == 1) {
			renderGameObject(goBackground);
		}
		if (mustRenderLifebar == 1) {
			renderGameObject(goLifebar);
		}
		if (mustRenderPlayers == 1) {
			renderGameObject(goRyu);
			renderGameObject(goKen);
		}
#endif

		// Render the screen
		PostUpdate();
	}

	// Unload textures
	UnloadTexture(texRyu);
	UnloadTexture(texKen);
	UnloadTexture(texLifebar);
	UnloadTexture(texBackground);

	// Finalize SDL
	CleanUp();

	return 0;
}
