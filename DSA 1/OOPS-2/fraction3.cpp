class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction()
    {
    }
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const
    {
        return numerator;
    }
    int getDenominator() const
    {
        return denominator;
    }
    void setNumerator(int n)
    {
        numerator = n;
    }
    void setDenominator(int d)
    {
        denominator = d;
    }
    void print() const
    {
        cout << this->numerator << " / " << this->denominator << "\n";
    }
    void Simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    Fraction add(Fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        Fraction fnew(num, lcm);
        // numerator = num;
        // denominator = lcm;
        fnew.Simplify();
        return fnew;
    }
    Fraction operator+(Fraction const &f2)const
    { // operator'operator that is to be overloaded'
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        Fraction fnew(num, lcm);
        // numerator = num;
        // denominator = lcm;
        fnew.Simplify();
        return fnew;
    }
    void multiply(Fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        Simplify();
    }
    Fraction operator*(Fraction const &f2)const 
    {
        int num = numerator * f2.numerator;
        int den = denominator * f2.denominator;
        Fraction f4(num, den);
        f4.Simplify();
        return f4;
    }
    bool operator==(Fraction const &f2)const 
    {
       return (numerator==f2.numerator && (denominator==f2.denominator));
    }
    // void operator++(){
    //     numerator = numerator + denominator;
    //     Simplify();
    // }
    Fraction& operator++(){ // to prevent the internal copying ... we can return the object by reference...
        numerator = numerator + denominator;
        Simplify();
        return *this;
    }
    //Post-increament
    Fraction operator++(int){
        Fraction fnew(numerator,denominator);
       this->numerator= this->numerator + this->denominator;
        Simplify();
        fnew.Simplify();
        return fnew;
    }
    Fraction& operator+=(Fraction const &f2) {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        Simplify();
        return *this;
    }
};