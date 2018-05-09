// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_Array1OfBiPoint_OCWrappers_HeaderFile
#define _BRepMesh_Array1OfBiPoint_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_Array1OfBiPoint.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepMesh_BiPoint;



public ref class OCBRepMesh_Array1OfBiPoint  {

protected:
  BRepMesh_Array1OfBiPoint* nativeHandle;
  OCBRepMesh_Array1OfBiPoint(OCDummy^) {};

public:
  property BRepMesh_Array1OfBiPoint* Handle
  {
    BRepMesh_Array1OfBiPoint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_Array1OfBiPoint(BRepMesh_Array1OfBiPoint* nativeHandle);

// Methods PUBLIC


OCBRepMesh_Array1OfBiPoint(Standard_Integer Low, Standard_Integer Up);


OCBRepMesh_Array1OfBiPoint(OCNaroWrappers::OCBRepMesh_BiPoint^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCBRepMesh_BiPoint^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCBRepMesh_Array1OfBiPoint^ Assign(OCNaroWrappers::OCBRepMesh_Array1OfBiPoint^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBRepMesh_BiPoint^ Value) ;


 /*instead*/  OCBRepMesh_BiPoint^ Value(Standard_Integer Index) ;


 /*instead*/  OCBRepMesh_BiPoint^ ChangeValue(Standard_Integer Index) ;

~OCBRepMesh_Array1OfBiPoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif