#include <iostream>
#include "cppfactory.h"

std::string generateProgram(AbstractFactory *factory)
{
    auto myClass = factory->newClass("MyClass");
    myClass->add(
        factory->newMethod("testFunc1", "void", 0),
        AbstractClassUnit::AccessModifierPublic
    );
    myClass->add(
        factory->newMethod("testFunc2", "void", AbstractMethodUnit::ModifierStatic),
        AbstractClassUnit::AccessModifierPrivate
    );
    myClass->add(
        factory->newMethod("testFunc3", "void", AbstractMethodUnit::ModifierVirtual | AbstractMethodUnit::ModifierConst ),
        AbstractClassUnit::AccessModifierPublic
    );
    auto method = factory->newMethod("testFunc4", "void", AbstractMethodUnit::ModifierStatic);
    method->add(factory->newPrintOperator(R"(Hello, world!\n)"), 0);
    myClass->add(method, AbstractClassUnit::AccessModifierProtected);
    return myClass->compile(0);
}

int main()
{
    CppFactory factory;
    std::cout << generateProgram(&factory) << std::endl;
    return 0;
}
