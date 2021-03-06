// File generated by CPPExt (CPP file)
//

#include "Geom_Parabola.h"
#include "../Converter.h"
#include "../gp/gp_Parab.h"
#include "../gp/gp_Ax2.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Trsf.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_Parabola::OCGeom_Parabola(Handle(Geom_Parabola)* nativeHandle) : OCGeom_Conic((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_Parabola(*nativeHandle);
}

OCGeom_Parabola::OCGeom_Parabola(OCNaroWrappers::OCgp_Parab^ Prb) : OCGeom_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Parabola(new Geom_Parabola(*((gp_Parab*)Prb->Handle)));
}

OCGeom_Parabola::OCGeom_Parabola(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real Focal) : OCGeom_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Parabola(new Geom_Parabola(*((gp_Ax2*)A2->Handle), Focal));
}

OCGeom_Parabola::OCGeom_Parabola(OCNaroWrappers::OCgp_Ax1^ D, OCNaroWrappers::OCgp_Pnt^ F) : OCGeom_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Parabola(new Geom_Parabola(*((gp_Ax1*)D->Handle), *((gp_Pnt*)F->Handle)));
}

 void OCGeom_Parabola::SetFocal(Standard_Real Focal)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->SetFocal(Focal);
}

 void OCGeom_Parabola::SetParab(OCNaroWrappers::OCgp_Parab^ Prb)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->SetParab(*((gp_Parab*)Prb->Handle));
}

OCgp_Parab^ OCGeom_Parabola::Parab()
{
  gp_Parab* tmp = new gp_Parab();
  *tmp = (*((Handle_Geom_Parabola*)nativeHandle))->Parab();
  return gcnew OCgp_Parab(tmp);
}

 Standard_Real OCGeom_Parabola::ReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->ReversedParameter(U);
}

 Standard_Real OCGeom_Parabola::FirstParameter()
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->FirstParameter();
}

 Standard_Real OCGeom_Parabola::LastParameter()
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->LastParameter();
}

 System::Boolean OCGeom_Parabola::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_Parabola*)nativeHandle))->IsClosed());
}

 System::Boolean OCGeom_Parabola::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_Parabola*)nativeHandle))->IsPeriodic());
}

OCgp_Ax1^ OCGeom_Parabola::Directrix()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_Parabola*)nativeHandle))->Directrix();
  return gcnew OCgp_Ax1(tmp);
}

 Standard_Real OCGeom_Parabola::Eccentricity()
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->Eccentricity();
}

OCgp_Pnt^ OCGeom_Parabola::Focus()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Geom_Parabola*)nativeHandle))->Focus();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCGeom_Parabola::Focal()
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->Focal();
}

 Standard_Real OCGeom_Parabola::Parameter()
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->Parameter();
}

 void OCGeom_Parabola::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->D0(U, *((gp_Pnt*)P->Handle));
}

 void OCGeom_Parabola::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->D1(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle));
}

 void OCGeom_Parabola::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->D2(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCGeom_Parabola::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->D3(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

OCgp_Vec^ OCGeom_Parabola::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_Parabola*)nativeHandle))->DN(U, N);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_Parabola::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_Parabola*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

 Standard_Real OCGeom_Parabola::TransformedParameter(Standard_Real U, OCNaroWrappers::OCgp_Trsf^ T)
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->TransformedParameter(U, *((gp_Trsf*)T->Handle));
}

 Standard_Real OCGeom_Parabola::ParametricTransformation(OCNaroWrappers::OCgp_Trsf^ T)
{
  return (*((Handle_Geom_Parabola*)nativeHandle))->ParametricTransformation(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_Parabola::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_Parabola*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}


