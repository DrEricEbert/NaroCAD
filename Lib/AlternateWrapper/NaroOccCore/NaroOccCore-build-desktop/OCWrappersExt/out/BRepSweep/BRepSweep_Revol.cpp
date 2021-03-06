// File generated by CPPExt (CPP file)
//

#include "BRepSweep_Revol.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../gp/gp_Ax1.h"
#include "../Sweep/Sweep_NumShape.h"
#include "../TopLoc/TopLoc_Location.h"


using namespace OCNaroWrappers;

OCBRepSweep_Revol::OCBRepSweep_Revol(BRepSweep_Revol* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepSweep_Revol::OCBRepSweep_Revol(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Ax1^ A, Quantity_PlaneAngle D, System::Boolean C) 
{
  nativeHandle = new BRepSweep_Revol(*((TopoDS_Shape*)S->Handle), *((gp_Ax1*)A->Handle), D, OCConverter::BooleanToStandardBoolean(C));
}

OCBRepSweep_Revol::OCBRepSweep_Revol(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Ax1^ A, System::Boolean C) 
{
  nativeHandle = new BRepSweep_Revol(*((TopoDS_Shape*)S->Handle), *((gp_Ax1*)A->Handle), OCConverter::BooleanToStandardBoolean(C));
}

OCTopoDS_Shape^ OCBRepSweep_Revol::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Revol::Shape(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->Shape(*((TopoDS_Shape*)aGenS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Revol::FirstShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->FirstShape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Revol::FirstShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->FirstShape(*((TopoDS_Shape*)aGenS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Revol::LastShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->LastShape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Revol::LastShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->LastShape(*((TopoDS_Shape*)aGenS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCgp_Ax1^ OCBRepSweep_Revol::Axe()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((BRepSweep_Revol*)nativeHandle)->Axe();
  return gcnew OCgp_Ax1(tmp);
}

 Quantity_PlaneAngle OCBRepSweep_Revol::Angle()
{
  return ((BRepSweep_Revol*)nativeHandle)->Angle();
}


