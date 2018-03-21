//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APBirdNestAppViewController, NSDictionary, NSString;

@interface APBNJSEvent : NSObject
{
    _Bool _isFinished;
    _Bool _isCanceled;
    NSString *_name;
    double _timeStamp;
    NSString *_time;
    NSDictionary *_param;
    APBirdNestAppViewController *_source;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) __weak APBirdNestAppViewController *source; // @synthesize source=_source;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3 source:(id)arg4;

@end

