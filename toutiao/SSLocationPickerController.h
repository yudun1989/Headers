//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSString;

@interface SSLocationPickerController : UIViewController <MKMapViewDelegate>
{
    CDUnknownBlockType _completionHandler;
    MKMapView *_mapView;
}

+ (struct CLLocationCoordinate2D)cachedFakeLocationCoordinate;
+ (void)setCachedFakeLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (CDStruct_4760c753)cachedRegion;
+ (void)setCachedRegion:(CDStruct_4760c753)arg1;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_reloadLocateAnnotationWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_longPressGestureRecognizerActionFired:(id)arg1;
- (void)_finishPickLocation:(id)arg1;
- (void)_clearFakeLocations:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

