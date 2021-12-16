#include "csclassunit.h"

CSClassUnit::CSClassUnit(const std::string &name, AbstractClassUnit::AccessModifier access) : AbstractClassUnit(name, access)
{
}

std::string CSClassUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level) + ACCESS_MODIFIERS[m_access] + " class " + m_name + " {\n";

    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); i++) {
        if (m_fields[i].empty())
            continue;
        for (const auto &f : m_fields[i])
            result += generateShift(level + 1) + ACCESS_MODIFIERS[i] + " " + f->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
