// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepBuild_DataMapOfShapeReal.h"
#include "TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal::OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal(TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal::OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal();
}

OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal::OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal(OCNaroWrappers::OCTopOpeBRepBuild_DataMapOfShapeReal^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal(*((TopOpeBRepBuild_DataMapOfShapeReal*)aMap->Handle));
}

 void OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal::Initialize(OCNaroWrappers::OCTopOpeBRepBuild_DataMapOfShapeReal^ aMap)
{
  ((TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal*)nativeHandle)->Initialize(*((TopOpeBRepBuild_DataMapOfShapeReal*)aMap->Handle));
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Real OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal::Value()
{
  return ((TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal*)nativeHandle)->Value();
}


