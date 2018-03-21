//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UILabel;
@protocol AMapNaviBottomInfoViewDelegate, AMapNaviBottomInfoViewState;

@interface AMapNaviBottomInfoView : UIView
{
    _Bool _showMoreButton;
    _Bool _needUpdateViewConstraints;
    id <AMapNaviBottomInfoViewDelegate> _delegate;
    long long _state;
    long long _remainDistance;
    long long _remainTime;
    id <AMapNaviBottomInfoViewState> _viewState;
    NSMutableArray *_viewConstraints;
    UIView *_splitViewLeft;
    UIView *_splitViewRight;
    UILabel *_remainTimeLabel;
    UILabel *_remainTimeTipLabel;
    UILabel *_remainDisLabel;
    UILabel *_remainDisTipLabel;
    UIButton *_closeButton;
    UIButton *_continueButton;
    UIButton *_moreButton;
}

@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *remainDisTipLabel; // @synthesize remainDisTipLabel=_remainDisTipLabel;
@property(retain, nonatomic) UILabel *remainDisLabel; // @synthesize remainDisLabel=_remainDisLabel;
@property(retain, nonatomic) UILabel *remainTimeTipLabel; // @synthesize remainTimeTipLabel=_remainTimeTipLabel;
@property(retain, nonatomic) UILabel *remainTimeLabel; // @synthesize remainTimeLabel=_remainTimeLabel;
@property(retain, nonatomic) UIView *splitViewRight; // @synthesize splitViewRight=_splitViewRight;
@property(retain, nonatomic) UIView *splitViewLeft; // @synthesize splitViewLeft=_splitViewLeft;
@property(retain, nonatomic) NSMutableArray *viewConstraints; // @synthesize viewConstraints=_viewConstraints;
@property(nonatomic) _Bool needUpdateViewConstraints; // @synthesize needUpdateViewConstraints=_needUpdateViewConstraints;
@property(retain, nonatomic) id <AMapNaviBottomInfoViewState> viewState; // @synthesize viewState=_viewState;
@property(nonatomic) long long remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) long long remainDistance; // @synthesize remainDistance=_remainDistance;
@property(nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <AMapNaviBottomInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreButtonClicked;
- (void)continueButtonClicked;
- (void)closeButtonClicked;
- (void)removeAllSubViews;
- (void)updateBottonInfoViewWithRemainDistance:(long long)arg1 remainTime:(long long)arg2;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)buildBottomInfoView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

