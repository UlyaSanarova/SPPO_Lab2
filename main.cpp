#include <iostream>
#include "cppclassunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

std::string generateProgram()
{
    CppClassUnit myClass("MyClass");
    myClass.add(
        std::make_shared<MethodUnit>("testFunc1", "void", 0),
        AbstractClassUnit::AccessModifierPublic
    );
    myClass.add(
        std::make_shared<MethodUnit>("testFunc2", "void", MethodUnit::ModifierStatic),
        AbstractClassUnit::AccessModifierPrivate
    );
    myClass.add(
        std::make_shared<MethodUnit>("testFunc3", "void", MethodUnit::ModifierVirtual | MethodUnit::ModifierConst ),
        AbstractClassUnit::AccessModifierPublic
    );
    auto method = std::make_shared<MethodUnit>("testFunc4", "void", MethodUnit::ModifierStatic);
    method->add(std::make_shared<PrintOperatorUnit>(R"(Hello, world!\n)"), 0);
    myClass.add(method, AbstractClassUnit::AccessModifierProtected);
    return myClass.compile(0);
}

int main()
{
    std::cout << generateProgram() << std::endl;
    return 0;
}
