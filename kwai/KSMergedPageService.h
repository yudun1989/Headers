//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSUPageService-Protocol.h"

@class BFCancellationTokenSource, BFTask, KSUPOSTHTTPRequest, NSArray, NSString;

@interface KSMergedPageService : NSObject <KSUPageService>
{
    _Bool _hasMore;
    _Bool _loading;
    NSArray *_objects;
    CDUnknownBlockType _resultsProcess;
    CDUnknownBlockType _isEqualBlock;
    NSArray *_pageServices;
    BFTask *_task;
    BFCancellationTokenSource *_cancellationTokenSource;
}

@property(retain, nonatomic) BFCancellationTokenSource *cancellationTokenSource; // @synthesize cancellationTokenSource=_cancellationTokenSource;
@property(retain, nonatomic) BFTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSArray *pageServices; // @synthesize pageServices=_pageServices;
@property(copy, nonatomic) CDUnknownBlockType isEqualBlock; // @synthesize isEqualBlock=_isEqualBlock;
@property(copy, nonatomic) CDUnknownBlockType resultsProcess; // @synthesize resultsProcess=_resultsProcess;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)reset;
- (id)initWithPageServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) KSUPOSTHTTPRequest *request;
@property(copy, nonatomic) CDUnknownBlockType requestFinishAspect;
@property(copy, nonatomic) CDUnknownBlockType requestStartAspect;
@property(readonly) Class superclass;

@end

