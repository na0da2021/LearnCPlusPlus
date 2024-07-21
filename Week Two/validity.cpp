/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice  ]
  1name       [ Not Valid ] => starts with a number
  __name      [ Valid | Bad Practice]
  name@name   [ Not Valid ] => uses a special character
  name10name  [ Valid | bad Practice]
  name!name   [ Not Valid ] => uses a special character
  first_NAME  [ Valid |Bad Practice]
  first_name  [ Valid |Good Practice]
  firstName   [ Valid |Good Practice]
  first name  [ Not Valid ] => Due to space
  fn          [ Valid | Bad Practice as not related]
  public      [ Not Valid ] => Reserved Variable
  Public      [ Valid | Bad Practice]
*/
/*==========================================================*/
/*
#include <iostream>

int main()
{
    int Public = 5;
    return 0;
}
*/
