//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMap.h"

#import "QMapViewDelegate-Protocol.h"

@class MMTencentOfflineManager, MMUserLocation, NSString, QMapView;

@interface MMTencentMap : MMBaseMap <QMapViewDelegate>
{
    QMapView *_mapView;
    MMUserLocation *_standardUserLocation;
    MMTencentOfflineManager *_internalOfflineManager;
}

@property(retain, nonatomic) MMTencentOfflineManager *internalOfflineManager; // @synthesize internalOfflineManager=_internalOfflineManager;
@property(retain, nonatomic) MMUserLocation *standardUserLocation; // @synthesize standardUserLocation=_standardUserLocation;
@property(retain, nonatomic) QMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 sender:(_Bool)arg3;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (id)offlineManager;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (_Bool)allowsBackgroundLocationUpdates;
- (void)setHeadingFilter:(double)arg1;
- (double)headingFilter;
- (void)setDistanceFilter:(double)arg1;
- (double)distanceFilter;
- (void)setDesiredAccuracy:(double)arg1;
- (double)desiredAccuracy;
- (id)userLocation;
- (void)configureUserLocationPresentation:(id)arg1;
- (_Bool)showsUserLocation;
- (void)setShowsUserLocation:(_Bool)arg1;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutViewTapped:(id)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (CDStruct_02837cd9)minixumMapRectForMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)showAnnotations:(id)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)selectedAnnotations;
- (id)annotations;
- (void)setMapStatus:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setMapStatus:(id)arg1;
- (id)mapStatus;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)visibleMapRect;
- (void)setOverlooking:(double)arg1;
- (double)overlooking;
- (void)setRotation:(double)arg1;
- (double)rotation;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (void)setZoomLevel:(double)arg1;
- (double)zoomLevel;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (struct CLLocationCoordinate2D)centerCoordinate;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setIndoorEnabled:(_Bool)arg1;
- (_Bool)indoorEnabled;
- (void)setStayCenteredDuringZoom:(_Bool)arg1;
- (_Bool)stayCenteredDuringZoom;
- (void)setOverlookingGestures:(_Bool)arg1;
- (_Bool)overlookingGestures;
- (void)setRotateGestures:(_Bool)arg1;
- (_Bool)rotateGestures;
- (void)setShowsCompass:(_Bool)arg1;
- (_Bool)showsCompass;
- (void)setShowsScale:(_Bool)arg1;
- (_Bool)showsScale;
- (void)setMapType:(long long)arg1;
- (long long)mapType;
- (id)displayView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

