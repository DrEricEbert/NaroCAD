// File generated by CPPExt (CPP file)
//

#include "GCPnts_QuasiUniformAbscissa.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"


using namespace OCNaroWrappers;

OCGCPnts_QuasiUniformAbscissa::OCGCPnts_QuasiUniformAbscissa(GCPnts_QuasiUniformAbscissa* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGCPnts_QuasiUniformAbscissa::OCGCPnts_QuasiUniformAbscissa() 
{
  nativeHandle = new GCPnts_QuasiUniformAbscissa();
}

OCGCPnts_QuasiUniformAbscissa::OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints) 
{
  nativeHandle = new GCPnts_QuasiUniformAbscissa(*((Adaptor3d_Curve*)C->Handle), NbPoints);
}

OCGCPnts_QuasiUniformAbscissa::OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2) 
{
  nativeHandle = new GCPnts_QuasiUniformAbscissa(*((Adaptor3d_Curve*)C->Handle), NbPoints, U1, U2);
}

 void OCGCPnts_QuasiUniformAbscissa::Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints)
{
  ((GCPnts_QuasiUniformAbscissa*)nativeHandle)->Initialize(*((Adaptor3d_Curve*)C->Handle), NbPoints);
}

 void OCGCPnts_QuasiUniformAbscissa::Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2)
{
  ((GCPnts_QuasiUniformAbscissa*)nativeHandle)->Initialize(*((Adaptor3d_Curve*)C->Handle), NbPoints, U1, U2);
}

OCGCPnts_QuasiUniformAbscissa::OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints) 
{
  nativeHandle = new GCPnts_QuasiUniformAbscissa(*((Adaptor2d_Curve2d*)C->Handle), NbPoints);
}

OCGCPnts_QuasiUniformAbscissa::OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2) 
{
  nativeHandle = new GCPnts_QuasiUniformAbscissa(*((Adaptor2d_Curve2d*)C->Handle), NbPoints, U1, U2);
}

 void OCGCPnts_QuasiUniformAbscissa::Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints)
{
  ((GCPnts_QuasiUniformAbscissa*)nativeHandle)->Initialize(*((Adaptor2d_Curve2d*)C->Handle), NbPoints);
}

 void OCGCPnts_QuasiUniformAbscissa::Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2)
{
  ((GCPnts_QuasiUniformAbscissa*)nativeHandle)->Initialize(*((Adaptor2d_Curve2d*)C->Handle), NbPoints, U1, U2);
}

 System::Boolean OCGCPnts_QuasiUniformAbscissa::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((GCPnts_QuasiUniformAbscissa*)nativeHandle)->IsDone());
}

 Standard_Integer OCGCPnts_QuasiUniformAbscissa::NbPoints()
{
  return ((GCPnts_QuasiUniformAbscissa*)nativeHandle)->NbPoints();
}

 Standard_Real OCGCPnts_QuasiUniformAbscissa::Parameter(Standard_Integer Index)
{
  return ((GCPnts_QuasiUniformAbscissa*)nativeHandle)->Parameter(Index);
}

