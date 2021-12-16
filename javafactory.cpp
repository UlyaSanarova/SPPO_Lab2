#include "javafactory.h"
#include "javaclassunit.h"
#include "javamethodunit.h"
#include "javaprintoperatorunit.h"

JavaFactory::JavaFactory()
{
}

std::string JavaFactory::getLanguage() const
{
    return "Java";
}

std::shared_ptr<AbstractClassUnit> JavaFactory::newClass(
        const std::string &name,
        AbstractClassUnit::AccessModifier access,
        AbstractClassUnit::Modifier modifier
) const
{
    return std::make_shared<JavaClassUnit>(name, access, modifier);
}

std::shared_ptr<AbstractMethodUnit> JavaFactory::newMethod(
        const std::string &name,
        const std::string &returnType,
        Unit::Flags flags
) const
{
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperatorUnit> JavaFactory::newPrintOperator(
        const std::string &text
) const
{
    return std::make_shared<JavaPrintOperatorUnit>(text);
}
