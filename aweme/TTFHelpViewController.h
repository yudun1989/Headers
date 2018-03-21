//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFBaseViewController.h"

@class LOTAnimationView, NSMutableArray, TTFShareMessage, UILabel;

@interface TTFHelpViewController : TTFBaseViewController
{
    long long _activity_id;
    UILabel *_inviteCodeValueLabel;
    UILabel *_inviteCodeNameLabel;
    NSMutableArray *_shareButtons;
    LOTAnimationView *_bgView;
    TTFShareMessage *_shareMessage;
}

@property(retain, nonatomic) TTFShareMessage *shareMessage; // @synthesize shareMessage=_shareMessage;
@property(retain, nonatomic) LOTAnimationView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSMutableArray *shareButtons; // @synthesize shareButtons=_shareButtons;
@property(retain, nonatomic) UILabel *inviteCodeNameLabel; // @synthesize inviteCodeNameLabel=_inviteCodeNameLabel;
@property(retain, nonatomic) UILabel *inviteCodeValueLabel; // @synthesize inviteCodeValueLabel=_inviteCodeValueLabel;
@property(nonatomic) long long activity_id; // @synthesize activity_id=_activity_id;
- (void).cxx_destruct;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (void)shareButtonTouch:(id)arg1;
- (void)ttf_preLoadShareImage;
- (void)ttf_skipToWebPageForRequestURLStr:(id)arg1 title:(id)arg2;
- (void)legalNotices:(id)arg1;
- (void)commonProblem:(id)arg1;
- (void)howToPlay:(id)arg1;
- (void)back;
- (id)shareIcons;
- (void)initUIComponents;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

