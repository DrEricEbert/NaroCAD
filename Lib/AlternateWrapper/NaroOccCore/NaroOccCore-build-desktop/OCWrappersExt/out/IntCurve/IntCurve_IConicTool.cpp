// File generated by CPPExt (CPP file)
//

#include "IntCurve_IConicTool.h"
#include "../Converter.h"
#include "../gp/gp_Elips2d.h"
#include "../gp/gp_Lin2d.h"
#include "../gp/gp_Circ2d.h"
#include "../gp/gp_Parab2d.h"
#include "../gp/gp_Hypr2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"


using namespace OCNaroWrappers;

OCIntCurve_IConicTool::OCIntCurve_IConicTool(IntCurve_IConicTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool() 
{
  nativeHandle = new IntCurve_IConicTool();
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool(OCNaroWrappers::OCIntCurve_IConicTool^ IT) 
{
  nativeHandle = new IntCurve_IConicTool(*((IntCurve_IConicTool*)IT->Handle));
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool(OCNaroWrappers::OCgp_Elips2d^ E) 
{
  nativeHandle = new IntCurve_IConicTool(*((gp_Elips2d*)E->Handle));
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool(OCNaroWrappers::OCgp_Lin2d^ L) 
{
  nativeHandle = new IntCurve_IConicTool(*((gp_Lin2d*)L->Handle));
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool(OCNaroWrappers::OCgp_Circ2d^ C) 
{
  nativeHandle = new IntCurve_IConicTool(*((gp_Circ2d*)C->Handle));
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool(OCNaroWrappers::OCgp_Parab2d^ P) 
{
  nativeHandle = new IntCurve_IConicTool(*((gp_Parab2d*)P->Handle));
}

OCIntCurve_IConicTool::OCIntCurve_IConicTool(OCNaroWrappers::OCgp_Hypr2d^ H) 
{
  nativeHandle = new IntCurve_IConicTool(*((gp_Hypr2d*)H->Handle));
}

OCgp_Pnt2d^ OCIntCurve_IConicTool::Value(Standard_Real X)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((IntCurve_IConicTool*)nativeHandle)->Value(X);
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCIntCurve_IConicTool::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ T)
{
  ((IntCurve_IConicTool*)nativeHandle)->D1(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)T->Handle));
}

 void OCIntCurve_IConicTool::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ T, OCNaroWrappers::OCgp_Vec2d^ N)
{
  ((IntCurve_IConicTool*)nativeHandle)->D2(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)T->Handle), *((gp_Vec2d*)N->Handle));
}

 Standard_Real OCIntCurve_IConicTool::Distance(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  return ((IntCurve_IConicTool*)nativeHandle)->Distance(*((gp_Pnt2d*)P->Handle));
}

OCgp_Vec2d^ OCIntCurve_IConicTool::GradDistance(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((IntCurve_IConicTool*)nativeHandle)->GradDistance(*((gp_Pnt2d*)P->Handle));
  return gcnew OCgp_Vec2d(tmp);
}

 Standard_Real OCIntCurve_IConicTool::FindParameter(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  return ((IntCurve_IConicTool*)nativeHandle)->FindParameter(*((gp_Pnt2d*)P->Handle));
}


