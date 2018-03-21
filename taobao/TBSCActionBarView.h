//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBSCCommentButtonView, TBSCCommentExtParam, TBSCFollowBtn, TBSCPraiseButtonView, TBSCSocialParam, TBShareContent, UIButton;

@interface TBSCActionBarView : UIView
{
    _Bool _hasPraise;
    _Bool _hasComment;
    _Bool _hasShare;
    _Bool _hasFollow;
    _Bool _isPraiseSuccess;
    _Bool _isCommentSuccess;
    TBSCCommentButtonView *_commentButton;
    TBSCSocialParam *_socialParam;
    UIButton *_shareButton;
    TBSCPraiseButtonView *_praiseButton;
    unsigned long long _accountId;
    CDUnknownBlockType _finishBlock;
    TBShareContent *_shareContent;
    unsigned long long _pubAccountId;
    NSString *_appKey;
    TBSCCommentExtParam *_extParam;
    TBSCFollowBtn *_followButton;
}

@property(retain, nonatomic) TBSCFollowBtn *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) TBSCCommentExtParam *extParam; // @synthesize extParam=_extParam;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(nonatomic) unsigned long long pubAccountId; // @synthesize pubAccountId=_pubAccountId;
@property(nonatomic) _Bool isCommentSuccess; // @synthesize isCommentSuccess=_isCommentSuccess;
@property(nonatomic) _Bool isPraiseSuccess; // @synthesize isPraiseSuccess=_isPraiseSuccess;
@property(retain, nonatomic) TBShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) TBSCPraiseButtonView *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TBSCSocialParam *socialParam; // @synthesize socialParam=_socialParam;
@property(retain, nonatomic) TBSCCommentButtonView *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) _Bool hasFollow; // @synthesize hasFollow=_hasFollow;
@property(nonatomic) _Bool hasShare; // @synthesize hasShare=_hasShare;
@property(nonatomic) _Bool hasComment; // @synthesize hasComment=_hasComment;
@property(nonatomic) _Bool hasPraise; // @synthesize hasPraise=_hasPraise;
- (void).cxx_destruct;
- (void)shareButtonClicked:(id)arg1;
- (void)setUpisvFollowButton:(struct CGRect)arg1;
- (void)setUpFollowButton:(struct CGRect)arg1;
- (void)setUpCommentButton:(struct CGRect)arg1;
- (void)setUpShareButton:(struct CGRect)arg1;
- (void)setUpPraiseButton:(struct CGRect)arg1;
- (void)dealloc;
- (void)setupViews;
- (void)enablePraise:(_Bool)arg1 enableComment:(_Bool)arg2 enableFollow:(_Bool)arg3 enableShare:(_Bool)arg4;
- (void)enableTitleButton:(_Bool)arg1;
- (void)setWithPraiseImage:(id)arg1 noPraiseImage:(id)arg2 commentImage:(id)arg3 shareImage:(id)arg4;
- (id)initWithParam:(id)arg1 accountId:(unsigned long long)arg2 frame:(struct CGRect)arg3 pubAccountId:(unsigned long long)arg4 appKey:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (id)initWithParam:(id)arg1 accountId:(unsigned long long)arg2 pubAccountId:(unsigned long long)arg3 Frame:(struct CGRect)arg4 FinishBlock:(CDUnknownBlockType)arg5;
- (id)initWithParam:(id)arg1 commentExtParam:(id)arg2 accountId:(unsigned long long)arg3 pubAccountId:(unsigned long long)arg4 Frame:(struct CGRect)arg5 FinishBlock:(CDUnknownBlockType)arg6;

@end

