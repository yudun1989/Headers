//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LSBizLiveShowInfo, NSTimer, UIButton, UIImageView, UILabel;
@protocol LSReplayCardViewDelegate;

@interface LSBizReplayCardView : UIView
{
    id <LSReplayCardViewDelegate> _delegate;
    LSBizLiveShowInfo *_liveshowInfo;
    UIButton *_exitBtn;
    UIImageView *_hostUserImg;
    UILabel *_pageTitle;
    UILabel *_liveShowTime;
    UILabel *_watcheTimes_Title;
    UILabel *_watcheTimes;
    UILabel *_praiseTimes_Title;
    UILabel *_praiseTimes;
    UILabel *_rewardTimes_Title;
    UILabel *_rewardTimes;
    UILabel *_errorMemo;
    UILabel *_connecting;
    UIButton *_createLiveBtnWidget;
    UIButton *_rankListBtnWidget;
    UIButton *_replayBtnWidget;
    UIButton *_refreshBtnWidget;
    UIImageView *_liveBackImg;
    long long _temp;
    NSTimer *_timer;
}

+ (struct CGRect)getUserImgFrame;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long temp; // @synthesize temp=_temp;
@property(retain, nonatomic) UIImageView *liveBackImg; // @synthesize liveBackImg=_liveBackImg;
@property(retain, nonatomic) UIButton *refreshBtnWidget; // @synthesize refreshBtnWidget=_refreshBtnWidget;
@property(retain, nonatomic) UIButton *replayBtnWidget; // @synthesize replayBtnWidget=_replayBtnWidget;
@property(retain, nonatomic) UIButton *rankListBtnWidget; // @synthesize rankListBtnWidget=_rankListBtnWidget;
@property(retain, nonatomic) UIButton *createLiveBtnWidget; // @synthesize createLiveBtnWidget=_createLiveBtnWidget;
@property(retain, nonatomic) UILabel *connecting; // @synthesize connecting=_connecting;
@property(retain, nonatomic) UILabel *errorMemo; // @synthesize errorMemo=_errorMemo;
@property(retain, nonatomic) UILabel *rewardTimes; // @synthesize rewardTimes=_rewardTimes;
@property(retain, nonatomic) UILabel *rewardTimes_Title; // @synthesize rewardTimes_Title=_rewardTimes_Title;
@property(retain, nonatomic) UILabel *praiseTimes; // @synthesize praiseTimes=_praiseTimes;
@property(retain, nonatomic) UILabel *praiseTimes_Title; // @synthesize praiseTimes_Title=_praiseTimes_Title;
@property(retain, nonatomic) UILabel *watcheTimes; // @synthesize watcheTimes=_watcheTimes;
@property(retain, nonatomic) UILabel *watcheTimes_Title; // @synthesize watcheTimes_Title=_watcheTimes_Title;
@property(retain, nonatomic) UILabel *liveShowTime; // @synthesize liveShowTime=_liveShowTime;
@property(retain, nonatomic) UILabel *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) UIImageView *hostUserImg; // @synthesize hostUserImg=_hostUserImg;
@property(retain, nonatomic) UIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
@property(copy, nonatomic) LSBizLiveShowInfo *liveshowInfo; // @synthesize liveshowInfo=_liveshowInfo;
@property(nonatomic) __weak id <LSReplayCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isValidLiveShowInfo:(id)arg1;
- (id)formatTimeInterval:(double)arg1;
- (void)dismissLoadView;
- (void)showInView;
- (void)runing;
- (void)handleOperation:(id)arg1;
- (id)labelWidgetWithCenterPoint:(struct CGPoint)arg1 andText:(id)arg2 andFontSize:(float)arg3 andColor:(id)arg4;
- (id)buttonWidgetWithCenterPoint:(struct CGPoint)arg1 andColor:(id)arg2 andText:(id)arg3 textSize:(double)arg4 andImageName:(id)arg5 hasBorder:(_Bool)arg6;
- (void)addRefreshBtn;
- (void)addErrorMemoLabel:(id)arg1;
- (void)addBottomButton;
- (void)addLiveShowInfoData;
- (void)addLiveShowInfoTitle;
- (void)setLiveShowTimeText:(id)arg1;
- (void)addLiveShowTime;
- (void)addPageTitle;
- (void)setUserImg:(id)arg1;
- (void)addUserImg;
- (void)addExitBtn;
- (id)mLiveBackImg;
- (void)updateErrorStatusDisplay:(id)arg1;
- (void)updateViewDisplayData:(id)arg1;
- (id)init;

@end

