//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVPlayerTipCreator-Protocol.h"

@class UIView;
@protocol TTVPlayerTipFinished, TTVPlayerTipLoading, TTVPlayerTipRetry;

@interface TTVPlayerTipRelatedCreator : NSObject <TTVPlayerTipCreator>
{
    UIView<TTVPlayerTipLoading> *_tipLoadinView;
    UIView<TTVPlayerTipRetry> *_tipRetryView;
    UIView<TTVPlayerTipFinished> *_tipFinishedView;
}

@property(nonatomic) __weak UIView<TTVPlayerTipFinished> *tipFinishedView; // @synthesize tipFinishedView=_tipFinishedView;
@property(nonatomic) __weak UIView<TTVPlayerTipRetry> *tipRetryView; // @synthesize tipRetryView=_tipRetryView;
@property(nonatomic) __weak UIView<TTVPlayerTipLoading> *tipLoadinView; // @synthesize tipLoadinView=_tipLoadinView;
- (void).cxx_destruct;
- (id)tip_finishedViewWithFrame:(struct CGRect)arg1;
- (id)tip_retryViewWithFrame:(struct CGRect)arg1;
- (id)tip_loadingViewWithFrame:(struct CGRect)arg1;

@end

