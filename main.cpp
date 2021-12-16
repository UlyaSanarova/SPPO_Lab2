#include <iostream>
#include "cppclassunit.h"
#include "cppmethodunit.h"
#include "printoperatorunit.h"

std::string generateProgram()
{
    CppClassUnit myClass("MyClass");
    myClass.add(
        std::make_shared<CppMethodUnit>("testFunc1", "void", 0),
        AbstractClassUnit::AccessModifierPublic
    );
    myClass.add(
        std::make_shared<CppMethodUnit>("testFunc2", "void", AbstractMethodUnit::ModifierStatic),
        AbstractClassUnit::AccessModifierPrivate
    );
    myClass.add(
        std::make_shared<CppMethodUnit>("testFunc3", "void", AbstractMethodUnit::ModifierVirtual | AbstractMethodUnit::ModifierConst ),
        AbstractClassUnit::AccessModifierPublic
    );
    auto method = std::make_shared<CppMethodUnit>("testFunc4", "void", AbstractMethodUnit::ModifierStatic);
    method->add(std::make_shared<PrintOperatorUnit>(R"(Hello, world!\n)"), 0);
    myClass.add(method, AbstractClassUnit::AccessModifierProtected);
    return myClass.compile(0);
}

int main()
{
    std::cout << generateProgram() << std::endl;
    return 0;
}
