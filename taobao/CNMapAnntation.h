//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MAAnnotation-Protocol.h"

@class CNMapCalloutView, NSString;

@interface CNMapAnntation : NSObject <MAAnnotation>
{
    int _animationType;
    double _latitude;
    double _longitude;
    NSString *_imageURLString;
    double _height;
    double _width;
    long long _zIndex;
    CDUnknownBlockType _calloutTouch;
    CDUnknownBlockType _anntationTouch;
    CNMapCalloutView *_customCalloutView;
}

+ (void)addCustomCalloutView:(id)arg1 annotation:(id)arg2;
+ (id)creatAnnotationView:(id)arg1;
@property(retain, nonatomic) CNMapCalloutView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
@property(copy, nonatomic) CDUnknownBlockType anntationTouch; // @synthesize anntationTouch=_anntationTouch;
@property(copy, nonatomic) CDUnknownBlockType calloutTouch; // @synthesize calloutTouch=_calloutTouch;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

