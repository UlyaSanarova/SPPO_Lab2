#include <iostream>
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

std::string generateProgram()
{
    ClassUnit myClass("MyClass");
    myClass.add(
        std::make_shared<MethodUnit>("testFunc1", "void", 0),
        ClassUnit::AccessModifierPublic
    );
    myClass.add(
        std::make_shared<MethodUnit>("testFunc2", "void", MethodUnit::ModifierStatic),
        ClassUnit::AccessModifierPrivate
    );
    myClass.add(
        std::make_shared<MethodUnit>("testFunc3", "void", MethodUnit::ModifierVirtual | MethodUnit::ModifierConst ),
        ClassUnit::AccessModifierPublic
    );
    auto method = std::make_shared<MethodUnit>("testFunc4", "void", MethodUnit::ModifierStatic);
    method->add(std::make_shared<PrintOperatorUnit>(R"(Hello, world!\n)"), 0);
    myClass.add(method, ClassUnit::AccessModifierProtected);
    return myClass.compile(0);
}

int main()
{
    std::cout << generateProgram() << std::endl;
    return 0;
}
