//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AliDetailDIVAPanGestureViewDelegate-Protocol.h"

@class AliDetailDIVADownloadProgressView, AliDetailDIVAExtraInfoRequestModel, AliDetailDIVAExtraInfoResponseModel, AliDetailDIVAPanGestureView, AliDetailDIVAShakeCountView, NSMutableArray, NSString, UIButton;

@interface AliDetailDIVADisplayOverlayView : UIView <AliDetailDIVAPanGestureViewDelegate>
{
    _Bool _isPanGestureViewHidden;
    long long _defaultIndex;
    long long _numberOfFrames;
    long long _downloadState;
    AliDetailDIVAExtraInfoRequestModel *_requestModel;
    CDUnknownBlockType _panGestureHandler;
    AliDetailDIVAShakeCountView *_shakeCountView;
    AliDetailDIVAExtraInfoResponseModel *_responseModel;
    unsigned long long _options;
    NSMutableArray *_marketingIcons;
    CDUnknownBlockType _downloadStateBlock;
    AliDetailDIVADownloadProgressView *_progressView;
    UIButton *_downloadButton;
    AliDetailDIVAPanGestureView *_panGestureView;
}

+ (_Bool)shouldAutoLoadHDDiva;
@property(retain, nonatomic) AliDetailDIVAPanGestureView *panGestureView; // @synthesize panGestureView=_panGestureView;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) AliDetailDIVADownloadProgressView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) CDUnknownBlockType downloadStateBlock; // @synthesize downloadStateBlock=_downloadStateBlock;
@property(retain, nonatomic) NSMutableArray *marketingIcons; // @synthesize marketingIcons=_marketingIcons;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) AliDetailDIVAExtraInfoResponseModel *responseModel; // @synthesize responseModel=_responseModel;
@property(retain, nonatomic) AliDetailDIVAShakeCountView *shakeCountView; // @synthesize shakeCountView=_shakeCountView;
@property(nonatomic) _Bool isPanGestureViewHidden; // @synthesize isPanGestureViewHidden=_isPanGestureViewHidden;
@property(copy, nonatomic) CDUnknownBlockType panGestureHandler; // @synthesize panGestureHandler=_panGestureHandler;
@property(retain, nonatomic) AliDetailDIVAExtraInfoRequestModel *requestModel; // @synthesize requestModel=_requestModel;
@property(nonatomic) long long downloadState; // @synthesize downloadState=_downloadState;
@property(nonatomic) long long numberOfFrames; // @synthesize numberOfFrames=_numberOfFrames;
@property(nonatomic) long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
- (void).cxx_destruct;
- (void)panGestureRecognizerStateChanged:(id)arg1 isGestureBegin:(_Bool)arg2;
- (void)downloadHDDiva;
- (void)adjustDownloadButtonPosition;
- (void)adjustPanGestureViewPosition;
- (void)adjustShakeViewPosition;
- (struct CGPoint)advisabledCenterPointForIconDesc:(id)arg1;
- (void)displayExtraInfoWithModel:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)resumeTakeCount;
- (void)stopTakeCount:(id)arg1;
- (void)switchToVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchMarketingIconHidden:(_Bool)arg1;
- (void)displayExtraInfoWithOptions:(unsigned long long)arg1;
- (void)updateCountWithCurrentIndex:(long long)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

