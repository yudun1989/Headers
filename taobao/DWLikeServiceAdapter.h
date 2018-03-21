//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DWLikeServiceProtocol-Protocol.h"

@class NSString;

@interface DWLikeServiceAdapter : NSObject <DWLikeServiceProtocol>
{
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _cancelCompleteBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType cancelCompleteBlock; // @synthesize cancelCompleteBlock=_cancelCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)cancelLikeWithParamsDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)likeWithParamsDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

