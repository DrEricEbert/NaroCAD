// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_PointData_OCWrappers_HeaderFile
#define _TopOpeBRepDS_PointData_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_PointData.hxx>
#include "../Converter.h"

#include "TopOpeBRepDS_GeometryData.h"

#include "TopOpeBRepDS_Point.h"
#include "TopOpeBRepDS_GeometryData.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_DataStructure;
ref class OCTopOpeBRepDS_Point;



public ref class OCTopOpeBRepDS_PointData  : public OCTopOpeBRepDS_GeometryData {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_PointData(OCDummy^) : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_PointData(TopOpeBRepDS_PointData* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_PointData();


OCTopOpeBRepDS_PointData(OCNaroWrappers::OCTopOpeBRepDS_Point^ P);


OCTopOpeBRepDS_PointData(OCNaroWrappers::OCTopOpeBRepDS_Point^ P, Standard_Integer I1, Standard_Integer I2);


 /*instead*/  void SetShapes(Standard_Integer I1, Standard_Integer I2) ;


 /*instead*/  void GetShapes(Standard_Integer& I1, Standard_Integer& I2) ;

~OCTopOpeBRepDS_PointData()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
