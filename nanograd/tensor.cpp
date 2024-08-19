#include<iostream>

/* A tensor is a multi-dimensional matrix containing
 * elements of a single data type dType. */
template<typename dType> 
class Tensor
{
public:
  dType data;    
  double grad;     //grad, if .backwards was called 
  
private:
  bool requires_grad;

public:
  Tensor() { data = 0; grad = 0; requires_grad = false; } 
  Tensor(dType d) { data = d; grad = 0; requires_grad = false; }

  void PrintTensor() { std::cout << this->data << std::endl; }
  void RequiresGrad(bool b) { this->requires_grad = b; }

  ~Tensor(){ }

private:

};

int main()
{
  auto a = Tensor(5);
  a.PrintTensor();
}

