//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSCommentInputViewBase.h"

#import "SSPGCActionManagerDelegate-Protocol.h"

@class NSString, SSPGCActionManager, TTGroupModel, UIViewController;
@protocol SSCommentInputViewDelegate;

@interface SSCommentInputView : SSCommentInputViewBase <SSPGCActionManagerDelegate>
{
    _Bool _hasImage;
    _Bool _sending;
    _Bool _isSharePGCUser;
    id <SSCommentInputViewDelegate> _delegate;
    UIViewController *_topMostViewController;
    TTGroupModel *_groupModel;
    NSString *_mediaID;
    NSString *_itemTag;
    NSString *_replyToCommentID;
    NSString *_adID;
    NSString *_uniqueId;
    NSString *_shareUrl;
    NSString *_shareImageUrl;
    SSPGCActionManager *_pgcActionManager;
    long long _platformType;
    long long _sourceType;
}

@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) SSPGCActionManager *pgcActionManager; // @synthesize pgcActionManager=_pgcActionManager;
@property(nonatomic) _Bool isSharePGCUser; // @synthesize isSharePGCUser=_isSharePGCUser;
@property(nonatomic, getter=isSending) _Bool sending; // @synthesize sending=_sending;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(copy, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *replyToCommentID; // @synthesize replyToCommentID=_replyToCommentID;
@property(copy, nonatomic) NSString *itemTag; // @synthesize itemTag=_itemTag;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) UIViewController *topMostViewController; // @synthesize topMostViewController=_topMostViewController;
@property(nonatomic) __weak id <SSCommentInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionManager:(id)arg1 shareUserFinished:(id)arg2;
- (void)setInputViewType:(int)arg1;
- (void)setCondition:(id)arg1;
- (void)willAppear;
- (void)sendTrackEventWithNotificationInfo:(id)arg1 result:(_Bool)arg2;
- (void)postMessageFinished:(id)arg1;
- (void)shareMessageFinished:(id)arg1;
- (void)showContentTooLongTip;
- (void)sendButtonClicked;
- (void)backButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

