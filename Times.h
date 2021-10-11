// define the class Minus subclass of the SubExpression

class Times : public SubExpression

{

public:

    //define the default construtor

    Times(Expression* left, Expression* right) : SubExpression(left, right)

    {

    }

    //define the function evaluate()

    double evaluate()

    {

        //multiple the value of right and value of the left, return the value.

        return left->evaluate() * right->evaluate();

    }

};
