//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQStoryFeedCell.h>

#import <QQMainProject/QQStoryFeedHeaderInfoViewDelegate-Protocol.h>

@class NSString, TBBeginGuidanceBubble;

@interface QQStoryFeedBaseShareGroupCell : QQStoryFeedCell <QQStoryFeedHeaderInfoViewDelegate>
{
    TBBeginGuidanceBubble *_addVideoToShareBGBuggle;
}

- (void)addVideoToShareBGBuggleTouchUpInside:(id)arg1;
- (void)editShareGroupNotification:(id)arg1;
- (void)joinShareGroupNotification:(id)arg1;
- (_Bool)isFromQQGroup:(id)arg1;
- (void)storyFeedVideoViewOnScrollEndToRight:(id)arg1;
- (void)storyFeedHeaderInfoView:(id)arg1 didAddVideoButtonTouchUpInside:(id)arg2;
- (void)storyFeedHeaderInfoView:(id)arg1 didJoinButtonTouchUpInside:(id)arg2;
- (void)storyFeedHeaderInfoView:(id)arg1 didUserNameLabelTapGesture:(id)arg2;
- (void)storyFeedHeaderInfoView:(id)arg1 didUserCoverTouchUpInside:(id)arg2;
- (void)enterShareGroupViewController;
- (void)clearAddVideoToShareBeginGuidanceBubble;
- (void)showAddVideoToShareBeginGuidanceBubble;
- (void)addShareGroupVideo;
- (void)openHistoryStorySelector;
- (void)openCamera;
- (void)joinShareGroup;
- (void)joinShareGroupDataReport;
- (long long)playerVideoType;
- (void)playFirstVideo;
- (void)setupNotification;
- (id)headerInfoView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

