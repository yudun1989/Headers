//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TBFavDetailedListInfoQueryContext;

@interface TBFavDetailedListInfoQueryOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    TBFavDetailedListInfoQueryContext *_context;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) TBFavDetailedListInfoQueryContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

