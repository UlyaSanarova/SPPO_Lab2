#include "methodunit.h"

AbstractMethodUnit::AbstractMethodUnit(const std::string &name, const std::string &returnType, Flags flags) :
    m_name(name),
    m_returnType(returnType),
    m_flags(flags)
{
}

void AbstractMethodUnit::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    m_body.push_back(unit);
}
