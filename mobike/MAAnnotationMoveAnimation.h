//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MAAnnotationMoveAnimation : NSObject
{
    long long _passedPointCount;
    _Bool _isCancelled;
    NSString *_name;
    struct CLLocationCoordinate2D *_coordinates;
    unsigned long long _count;
    double _duration;
    double _elapsedTime;
    CDUnknownBlockType _completeCallback;
    CDUnknownBlockType _stepCallback;
    NSArray *_keyTimePoints;
    struct CLLocationCoordinate2D _startCoord;
}

+ (id)makeInstanceWith:(struct CLLocationCoordinate2D *)arg1 count:(long long)arg2 duration:(double)arg3 name:(id)arg4 completeCallback:(CDUnknownBlockType)arg5 stepCallback:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSArray *keyTimePoints; // @synthesize keyTimePoints=_keyTimePoints;
@property(copy, nonatomic) CDUnknownBlockType stepCallback; // @synthesize stepCallback=_stepCallback;
@property(copy, nonatomic) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) struct CLLocationCoordinate2D startCoord; // @synthesize startCoord=_startCoord;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) struct CLLocationCoordinate2D *coordinates; // @synthesize coordinates=_coordinates;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)passedPointCount;
- (void)triggerStepCallback;
- (struct CLLocationCoordinate2D)getCurrentCoordWith:(double)arg1;
- (void)step:(double)arg1;
- (void)calculateWithCoord:(struct CLLocationCoordinate2D)arg1;
- (void)triggerCompleteCallback:(_Bool)arg1;
- (void)MAAnnotationMoveAnimationDeallocOperation;
- (void)dealloc;
- (void)cancel;

@end

