#ifndef UNIT_H
#define UNIT_H

#include <memory>
#include <string>

class Unit
{
protected:
    Unit();

public:
    using Flags = unsigned int;

    virtual ~Unit();

    virtual void add(const std::shared_ptr<Unit> &unit, Flags flags);

    virtual std::string compile(unsigned int level = 0) const = 0;

protected:
    virtual std::string generateShift(unsigned int level) const;
};

#endif // UNIT_H
