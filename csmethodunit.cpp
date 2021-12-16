#include "csmethodunit.h"

CSMethodUnit::CSMethodUnit(const std::string &name, const std::string &returnType, Flags flags) :
    AbstractMethodUnit(name, returnType, flags)
{
}

std::string CSMethodUnit::compile(unsigned int level) const
{
    std::string result = "";
    if (m_flags & ModifierStatic) {
        result += "static ";
    } else if (m_flags & ModifierVirtual) {
        result += "virtual ";
    }
    result += m_returnType + " ";
    result += m_name + "()";
    result += " {\n";
    for (const auto &b : m_body) {
        result += b->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
