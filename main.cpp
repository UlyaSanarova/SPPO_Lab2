#include <iostream>
#include "cppfactory.h"
#include "csfactory.h"
#include "javafactory.h"

std::string generateProgram(AbstractFactory *factory)
{
    auto myClass = factory->newClass("MyClass", AbstractClassUnit::AccessModifierDefault, AbstractClassUnit::ModifierFinal);
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
    std::vector<AbstractFactory*> factories;
    CppFactory cppFactory;
    CSFactory csFactory;
    JavaFactory javaFactory;
    factories.push_back(&cppFactory);
    factories.push_back(&csFactory);
    factories.push_back(&javaFactory);

    for (const auto &factory : factories) {
        std::cout << "<Generating for " << factory->getLanguage() << ">" << std::endl;
        try {
            std::cout << generateProgram(factory) << std::endl;
        }  catch (const std::exception &err) {
            std::cout << "error: " << err.what() << std::endl;
        }
    }

    return 0;
}
