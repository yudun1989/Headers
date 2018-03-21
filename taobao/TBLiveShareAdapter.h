//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LiveRoomShareProtocol-Protocol.h"
#import "TaoPasswordShareDelegate-Protocol.h"

@class NSString;

@interface TBLiveShareAdapter : NSObject <TaoPasswordShareDelegate, LiveRoomShareProtocol>
{
    long long _currentShareType;
    CDUnknownBlockType _shareTaoPasswordComplete;
}

@property(copy, nonatomic) CDUnknownBlockType shareTaoPasswordComplete; // @synthesize shareTaoPasswordComplete=_shareTaoPasswordComplete;
@property(nonatomic) long long currentShareType; // @synthesize currentShareType=_currentShareType;
- (void).cxx_destruct;
- (void)shareMillionBabyLiveRoom:(id)arg1 params:(id)arg2;
- (void)shareRecordVideo:(id)arg1 params:(id)arg2;
- (void)didPasswordRequestFinished:(id)arg1 afterHandler:(id)arg2;
- (void)shareTaoPassword:(id)arg1 type:(long long)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareGoodsVideo:(id)arg1 type:(long long)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareLive:(id)arg1 type:(long long)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)share:(id)arg1 type:(long long)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
