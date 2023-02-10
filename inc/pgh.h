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
#include <string>
#include <map>
#include <vector>

#ifdef SFML_SYSTEM_IOS
#include <SFML/Main.hpp>
#endif

using namespace sf;

bool Start(sf::RenderWindow &window, const std::vector<std::string> &menuStart);
int  Menu(sf::RenderWindow &window, const std::vector<std::string>& mainMenu);
bool Info(sf::RenderWindow &window, const std::vector<std::string> &menuInfo);
int IsMenu(sf::RenderWindow &window, std::vector<sf::Sprite> &sprites, std::string nameMenu);
void Games(sf::RenderWindow &window);

// static int windowWidth = 1000;
// static int windowHeight = 700;

static int windowWidth = 1500;
static int windowHeight = 1000;

#endif