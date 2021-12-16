#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

class CppPrintOperatorUnit : public AbstractPrintOperatorUnit
{
public:
    CppPrintOperatorUnit(const std::string &text);

    std::string compile(unsigned int level) const override;
};

#endif // CPPPRINTOPERATORUNIT_H
