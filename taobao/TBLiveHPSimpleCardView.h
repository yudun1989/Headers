//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveHPBaseCardView.h"

@class NSString, TBLiveCPVideoModel, TBLiveHomePageLivingInfoView, UIImageView, UIView;

@interface TBLiveHPSimpleCardView : TBLiveHPBaseCardView
{
    _Bool _onlooker;
    UIImageView *_tagImageView;
    UIView *_bottomMaskView;
    TBLiveHomePageLivingInfoView *_liveInfoView;
    TBLiveCPVideoModel *_videoModel;
    NSString *_tagString;
}

@property(nonatomic) _Bool onlooker; // @synthesize onlooker=_onlooker;
@property(copy, nonatomic) NSString *tagString; // @synthesize tagString=_tagString;
@property(retain, nonatomic) TBLiveCPVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) TBLiveHomePageLivingInfoView *liveInfoView; // @synthesize liveInfoView=_liveInfoView;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
- (void).cxx_destruct;
- (void)jumpToLivingRoom;
- (void)didTapView;
- (void)refreshTagWithTitle:(id)arg1 withImage:(id)arg2;
- (void)refreshWithModel:(id)arg1 isOnLooker:(_Bool)arg2;
- (void)setupSubViews;

@end

