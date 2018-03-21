//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/TBPicListViewDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString, QQStoryMultiUserAvatarView, TBPicListView, TBShareGroupFeedModel, UILabel, UIViewController;

@interface QQStoryMemoryShareVideoCell : UITableViewCell <TBPicListViewDelegate, UIScrollViewDelegate>
{
    QQStoryMultiUserAvatarView *_headImageView;
    UILabel *_shareGroupNameLabel;
    UILabel *_shareGroupDesLabel;
    TBPicListView *_videoCoverScrollView;
    TBShareGroupFeedModel *_model;
    UIViewController *_viewController;
}

+ (double)height;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) TBShareGroupFeedModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)title;
- (void)onScrollEndToRight;
- (void)onClickPic:(long long)arg1 withView:(id)arg2;
- (void)resetViewOfPic:(id)arg1 atIndex:(long long)arg2;
- (id)viewOfPic:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfPic:(id)arg1;
@property(nonatomic) struct CGPoint lastScrollPoint;
- (void)onClickCell;
- (void)openHistoryStorySelector;
- (void)openCamera;
- (void)onClickAddVideoBtn;
- (void)dealloc;
- (void)doInitUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
