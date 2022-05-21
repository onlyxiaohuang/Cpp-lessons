
#include<sstream>
#include"Worker.hpp"


std::string Worker::Introduce() const noexcept
{
    
    std::stringstream stream;
    stream << "I am a Worker.I have a job" ;
    return Person::Introduce() + stream.str ();
}