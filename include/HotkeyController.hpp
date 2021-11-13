#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>
#include <functional>
#include <unordered_map>
#include <cassert>

class HotkeysController
{
private:
    std::unordered_map<sf::Keyboard::Key,std::function<void()>> hotkey_bindings;
public:
    HotkeysController(std::unordered_map<sf::Keyboard::Key,std::function<void()>> new_hotkey_bindings);
    void checkForHotkeys(sf::Event key_released_event);
};