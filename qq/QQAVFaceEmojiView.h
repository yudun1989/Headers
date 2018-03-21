//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class NSString, UIImageView, UILabel;
@protocol QQAVFaceEmojiViewDelegate;

@interface QQAVFaceEmojiView : UIView <CAAnimationDelegate>
{
    UIImageView *_faceView;
    UIImageView *_focusView;
    UIImageView *_hitView;
    UIImageView *_bigFocusView;
    UIImageView *_bigHitView;
    UIImageView *_scoreView;
    UIView *_comboView;
    UIImageView *_comboNum1View;
    UIImageView *_comboNum2View;
    UIImageView *_comboTextView;
    UIImageView *_coinView;
    UIView *_tipsView;
    UILabel *_tips;
    UIImageView *_arrowView;
    _Bool _isFocus;
    _Bool _isHit;
    _Bool _isBig;
    _Bool _isMirror;
    _Bool _isDetect;
    _Bool _isMiss;
    _Bool _isShowTips;
    int _faceId;
    int _faceSeq;
    int _trackNum;
    int _duration;
    id <QQAVFaceEmojiViewDelegate> _delegate;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int trackNum; // @synthesize trackNum=_trackNum;
@property(nonatomic) _Bool isShowTips; // @synthesize isShowTips=_isShowTips;
@property(nonatomic) _Bool isMiss; // @synthesize isMiss=_isMiss;
@property(nonatomic) _Bool isDetect; // @synthesize isDetect=_isDetect;
@property(nonatomic) _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(nonatomic) _Bool isBig; // @synthesize isBig=_isBig;
@property(nonatomic) _Bool isHit; // @synthesize isHit=_isHit;
@property(nonatomic) _Bool isFocus; // @synthesize isFocus=_isFocus;
@property(nonatomic) int faceSeq; // @synthesize faceSeq=_faceSeq;
@property(nonatomic) int faceId; // @synthesize faceId=_faceId;
@property(nonatomic) id <QQAVFaceEmojiViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopAnimate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)animationScoreView:(id)arg1 forKey:(id)arg2;
- (void)animationFaceView;
- (void)setHit:(int)arg1 combo:(int)arg2 isStartAnimate:(_Bool)arg3;
- (void)setHit:(int)arg1 combo:(int)arg2;
- (void)setIsFocus:(_Bool)arg1 isStartAnimate:(_Bool)arg2;
- (int)mirrorFaceId:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

