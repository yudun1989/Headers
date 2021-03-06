//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KSPlayerControl-Protocol.h"

@class DTProgressView, KSExtensionButton, NSString, UIActivityIndicatorView, UIButton, UIImageView;

@interface KSPlayerControl : UIView <KSPlayerControl>
{
    float _progress;
    UIImageView *_backgroundView;
    DTProgressView *_progressView;
    KSExtensionButton *_closeButton;
    KSExtensionButton *_playButton;
}

@property(retain, nonatomic) KSExtensionButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) KSExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) DTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (struct UIEdgeInsets)contentEdgeInset;
- (id)setEnableProgressIndicator:(_Bool)arg1 size:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) UIActivityIndicatorView *indicatorView;
@property(readonly) UIButton *nextButton;
@property(readonly) UIButton *prevButton;
@property(readonly) Class superclass;

@end

