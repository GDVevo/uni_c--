#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    sf::RenderWindow window(sf::VideoMode(500, 500), L"Ìàòðèöà: Ïåðåçàãðóçêà");
    
    const int cellSize = 50;
    const int gridSize = 10;
    
    sf::RectangleShape cells[gridSize][gridSize];
    
    for (int y = 0; y < gridSize; ++y)
    {
        for (int x = 0; x < gridSize; ++x)
        {
            cells[x][y].setSize(sf::Vector2f(cellSize - 2, cellSize - 2));
            cells[x][y].setPosition(y * cellSize, x * cellSize);
            cells[x][y].setOutlineColor(sf::Color::Black);
            cells[x][y].setOutlineThickness(1);

            //Ïðîâåðêà ïî óñëîâèþ çàäàíèÿ
            if (x-y<= ((gridSize - 2) / 2) and x>= ((gridSize - 2) / 2) and x+y < (gridSize + (gridSize - 2) / 2))
            {
                cells[x][y].setFillColor(sf::Color::Green);
            }
            else
            {
                cells[x][y].setFillColor(sf::Color::White);
            }
        }
    }
    while (window.isOpen())
    {  
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        for (int y = 0;y < gridSize; ++y)
        {
            for (int x = 0; x < gridSize; ++x)
            {
                 window.draw(cells[x][y]);
            }
        }
        window.display();
    }
    return 0;
}
