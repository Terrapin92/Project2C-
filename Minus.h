// define the class Minus subclass of the SubExpression

class Minus : public SubExpression

{

public:

    //define the default construtor

    Minus(Expression* left), Expression* right) : SubExpression(left, right)

    {

    }

    //define the function evaluate()

    double evaluate()

    {

        //subtract the value of right from the value of the left, return the value.

        return left->evaluate() - right->evaluate();

    }

};