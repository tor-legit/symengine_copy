#ifndef SYMENGINE_REFINE_H
#define SYMENGINE_REFINE_H

#include <symengine/visitor.h>
#include <symengine/basic.h>
#include <symengine/assumptions.h>

namespace SymEngine
{

class RefineVisitor : public BaseVisitor<RefineVisitor, TransformVisitor>
{
private:
    const Assumptions *assumptions_;

public:
    using TransformVisitor::bvisit;

    RefineVisitor(const Assumptions *assumptions)
        : BaseVisitor<RefineVisitor, TransformVisitor>(),
          assumptions_(assumptions)
    {
    }

    void bvisit(const Abs &x);
    void bvisit(const Sign &x);
    void bvisit(const Floor &x);
    void bvisit(const Ceiling &x);
    void bvisit(const Conjugate &x);
    void bvisit(const Pow &x);
    void bvisit(const Log &x);
};

RCP<const Basic> refine(const RCP<const Basic> &x,
                        const Assumptions *assumptions);

} // namespace SymEngine

#endif
