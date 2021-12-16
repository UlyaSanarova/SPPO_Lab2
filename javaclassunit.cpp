#include "javaclassunit.h"

JavaClassUnit::JavaClassUnit(const std::string &name, AbstractClassUnit::AccessModifier access, AbstractClassUnit::Modifier modifier) :
    AbstractClassUnit(name, access, modifier)
{
}

std::string JavaClassUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level);
    if (m_access != AccessModifierDefault)
        result += ACCESS_MODIFIERS[m_access] + " ";
    if (m_modifier & ModifierStatic)
        result += "static ";
    if (m_modifier & ModifierAbstract) {
        result += "abstract ";
    } else if (m_modifier & ModifierFinal) {
        result += "final ";
    }
    result += "class " + m_name + " {\n";

    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); i++) {
        if (m_fields[i].empty())
            continue;
        for (const auto &f : m_fields[i])
            result += generateShift(level + 1) + ACCESS_MODIFIERS[i] + " " + f->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
