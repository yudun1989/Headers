//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SSPGCActionManagerDelegate-Protocol.h"
#import "TTCommentManagerProtocol-Protocol.h"

@class NSDictionary, NSString, SSPGCActionManager, TTArticleReadQualityModel, TTCommentWriteView, TTGroupModel, TTRichSpanText;
@protocol TTCommentWriteManagerDelegate;

@interface TTCommentWriteManager : NSObject <SSPGCActionManagerDelegate, TTCommentManagerProtocol>
{
    _Bool _isListInput;
    _Bool _hasImage;
    _Bool _sending;
    _Bool _isSharePGCUser;
    _Bool _hasUGCBoundMobile;
    TTCommentWriteView *_commentWriteView;
    id <TTCommentWriteManagerDelegate> _delegate;
    NSString *_serviceID;
    NSDictionary *_extraTrackDict;
    NSDictionary *_bindVCTrackDict;
    TTRichSpanText *_preRichSpanText;
    TTArticleReadQualityModel *_readQuality;
    TTGroupModel *_groupModel;
    NSString *_mediaID;
    NSString *_itemTag;
    NSString *_replyToCommentID;
    NSString *_adID;
    SSPGCActionManager *_pgcActionManager;
    CDUnknownBlockType _sendLogicBlock;
    CDUnknownBlockType _commentRepostParamsBlock;
    long long _publishStatusForTrack;
    NSDictionary *_conditions;
    TTCommentWriteView *_commentViewStrong;
}

@property(retain, nonatomic) TTCommentWriteView *commentViewStrong; // @synthesize commentViewStrong=_commentViewStrong;
@property(retain, nonatomic) NSDictionary *conditions; // @synthesize conditions=_conditions;
@property(nonatomic) long long publishStatusForTrack; // @synthesize publishStatusForTrack=_publishStatusForTrack;
@property(copy, nonatomic) CDUnknownBlockType commentRepostParamsBlock; // @synthesize commentRepostParamsBlock=_commentRepostParamsBlock;
@property(copy, nonatomic) CDUnknownBlockType sendLogicBlock; // @synthesize sendLogicBlock=_sendLogicBlock;
@property(nonatomic) _Bool hasUGCBoundMobile; // @synthesize hasUGCBoundMobile=_hasUGCBoundMobile;
@property(retain, nonatomic) SSPGCActionManager *pgcActionManager; // @synthesize pgcActionManager=_pgcActionManager;
@property(nonatomic) _Bool isSharePGCUser; // @synthesize isSharePGCUser=_isSharePGCUser;
@property(nonatomic, getter=isSending) _Bool sending; // @synthesize sending=_sending;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *replyToCommentID; // @synthesize replyToCommentID=_replyToCommentID;
@property(copy, nonatomic) NSString *itemTag; // @synthesize itemTag=_itemTag;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) TTArticleReadQualityModel *readQuality; // @synthesize readQuality=_readQuality;
@property(retain, nonatomic) TTRichSpanText *preRichSpanText; // @synthesize preRichSpanText=_preRichSpanText;
@property(retain, nonatomic) NSDictionary *bindVCTrackDict; // @synthesize bindVCTrackDict=_bindVCTrackDict;
@property(copy, nonatomic) NSDictionary *extraTrackDict; // @synthesize extraTrackDict=_extraTrackDict;
@property(nonatomic) _Bool isListInput; // @synthesize isListInput=_isListInput;
@property(retain, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(nonatomic) __weak id <TTCommentWriteManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak TTCommentWriteView *commentWriteView; // @synthesize commentWriteView=_commentWriteView;
- (void).cxx_destruct;
- (void)actionManager:(id)arg1 shareUserFinished:(id)arg2;
- (void)commentViewCancelPublish;
- (void)commentViewDismiss;
- (void)commentViewShow;
- (void)commentViewClickPublishButton;
- (void)postMessageSuccessFinished:(id)arg1;
- (void)postMessageErrorFinished:(id)arg1 error:(id)arg2;
- (void)postMessageFinished:(id)arg1 error:(id)arg2;
- (void)showIndicatorMsg:(id)arg1 imageName:(id)arg2;
- (void)showWrongImgIndicatorWithMsg:(id)arg1;
- (void)showRightImgIndicatorWithMsg:(id)arg1;
- (void)bindingMobileCompleted:(id)arg1;
- (void)showBindingMobileViewController;
- (_Bool)hasBoundMobile;
- (void)saveDraft;
- (void)configureParamsWithConditon:(id)arg1;
- (id)initWithCommentCondition:(id)arg1 commentViewDelegate:(id)arg2 commentRepostBlock:(CDUnknownBlockType)arg3 extraTrackDict:(id)arg4 bindVCTrackDict:(id)arg5 commentRepostWithPreRichSpanText:(id)arg6 readQuality:(id)arg7;
- (id)initWithCommentCondition:(id)arg1 commentViewDelegate:(id)arg2 commentRepostBlock:(CDUnknownBlockType)arg3 extraTrackDict:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

