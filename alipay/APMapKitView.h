//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MKMapViewDelegate-Protocol.h"

@class CLLocationManager, MKMapView, NSArray, NSMutableArray, NSString;
@protocol APMapKitViewDelegate;

@interface APMapKitView : UIView <MKMapViewDelegate>
{
    id <APMapKitViewDelegate> _delegate;
    MKMapView *_mapView;
    NSMutableArray *_mapAnnotations;
    CLLocationManager *_locationManager;
}

@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *mapAnnotations; // @synthesize mapAnnotations=_mapAnnotations;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <APMapKitViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (double)zoomLevel;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (id)mapKitUserLocation;
- (void)showAnnotations:(id)arg1 animated:(_Bool)arg2;
- (void)removeThenAddAnnotationToMapView;
- (void)removeAnnotations:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (CDStruct_b7cb895d)region;
- (struct CLLocationCoordinate2D)centerCoordinate;
- (id)getAnnotations;
- (id)viewForAnnotation:(id)arg1;
@property(copy, nonatomic) NSArray *selectedAnnotations;
@property(nonatomic) long long userTrackingMode;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) _Bool zoomEnabled;
@property(nonatomic) _Bool showsScale;
@property(nonatomic) _Bool showsCompass;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

