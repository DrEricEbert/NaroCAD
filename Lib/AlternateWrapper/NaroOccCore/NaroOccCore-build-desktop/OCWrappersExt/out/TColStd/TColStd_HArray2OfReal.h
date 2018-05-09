// File generated by CPPExt (Transient)
//
#ifndef _TColStd_HArray2OfReal_OCWrappers_HeaderFile
#define _TColStd_HArray2OfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_HArray2OfReal.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColStd_Array2OfReal.h"


namespace OCNaroWrappers
{

ref class OCTColStd_Array2OfReal;



public ref class OCTColStd_HArray2OfReal : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColStd_HArray2OfReal(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_HArray2OfReal(Handle(TColStd_HArray2OfReal)* nativeHandle);

// Methods PUBLIC


OCTColStd_HArray2OfReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColStd_HArray2OfReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, Standard_Real V);


 /*instead*/  void Init(Standard_Real V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value) ;


 /*instead*/  Standard_Real Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  Standard_Real ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColStd_Array2OfReal^ Array2() ;


 /*instead*/  OCTColStd_Array2OfReal^ ChangeArray2() ;

~OCTColStd_HArray2OfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif