// File generated by CPPExt (CPP file)
//

#include "Geom2d_BoundedCurve.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCGeom2d_BoundedCurve::OCGeom2d_BoundedCurve(Handle(Geom2d_BoundedCurve)* nativeHandle) : OCGeom2d_Curve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_BoundedCurve(*nativeHandle);
}

