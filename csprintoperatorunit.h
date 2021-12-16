#ifndef CSPRINTOPERATORUNIT_H
#define CSPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

class CSPrintOperatorUnit : public AbstractPrintOperatorUnit
{
public:
    CSPrintOperatorUnit(const std::string &text);

    std::string compile(unsigned int level) const override;
};

#endif // CSPRINTOPERATORUNIT_H
