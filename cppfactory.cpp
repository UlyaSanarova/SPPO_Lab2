#include "cppfactory.h"
#include "cppclassunit.h"
#include "cppmethodunit.h"
#include "cppprintoperatorunit.h"

CppFactory::CppFactory()
{
}

std::string CppFactory::getLanguage() const
{
    return "C++";
}

std::shared_ptr<AbstractClassUnit> CppFactory::newClass(
        const std::string &name,
        AbstractClassUnit::AccessModifier access,
        AbstractClassUnit::Modifier modifier
) const
{
    return std::make_shared<CppClassUnit>(name, modifier);
}

std::shared_ptr<AbstractMethodUnit> CppFactory::newMethod(
        const std::string &name,
        const std::string &returnType,
        Unit::Flags flags
) const
{
    return std::make_shared<CppMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperatorUnit> CppFactory::newPrintOperator(
        const std::string &text
) const
{
    return std::make_shared<CppPrintOperatorUnit>(text);
}
