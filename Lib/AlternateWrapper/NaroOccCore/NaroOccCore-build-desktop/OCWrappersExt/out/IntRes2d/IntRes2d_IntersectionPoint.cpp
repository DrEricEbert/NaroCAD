// File generated by CPPExt (CPP file)
//

#include "IntRes2d_IntersectionPoint.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"
#include "IntRes2d_Transition.h"


using namespace OCNaroWrappers;

OCIntRes2d_IntersectionPoint::OCIntRes2d_IntersectionPoint(IntRes2d_IntersectionPoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntRes2d_IntersectionPoint::OCIntRes2d_IntersectionPoint() 
{
  nativeHandle = new IntRes2d_IntersectionPoint();
}

OCIntRes2d_IntersectionPoint::OCIntRes2d_IntersectionPoint(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Uc1, Standard_Real Uc2, OCNaroWrappers::OCIntRes2d_Transition^ Trans1, OCNaroWrappers::OCIntRes2d_Transition^ Trans2, System::Boolean ReversedFlag) 
{
  nativeHandle = new IntRes2d_IntersectionPoint(*((gp_Pnt2d*)P->Handle), Uc1, Uc2, *((IntRes2d_Transition*)Trans1->Handle), *((IntRes2d_Transition*)Trans2->Handle), OCConverter::BooleanToStandardBoolean(ReversedFlag));
}

 void OCIntRes2d_IntersectionPoint::SetValues(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Uc1, Standard_Real Uc2, OCNaroWrappers::OCIntRes2d_Transition^ Trans1, OCNaroWrappers::OCIntRes2d_Transition^ Trans2, System::Boolean ReversedFlag)
{
  ((IntRes2d_IntersectionPoint*)nativeHandle)->SetValues(*((gp_Pnt2d*)P->Handle), Uc1, Uc2, *((IntRes2d_Transition*)Trans1->Handle), *((IntRes2d_Transition*)Trans2->Handle), OCConverter::BooleanToStandardBoolean(ReversedFlag));
}

OCgp_Pnt2d^ OCIntRes2d_IntersectionPoint::Value()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((IntRes2d_IntersectionPoint*)nativeHandle)->Value();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCIntRes2d_IntersectionPoint::ParamOnFirst()
{
  return ((IntRes2d_IntersectionPoint*)nativeHandle)->ParamOnFirst();
}

 Standard_Real OCIntRes2d_IntersectionPoint::ParamOnSecond()
{
  return ((IntRes2d_IntersectionPoint*)nativeHandle)->ParamOnSecond();
}

OCIntRes2d_Transition^ OCIntRes2d_IntersectionPoint::TransitionOfFirst()
{
  IntRes2d_Transition* tmp = new IntRes2d_Transition();
  *tmp = ((IntRes2d_IntersectionPoint*)nativeHandle)->TransitionOfFirst();
  return gcnew OCIntRes2d_Transition(tmp);
}

OCIntRes2d_Transition^ OCIntRes2d_IntersectionPoint::TransitionOfSecond()
{
  IntRes2d_Transition* tmp = new IntRes2d_Transition();
  *tmp = ((IntRes2d_IntersectionPoint*)nativeHandle)->TransitionOfSecond();
  return gcnew OCIntRes2d_Transition(tmp);
}


