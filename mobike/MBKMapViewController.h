//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

@class MBKMapAdapter, UIView;

@interface MBKMapViewController : MBKBaseViewController
{
    UIView *_mapView;
    MBKMapAdapter *_mapAdapter;
    struct CGRect _viewFrame;
}

@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) MBKMapAdapter *mapAdapter; // @synthesize mapAdapter=_mapAdapter;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)setupMapView;
- (struct CGRect)mapFrame;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)init;

@end

