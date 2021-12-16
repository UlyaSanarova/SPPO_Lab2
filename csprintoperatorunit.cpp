#include "csprintoperatorunit.h"

CSPrintOperatorUnit::CSPrintOperatorUnit(const std::string &text) : AbstractPrintOperatorUnit(text)
{
}

std::string CSPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "Console.Write(\"" + m_text + "\");\n";
}
