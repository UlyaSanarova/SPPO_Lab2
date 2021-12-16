#include "csfactory.h"
#include "csclassunit.h"
#include "csmethodunit.h"
#include "csprintoperatorunit.h"

CSFactory::CSFactory()
{
}

std::string CSFactory::getLanguage() const
{
    return "C#";
}

std::shared_ptr<AbstractClassUnit> CSFactory::newClass(
        const std::string &name,
        AbstractClassUnit::AccessModifier access,
        AbstractClassUnit::Modifier modifier
) const
{
    return std::make_shared<CSClassUnit>(name, access, modifier);
}

std::shared_ptr<AbstractMethodUnit> CSFactory::newMethod(
        const std::string &name,
        const std::string &returnType,
        Unit::Flags flags
) const
{
    return std::make_shared<CSMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperatorUnit> CSFactory::newPrintOperator(
        const std::string &text
) const
{
    return std::make_shared<CSPrintOperatorUnit>(text);
}
