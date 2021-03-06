// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Array1OfVertexC_OCWrappers_HeaderFile
#define _Graphic3d_Array1OfVertexC_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Array1OfVertexC.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic3d_VertexC;



public ref class OCGraphic3d_Array1OfVertexC  {

protected:
  Graphic3d_Array1OfVertexC* nativeHandle;
  OCGraphic3d_Array1OfVertexC(OCDummy^) {};

public:
  property Graphic3d_Array1OfVertexC* Handle
  {
    Graphic3d_Array1OfVertexC* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Array1OfVertexC(Graphic3d_Array1OfVertexC* nativeHandle);

// Methods PUBLIC


OCGraphic3d_Array1OfVertexC(Standard_Integer Low, Standard_Integer Up);


OCGraphic3d_Array1OfVertexC(OCNaroWrappers::OCGraphic3d_VertexC^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCGraphic3d_VertexC^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGraphic3d_Array1OfVertexC^ Assign(OCNaroWrappers::OCGraphic3d_Array1OfVertexC^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_VertexC^ Value) ;


 /*instead*/  OCGraphic3d_VertexC^ Value(Standard_Integer Index) ;


 /*instead*/  OCGraphic3d_VertexC^ ChangeValue(Standard_Integer Index) ;

~OCGraphic3d_Array1OfVertexC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
