#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	RenderWindow window;
	Clock clock;
	Time time;
	bool animate = false;
	vec3 animation = vec3(0.0f);
	float rotation = 0.0f;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	int m_scoreText=0;
	int m_livesText = 3;
	double x_moved;
	bool m_spacePressed = false;
	int m_spacePressedTimer = 500;
	sf::RectangleShape m_playerSquare;
	sf::RectangleShape m_targetSquare;
	int m_gameOverTimer = 2000;
	bool switcher = false;
};

#endif  // ! GAME_H