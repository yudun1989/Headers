//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAnnotationView.h"

@class BMKMapTip, MBKRideHailingWaitingAnimationView, UIImageView, UIOutlineLabel;

@interface MBKAnnotationView : MMAnnotationView
{
    _Bool _observed;
    UIImageView *_iconView;
    BMKMapTip *_mapTip;
    MBKRideHailingWaitingAnimationView *_waitingAnimationView;
    UIOutlineLabel *_poiLabel;
}

+ (id)annotationViewWithContext:(id)arg1 ForAnnotation:(id)arg2;
@property(nonatomic) _Bool observed; // @synthesize observed=_observed;
@property(retain, nonatomic) UIOutlineLabel *poiLabel; // @synthesize poiLabel=_poiLabel;
@property(retain, nonatomic) MBKRideHailingWaitingAnimationView *waitingAnimationView; // @synthesize waitingAnimationView=_waitingAnimationView;
@property(retain, nonatomic) BMKMapTip *mapTip; // @synthesize mapTip=_mapTip;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)buildUI;
- (void)observeWatingStatus;

@end

