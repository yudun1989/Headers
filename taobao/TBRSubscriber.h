//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBRCompoundDisposable;

@interface TBRSubscriber : NSObject
{
    CDUnknownBlockType _next;
    CDUnknownBlockType _error;
    CDUnknownBlockType _completed;
    TBRCompoundDisposable *_disposable;
}

+ (id)subscriberWithNext:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) TBRCompoundDisposable *disposable; // @synthesize disposable=_disposable;
@property(copy, nonatomic) CDUnknownBlockType completed; // @synthesize completed=_completed;
@property(copy, nonatomic) CDUnknownBlockType error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType next; // @synthesize next=_next;
- (void).cxx_destruct;
- (void)didSubscribeWithDisposable:(id)arg1;
- (void)sendCompleted;
- (void)sendError:(id)arg1;
- (void)sendNext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

