#include "javamethodunit.h"

JavaMethodUnit::JavaMethodUnit(const std::string &name, const std::string &returnType, Flags flags) :
    AbstractMethodUnit(name, returnType, flags)
{
}

std::string JavaMethodUnit::compile(unsigned int level) const
{
    std::string result = "";
    if (m_flags & ModifierStatic) {
        result += "static ";
    } else if (m_flags & ModifierAbstract) {
        result += "abstract ";
    } else if ((m_flags & ModifierVirtual) == 0) {
        result += "final ";
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
