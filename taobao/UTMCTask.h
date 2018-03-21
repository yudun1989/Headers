//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UTMCTask : NSObject
{
    _Bool _repeats;
    _Bool _isDone;
    _Bool _isCancelled;
    NSString *_name;
    double _delay;
    double _interval;
    CDUnknownBlockType _block;
    double _lastTime;
}

@property double lastTime; // @synthesize lastTime=_lastTime;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property _Bool isDone; // @synthesize isDone=_isDone;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;

@end

