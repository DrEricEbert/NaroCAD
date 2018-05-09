// File generated by CPPExt (CPP file)
//

#include "ShapeExtend_DataMapOfShapeListOfMsg.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Message/Message_ListOfMsg.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg.h"
#include "ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.h"


using namespace OCNaroWrappers;

OCShapeExtend_DataMapOfShapeListOfMsg::OCShapeExtend_DataMapOfShapeListOfMsg(ShapeExtend_DataMapOfShapeListOfMsg* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCShapeExtend_DataMapOfShapeListOfMsg::OCShapeExtend_DataMapOfShapeListOfMsg(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new ShapeExtend_DataMapOfShapeListOfMsg(NbBuckets);
}

OCShapeExtend_DataMapOfShapeListOfMsg^ OCShapeExtend_DataMapOfShapeListOfMsg::Assign(OCNaroWrappers::OCShapeExtend_DataMapOfShapeListOfMsg^ Other)
{
  ShapeExtend_DataMapOfShapeListOfMsg* tmp = new ShapeExtend_DataMapOfShapeListOfMsg(0);
  *tmp = ((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->Assign(*((ShapeExtend_DataMapOfShapeListOfMsg*)Other->Handle));
  return gcnew OCShapeExtend_DataMapOfShapeListOfMsg(tmp);
}

 void OCShapeExtend_DataMapOfShapeListOfMsg::ReSize(Standard_Integer NbBuckets)
{
  ((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCShapeExtend_DataMapOfShapeListOfMsg::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCMessage_ListOfMsg^ I)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((Message_ListOfMsg*)I->Handle)));
}

 System::Boolean OCShapeExtend_DataMapOfShapeListOfMsg::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCShapeExtend_DataMapOfShapeListOfMsg::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCMessage_ListOfMsg^ OCShapeExtend_DataMapOfShapeListOfMsg::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Message_ListOfMsg* tmp = new Message_ListOfMsg();
  *tmp = ((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCMessage_ListOfMsg(tmp);
}

OCMessage_ListOfMsg^ OCShapeExtend_DataMapOfShapeListOfMsg::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Message_ListOfMsg* tmp = new Message_ListOfMsg();
  *tmp = ((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCMessage_ListOfMsg(tmp);
}

 Standard_Address OCShapeExtend_DataMapOfShapeListOfMsg::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCShapeExtend_DataMapOfShapeListOfMsg::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((ShapeExtend_DataMapOfShapeListOfMsg*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}

