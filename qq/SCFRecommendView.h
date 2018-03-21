//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/SCFFriendsIconViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SCFFriendsIconLayout, UIButton, UILabel;
@protocol SCFRecommendViewDelegate;

@interface SCFRecommendView : UIView <SCFFriendsIconViewDelegate>
{
    NSArray *_arFriendsModels;
    NSMutableArray *_marSeletedFriendsModels;
    SCFFriendsIconLayout *_friendIconLayout;
    UIButton *_addButton;
    UILabel *_tipsLabel;
    UIView *_friendsContentView;
    id <SCFRecommendViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCFRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)iconViewDidChangedSelectionValue:(id)arg1;
- (void)addAction:(id)arg1;
- (void)layoutRecommendFriends;
- (void)loadWithFriends:(id)arg1;
- (void)loadFriendsContentView;
- (void)refreshAddButton;
- (void)loadAddButton;
- (void)loadTipsLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

