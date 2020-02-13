#include <animal.h>

#include <iostream>
#include <string>

Animal::Animal(const std::string& name, const std::string& type):
    name_(name),
    type_(type),
    roam_style_(nullptr)
{
}

void Animal::WakeUp() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " wakes up" << std::endl;
    std::cout << std::endl;
}

void Animal::Eat() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " eats" << std::endl;
    std::cout << std::endl;
}

void Animal::Sleep() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " sleeps" << std::endl;
    std::cout << std::endl;
}

void Animal::Roam() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_;

    if (roam_style_ == nullptr)
        std::cout << " roam behaviour not set" << std::endl;
    else
        std::cout << " " << roam_style_->Roam() << std::endl;

    std::cout << std::endl;
}
