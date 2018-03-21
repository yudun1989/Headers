//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ArgoWindVaneAdapterProtocol-Protocol.h"

@class NSString;

@interface ArgoWindVaneLiveHybridAdapter : NSObject <ArgoWindVaneAdapterProtocol>
{
    CDUnknownBlockType _getPageInfoBlock;
    CDUnknownBlockType _setLikeBtnActionBlock;
    CDUnknownBlockType _showWidgetsBlock;
    CDUnknownBlockType _taoLiveShareBlock;
}

@property(copy, nonatomic) CDUnknownBlockType taoLiveShareBlock; // @synthesize taoLiveShareBlock=_taoLiveShareBlock;
@property(copy, nonatomic) CDUnknownBlockType showWidgetsBlock; // @synthesize showWidgetsBlock=_showWidgetsBlock;
@property(copy, nonatomic) CDUnknownBlockType setLikeBtnActionBlock; // @synthesize setLikeBtnActionBlock=_setLikeBtnActionBlock;
@property(copy, nonatomic) CDUnknownBlockType getPageInfoBlock; // @synthesize getPageInfoBlock=_getPageInfoBlock;
- (void).cxx_destruct;
- (void)taoLiveShare:(id)arg1 withResponseCallback:(CDUnknownBlockType)arg2;
- (void)showWidgets:(id)arg1 withResponseCallback:(CDUnknownBlockType)arg2;
- (void)setLikeBtnAction:(id)arg1 withResponseCallback:(CDUnknownBlockType)arg2;
- (id)getPageInfo;
- (void)registerWVHybrid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

