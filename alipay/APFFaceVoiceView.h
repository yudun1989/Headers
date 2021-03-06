//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFEEyeScanView, APFVoicePrompter, UIButton, UILabel;
@protocol IVideoButtonDelegate;

@interface APFFaceVoiceView : UIView
{
    _Bool _isRecord;
    AFEEyeScanView *_scanView;
    UIButton *_btnRecord;
    id <IVideoButtonDelegate> _videoDelegate;
    UIView *_view;
    UILabel *_actionLabel;
    APFVoicePrompter *_voicePrompter;
}

@property(nonatomic) _Bool isRecord; // @synthesize isRecord=_isRecord;
@property(nonatomic) __weak APFVoicePrompter *voicePrompter; // @synthesize voicePrompter=_voicePrompter;
@property(nonatomic) __weak UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <IVideoButtonDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(nonatomic) __weak UIButton *btnRecord; // @synthesize btnRecord=_btnRecord;
@property(nonatomic) __weak AFEEyeScanView *scanView; // @synthesize scanView=_scanView;
- (void).cxx_destruct;
- (void)updateRecordButton:(int)arg1;
- (void)onRecord:(id)arg1;
- (void)pauseScanAnimation;
- (void)beginScanAnimation;
- (void)lightDownWordAtRange:(struct _NSRange)arg1;
- (void)lightupWordAtRange:(struct _NSRange)arg1;
- (void)setVoiceCommand:(id)arg1 staticMessage:(id)arg2;
- (void)showActionCommand:(id)arg1;
- (void)showErrorMessage:(id)arg1;
- (void)setStatusBarDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

