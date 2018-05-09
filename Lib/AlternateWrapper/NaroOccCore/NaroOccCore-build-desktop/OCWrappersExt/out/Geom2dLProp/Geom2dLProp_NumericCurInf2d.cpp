// File generated by CPPExt (CPP file)
//

#include "Geom2dLProp_NumericCurInf2d.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Dir2d.h"
#include "Geom2dLProp_Curve2dTool.h"
#include "Geom2dLProp_FCurExtOfNumericCurInf2d.h"
#include "Geom2dLProp_FCurNulOfNumericCurInf2d.h"
#include "../LProp/LProp_CurAndInf.h"


using namespace OCNaroWrappers;

OCGeom2dLProp_NumericCurInf2d::OCGeom2dLProp_NumericCurInf2d(Geom2dLProp_NumericCurInf2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeom2dLProp_NumericCurInf2d::OCGeom2dLProp_NumericCurInf2d() 
{
  nativeHandle = new Geom2dLProp_NumericCurInf2d();
}

 void OCGeom2dLProp_NumericCurInf2d::PerformCurExt(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCLProp_CurAndInf^ Result)
{
  ((Geom2dLProp_NumericCurInf2d*)nativeHandle)->PerformCurExt(*((Handle_Geom2d_Curve*)C->Handle), *((LProp_CurAndInf*)Result->Handle));
}

 void OCGeom2dLProp_NumericCurInf2d::PerformInf(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCLProp_CurAndInf^ Result)
{
  ((Geom2dLProp_NumericCurInf2d*)nativeHandle)->PerformInf(*((Handle_Geom2d_Curve*)C->Handle), *((LProp_CurAndInf*)Result->Handle));
}

 void OCGeom2dLProp_NumericCurInf2d::PerformCurExt(OCNaroWrappers::OCGeom2d_Curve^ C, Standard_Real UMin, Standard_Real UMax, OCNaroWrappers::OCLProp_CurAndInf^ Result)
{
  ((Geom2dLProp_NumericCurInf2d*)nativeHandle)->PerformCurExt(*((Handle_Geom2d_Curve*)C->Handle), UMin, UMax, *((LProp_CurAndInf*)Result->Handle));
}

 void OCGeom2dLProp_NumericCurInf2d::PerformInf(OCNaroWrappers::OCGeom2d_Curve^ C, Standard_Real UMin, Standard_Real UMax, OCNaroWrappers::OCLProp_CurAndInf^ Result)
{
  ((Geom2dLProp_NumericCurInf2d*)nativeHandle)->PerformInf(*((Handle_Geom2d_Curve*)C->Handle), UMin, UMax, *((LProp_CurAndInf*)Result->Handle));
}

 System::Boolean OCGeom2dLProp_NumericCurInf2d::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dLProp_NumericCurInf2d*)nativeHandle)->IsDone());
}

