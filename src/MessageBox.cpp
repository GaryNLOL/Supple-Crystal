#include "../include/MessageBox.hpp"

void MessageBox::run() const
{
    sf::RenderWindow window(sf::VideoMode(200, 200), this->title);
    sf::Text text(this->name, this->font, 16);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::EventType::Closed:
                window.close();
            default:
                break;
            }
            window.clear();
            window.draw(text);
            window.display();
        }
    }
}

MessageBox::MessageBox(const std::string& new_title, const std::string& new_name, const sf::Font& new_font)
    : title(new_title)
    , name(new_name)
    , font(new_font)
{
    this->run();
}