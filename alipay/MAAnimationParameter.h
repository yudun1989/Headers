//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSValue;

@interface MAAnimationParameter : NSObject
{
    NSValue *_mapPointCenter;
    NSNumber *_zoomLevel;
    NSNumber *_cameraDegree;
    NSNumber *_roateDegree;
}

@property(retain, nonatomic) NSNumber *roateDegree; // @synthesize roateDegree=_roateDegree;
@property(retain, nonatomic) NSNumber *cameraDegree; // @synthesize cameraDegree=_cameraDegree;
@property(retain, nonatomic) NSNumber *zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) NSValue *mapPointCenter; // @synthesize mapPointCenter=_mapPointCenter;
- (void).cxx_destruct;

@end

