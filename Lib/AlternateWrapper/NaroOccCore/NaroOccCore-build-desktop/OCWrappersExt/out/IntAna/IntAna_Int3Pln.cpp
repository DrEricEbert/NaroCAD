// File generated by CPPExt (CPP file)
//

#include "IntAna_Int3Pln.h"
#include "../Converter.h"
#include "../gp/gp_Pln.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntAna_Int3Pln::OCIntAna_Int3Pln(IntAna_Int3Pln* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntAna_Int3Pln::OCIntAna_Int3Pln() 
{
  nativeHandle = new IntAna_Int3Pln();
}

OCIntAna_Int3Pln::OCIntAna_Int3Pln(OCNaroWrappers::OCgp_Pln^ P1, OCNaroWrappers::OCgp_Pln^ P2, OCNaroWrappers::OCgp_Pln^ P3) 
{
  nativeHandle = new IntAna_Int3Pln(*((gp_Pln*)P1->Handle), *((gp_Pln*)P2->Handle), *((gp_Pln*)P3->Handle));
}

 void OCIntAna_Int3Pln::Perform(OCNaroWrappers::OCgp_Pln^ P1, OCNaroWrappers::OCgp_Pln^ P2, OCNaroWrappers::OCgp_Pln^ P3)
{
  ((IntAna_Int3Pln*)nativeHandle)->Perform(*((gp_Pln*)P1->Handle), *((gp_Pln*)P2->Handle), *((gp_Pln*)P3->Handle));
}

 System::Boolean OCIntAna_Int3Pln::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna_Int3Pln*)nativeHandle)->IsDone());
}

 System::Boolean OCIntAna_Int3Pln::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna_Int3Pln*)nativeHandle)->IsEmpty());
}

OCgp_Pnt^ OCIntAna_Int3Pln::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntAna_Int3Pln*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}


