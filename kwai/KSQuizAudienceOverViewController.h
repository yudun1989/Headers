//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSQuizBaseViewController.h"

@class UIButton, UIImageView, UILabel;

@interface KSQuizAudienceOverViewController : KSQuizBaseViewController
{
    CDUnknownBlockType _shareBlock;
    CDUnknownBlockType _viewWinnerListBlock;
    UIImageView *_bgImageView;
    UILabel *_quizOverTitleLabel;
    UIImageView *_avatarImageView;
    UIImageView *_ribbonImageView;
    UIButton *_shareButton;
}

@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIImageView *ribbonImageView; // @synthesize ribbonImageView=_ribbonImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *quizOverTitleLabel; // @synthesize quizOverTitleLabel=_quizOverTitleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType viewWinnerListBlock; // @synthesize viewWinnerListBlock=_viewWinnerListBlock;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (void)_setupViewWinnersButton;
- (void)_setupShareButton;
- (void)_setupRibbonImageView;
- (void)_setupAvatarImageView;
- (void)_setupBgImageView;
- (void)viewDidLoad;

@end

