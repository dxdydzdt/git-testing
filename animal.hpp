#include "includes.hpp"

class animal {
    std::string m_name;
public:
    animal(std::string name) {
        
    }
    void set_name(std::string name) {
        m_name = name;
    }

    std::string get_name() {
        return m_name;
    }
}