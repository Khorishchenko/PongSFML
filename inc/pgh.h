#ifndef PGH_H
#define PGH_H

#include <iostream>
#include <cstring>
#include <time.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <curses.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <algorithm>

#ifdef SFML_SYSTEM_IOS
#include <SFML/Main.hpp>
#endif

using namespace sf;

bool Start(sf::RenderWindow &window);
int  Menu(sf::RenderWindow &window);
void Games(sf::RenderWindow &window);
bool Info(sf::RenderWindow &window);


static int windowWidth = 1000;
static int windowHeight = 700;

#endif