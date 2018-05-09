// File generated by CPPExt (CPP file)
//

#include "gp_Vec.h"
#include "../Converter.h"
#include "gp_Dir.h"
#include "gp_XYZ.h"
#include "gp_Pnt.h"
#include "gp_Ax1.h"
#include "gp_Ax2.h"
#include "gp_Trsf.h"


using namespace OCNaroWrappers;

OCgp_Vec::OCgp_Vec(gp_Vec* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Vec::OCgp_Vec() 
{
  nativeHandle = new gp_Vec();
}

OCgp_Vec::OCgp_Vec(OCNaroWrappers::OCgp_Dir^ V) 
{
  nativeHandle = new gp_Vec(*((gp_Dir*)V->Handle));
}

OCgp_Vec::OCgp_Vec(OCNaroWrappers::OCgp_XYZ^ Coord) 
{
  nativeHandle = new gp_Vec(*((gp_XYZ*)Coord->Handle));
}

OCgp_Vec::OCgp_Vec(Standard_Real Xv, Standard_Real Yv, Standard_Real Zv) 
{
  nativeHandle = new gp_Vec(Xv, Yv, Zv);
}

OCgp_Vec::OCgp_Vec(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) 
{
  nativeHandle = new gp_Vec(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

 void OCgp_Vec::SetCoord(Standard_Integer Index, Standard_Real Xi)
{
  ((gp_Vec*)nativeHandle)->SetCoord(Index, Xi);
}

 void OCgp_Vec::SetCoord(Standard_Real Xv, Standard_Real Yv, Standard_Real Zv)
{
  ((gp_Vec*)nativeHandle)->SetCoord(Xv, Yv, Zv);
}

 void OCgp_Vec::SetX(Standard_Real X)
{
  ((gp_Vec*)nativeHandle)->SetX(X);
}

 void OCgp_Vec::SetY(Standard_Real Y)
{
  ((gp_Vec*)nativeHandle)->SetY(Y);
}

 void OCgp_Vec::SetZ(Standard_Real Z)
{
  ((gp_Vec*)nativeHandle)->SetZ(Z);
}

 void OCgp_Vec::SetXYZ(OCNaroWrappers::OCgp_XYZ^ Coord)
{
  ((gp_Vec*)nativeHandle)->SetXYZ(*((gp_XYZ*)Coord->Handle));
}

 Standard_Real OCgp_Vec::Coord(Standard_Integer Index)
{
  return ((gp_Vec*)nativeHandle)->Coord(Index);
}

 void OCgp_Vec::Coord(Standard_Real& Xv, Standard_Real& Yv, Standard_Real& Zv)
{
  ((gp_Vec*)nativeHandle)->Coord(Xv, Yv, Zv);
}

 Standard_Real OCgp_Vec::X()
{
  return ((gp_Vec*)nativeHandle)->X();
}

 Standard_Real OCgp_Vec::Y()
{
  return ((gp_Vec*)nativeHandle)->Y();
}

 Standard_Real OCgp_Vec::Z()
{
  return ((gp_Vec*)nativeHandle)->Z();
}

OCgp_XYZ^ OCgp_Vec::XYZ()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Vec*)nativeHandle)->XYZ();
  return gcnew OCgp_XYZ(tmp);
}

 System::Boolean OCgp_Vec::IsEqual(OCNaroWrappers::OCgp_Vec^ Other, Standard_Real LinearTolerance, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec*)nativeHandle)->IsEqual(*((gp_Vec*)Other->Handle), LinearTolerance, AngularTolerance));
}

 System::Boolean OCgp_Vec::IsNormal(OCNaroWrappers::OCgp_Vec^ Other, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec*)nativeHandle)->IsNormal(*((gp_Vec*)Other->Handle), AngularTolerance));
}

 System::Boolean OCgp_Vec::IsOpposite(OCNaroWrappers::OCgp_Vec^ Other, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec*)nativeHandle)->IsOpposite(*((gp_Vec*)Other->Handle), AngularTolerance));
}

 System::Boolean OCgp_Vec::IsParallel(OCNaroWrappers::OCgp_Vec^ Other, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec*)nativeHandle)->IsParallel(*((gp_Vec*)Other->Handle), AngularTolerance));
}

 Standard_Real OCgp_Vec::Angle(OCNaroWrappers::OCgp_Vec^ Other)
{
  return ((gp_Vec*)nativeHandle)->Angle(*((gp_Vec*)Other->Handle));
}

 Standard_Real OCgp_Vec::AngleWithRef(OCNaroWrappers::OCgp_Vec^ Other, OCNaroWrappers::OCgp_Vec^ VRef)
{
  return ((gp_Vec*)nativeHandle)->AngleWithRef(*((gp_Vec*)Other->Handle), *((gp_Vec*)VRef->Handle));
}

 Standard_Real OCgp_Vec::Magnitude()
{
  return ((gp_Vec*)nativeHandle)->Magnitude();
}

 Standard_Real OCgp_Vec::SquareMagnitude()
{
  return ((gp_Vec*)nativeHandle)->SquareMagnitude();
}

 void OCgp_Vec::Add(OCNaroWrappers::OCgp_Vec^ Other)
{
  ((gp_Vec*)nativeHandle)->Add(*((gp_Vec*)Other->Handle));
}

OCgp_Vec^ OCgp_Vec::Added(OCNaroWrappers::OCgp_Vec^ Other)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Added(*((gp_Vec*)Other->Handle));
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Subtract(OCNaroWrappers::OCgp_Vec^ Right)
{
  ((gp_Vec*)nativeHandle)->Subtract(*((gp_Vec*)Right->Handle));
}

OCgp_Vec^ OCgp_Vec::Subtracted(OCNaroWrappers::OCgp_Vec^ Right)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Subtracted(*((gp_Vec*)Right->Handle));
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Multiply(Standard_Real Scalar)
{
  ((gp_Vec*)nativeHandle)->Multiply(Scalar);
}

OCgp_Vec^ OCgp_Vec::Multiplied(Standard_Real Scalar)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Multiplied(Scalar);
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Divide(Standard_Real Scalar)
{
  ((gp_Vec*)nativeHandle)->Divide(Scalar);
}

OCgp_Vec^ OCgp_Vec::Divided(Standard_Real Scalar)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Divided(Scalar);
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Cross(OCNaroWrappers::OCgp_Vec^ Right)
{
  ((gp_Vec*)nativeHandle)->Cross(*((gp_Vec*)Right->Handle));
}

OCgp_Vec^ OCgp_Vec::Crossed(OCNaroWrappers::OCgp_Vec^ Right)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Crossed(*((gp_Vec*)Right->Handle));
  return gcnew OCgp_Vec(tmp);
}

 Standard_Real OCgp_Vec::CrossMagnitude(OCNaroWrappers::OCgp_Vec^ Right)
{
  return ((gp_Vec*)nativeHandle)->CrossMagnitude(*((gp_Vec*)Right->Handle));
}

 Standard_Real OCgp_Vec::CrossSquareMagnitude(OCNaroWrappers::OCgp_Vec^ Right)
{
  return ((gp_Vec*)nativeHandle)->CrossSquareMagnitude(*((gp_Vec*)Right->Handle));
}

 void OCgp_Vec::CrossCross(OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  ((gp_Vec*)nativeHandle)->CrossCross(*((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

OCgp_Vec^ OCgp_Vec::CrossCrossed(OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->CrossCrossed(*((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
  return gcnew OCgp_Vec(tmp);
}

 Standard_Real OCgp_Vec::Dot(OCNaroWrappers::OCgp_Vec^ Other)
{
  return ((gp_Vec*)nativeHandle)->Dot(*((gp_Vec*)Other->Handle));
}

 Standard_Real OCgp_Vec::DotCross(OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  return ((gp_Vec*)nativeHandle)->DotCross(*((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCgp_Vec::Normalize()
{
  ((gp_Vec*)nativeHandle)->Normalize();
}

OCgp_Vec^ OCgp_Vec::Normalized()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Normalized();
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Reverse()
{
  ((gp_Vec*)nativeHandle)->Reverse();
}

OCgp_Vec^ OCgp_Vec::Reversed()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Reversed();
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec^ V1, Standard_Real A2, OCNaroWrappers::OCgp_Vec^ V2, Standard_Real A3, OCNaroWrappers::OCgp_Vec^ V3, OCNaroWrappers::OCgp_Vec^ V4)
{
  ((gp_Vec*)nativeHandle)->SetLinearForm(A1, *((gp_Vec*)V1->Handle), A2, *((gp_Vec*)V2->Handle), A3, *((gp_Vec*)V3->Handle), *((gp_Vec*)V4->Handle));
}

 void OCgp_Vec::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec^ V1, Standard_Real A2, OCNaroWrappers::OCgp_Vec^ V2, Standard_Real A3, OCNaroWrappers::OCgp_Vec^ V3)
{
  ((gp_Vec*)nativeHandle)->SetLinearForm(A1, *((gp_Vec*)V1->Handle), A2, *((gp_Vec*)V2->Handle), A3, *((gp_Vec*)V3->Handle));
}

 void OCgp_Vec::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec^ V1, Standard_Real A2, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  ((gp_Vec*)nativeHandle)->SetLinearForm(A1, *((gp_Vec*)V1->Handle), A2, *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

 void OCgp_Vec::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec^ V1, Standard_Real A2, OCNaroWrappers::OCgp_Vec^ V2)
{
  ((gp_Vec*)nativeHandle)->SetLinearForm(A1, *((gp_Vec*)V1->Handle), A2, *((gp_Vec*)V2->Handle));
}

 void OCgp_Vec::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  ((gp_Vec*)nativeHandle)->SetLinearForm(A1, *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCgp_Vec::SetLinearForm(OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  ((gp_Vec*)nativeHandle)->SetLinearForm(*((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCgp_Vec::Mirror(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Vec*)nativeHandle)->Mirror(*((gp_Vec*)V->Handle));
}

OCgp_Vec^ OCgp_Vec::Mirrored(OCNaroWrappers::OCgp_Vec^ V)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Mirrored(*((gp_Vec*)V->Handle));
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Mirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Vec*)nativeHandle)->Mirror(*((gp_Ax1*)A1->Handle));
}

OCgp_Vec^ OCgp_Vec::Mirrored(OCNaroWrappers::OCgp_Ax1^ A1)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Mirrored(*((gp_Ax1*)A1->Handle));
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Mirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Vec*)nativeHandle)->Mirror(*((gp_Ax2*)A2->Handle));
}

OCgp_Vec^ OCgp_Vec::Mirrored(OCNaroWrappers::OCgp_Ax2^ A2)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Mirrored(*((gp_Ax2*)A2->Handle));
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Vec*)nativeHandle)->Rotate(*((gp_Ax1*)A1->Handle), Ang);
}

OCgp_Vec^ OCgp_Vec::Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Rotated(*((gp_Ax1*)A1->Handle), Ang);
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Scale(Standard_Real S)
{
  ((gp_Vec*)nativeHandle)->Scale(S);
}

OCgp_Vec^ OCgp_Vec::Scaled(Standard_Real S)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Scaled(S);
  return gcnew OCgp_Vec(tmp);
}

 void OCgp_Vec::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Vec*)nativeHandle)->Transform(*((gp_Trsf*)T->Handle));
}

OCgp_Vec^ OCgp_Vec::Transformed(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((gp_Vec*)nativeHandle)->Transformed(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Vec(tmp);
}

