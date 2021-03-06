// File generated by CPPExt (CPP file)
//

#include "TColGeom2d_SequenceNodeOfSequenceOfCurve.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "TColGeom2d_SequenceOfCurve.h"


using namespace OCNaroWrappers;

OCTColGeom2d_SequenceNodeOfSequenceOfCurve::OCTColGeom2d_SequenceNodeOfSequenceOfCurve(Handle(TColGeom2d_SequenceNodeOfSequenceOfCurve)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColGeom2d_SequenceNodeOfSequenceOfCurve(*nativeHandle);
}

OCTColGeom2d_SequenceNodeOfSequenceOfCurve::OCTColGeom2d_SequenceNodeOfSequenceOfCurve(OCNaroWrappers::OCGeom2d_Curve^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom2d_SequenceNodeOfSequenceOfCurve(new TColGeom2d_SequenceNodeOfSequenceOfCurve(*((Handle_Geom2d_Curve*)I->Handle), n, p));
}

OCGeom2d_Curve^ OCTColGeom2d_SequenceNodeOfSequenceOfCurve::Value()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_TColGeom2d_SequenceNodeOfSequenceOfCurve*)nativeHandle))->Value();
  return gcnew OCGeom2d_Curve(&tmp);
}


