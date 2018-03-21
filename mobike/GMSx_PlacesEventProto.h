//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_AppProfileProto, GMSx_LatLngProto, GMSx_PBMutableArray, GMSx_PlaceContextProto, GMSx_PlacePickerResultProto, GMSx_PlacesAutocompleteWidgetSessionProto, GMSx_PlacesPhotoQueryLogProto, GMSx_PlacesQueryLogProto, NSString;

@interface GMSx_PlacesEventProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_AppProfileProto *appProfile; // @dynamic appProfile;
@property(retain, nonatomic) GMSx_PlacesAutocompleteWidgetSessionProto *autocompleteWidgetSession; // @dynamic autocompleteWidgetSession;
@property(nonatomic) _Bool glsConsentObtained; // @dynamic glsConsentObtained;
@property(nonatomic) _Bool hasAppProfile; // @dynamic hasAppProfile;
@property(nonatomic) _Bool hasAutocompleteWidgetSession; // @dynamic hasAutocompleteWidgetSession;
@property(nonatomic) _Bool hasGlsConsentObtained; // @dynamic hasGlsConsentObtained;
@property(nonatomic) _Bool hasIosSdkVersion; // @dynamic hasIosSdkVersion;
@property(nonatomic) _Bool hasLatLng; // @dynamic hasLatLng;
@property(nonatomic) _Bool hasLocationAccuracyM; // @dynamic hasLocationAccuracyM;
@property(nonatomic) _Bool hasPhotoQuery; // @dynamic hasPhotoQuery;
@property(nonatomic) _Bool hasPlaceObjectAccessArray; // @dynamic hasPlaceObjectAccessArray;
@property(nonatomic) _Bool hasPlacePickerResult; // @dynamic hasPlacePickerResult;
@property(nonatomic) _Bool hasPlaceReport; // @dynamic hasPlaceReport;
@property(nonatomic) _Bool hasPlacesQuery; // @dynamic hasPlacesQuery;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSString *iosSdkVersion; // @dynamic iosSdkVersion;
@property(retain, nonatomic) GMSx_LatLngProto *latLng; // @dynamic latLng;
@property(nonatomic) float locationAccuracyM; // @dynamic locationAccuracyM;
@property(retain, nonatomic) GMSx_PlacesPhotoQueryLogProto *photoQuery; // @dynamic photoQuery;
@property(retain, nonatomic) GMSx_PBMutableArray *placeObjectAccessArray; // @dynamic placeObjectAccessArray;
@property(retain, nonatomic) GMSx_PlacePickerResultProto *placePickerResult; // @dynamic placePickerResult;
@property(retain, nonatomic) GMSx_PlaceContextProto *placeReport; // @dynamic placeReport;
@property(retain, nonatomic) GMSx_PlacesQueryLogProto *placesQuery; // @dynamic placesQuery;
@property(nonatomic) int type; // @dynamic type;

@end

