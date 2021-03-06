// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_HeapSortIndexedVertexOfDelaun_OCWrappers_HeaderFile
#define _BRepMesh_HeapSortIndexedVertexOfDelaun_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_HeapSortIndexedVertexOfDelaun.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfInteger;
ref class OCBRepMesh_ComparatorOfIndexedVertexOfDelaun;



public ref class OCBRepMesh_HeapSortIndexedVertexOfDelaun  {

protected:
  BRepMesh_HeapSortIndexedVertexOfDelaun* nativeHandle;
  OCBRepMesh_HeapSortIndexedVertexOfDelaun(OCDummy^) {};

public:
  property BRepMesh_HeapSortIndexedVertexOfDelaun* Handle
  {
    BRepMesh_HeapSortIndexedVertexOfDelaun* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_HeapSortIndexedVertexOfDelaun(BRepMesh_HeapSortIndexedVertexOfDelaun* nativeHandle);

// Methods PUBLIC


static /*instead*/  void Sort(OCNaroWrappers::OCTColStd_Array1OfInteger^ TheArray, OCNaroWrappers::OCBRepMesh_ComparatorOfIndexedVertexOfDelaun^ Comp) ;

~OCBRepMesh_HeapSortIndexedVertexOfDelaun()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
