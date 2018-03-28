//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class ArticleMomentCommentModel, ArticleMomentDetailView, ArticleMomentManager, ArticleMomentModel, NSDictionary, NSNumber, NSString, TTGroupModel;
@protocol ExploreMomentListCellUserActionItemDelegate, TTCommentModelProtocol;

@interface ArticleMomentDetailViewController : SSViewControllerBase
{
    _Bool _fromThread;
    _Bool _showWriteComment;
    _Bool _showComment;
    _Bool _enterFromClickComment;
    TTGroupModel *_groupModel;
    id <TTCommentModelProtocol> _commentModel;
    ArticleMomentModel *_momentModel;
    ArticleMomentCommentModel *_replyMomentCommentModel;
    NSString *_itemID;
    NSString *_categoryID;
    unsigned long long _gtype;
    NSString *_recommendReson;
    NSNumber *_recommendType;
    NSNumber *_following;
    ArticleMomentDetailView *_detailView;
    ArticleMomentManager *_momentManager;
    unsigned long long _sourceType;
    id <ExploreMomentListCellUserActionItemDelegate> _delegate;
    NSDictionary *_extraTracks;
    NSNumber *_clickArea;
}

@property(retain, nonatomic) NSNumber *clickArea; // @synthesize clickArea=_clickArea;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(nonatomic) __weak id <ExploreMomentListCellUserActionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enterFromClickComment; // @synthesize enterFromClickComment=_enterFromClickComment;
@property(nonatomic) _Bool showComment; // @synthesize showComment=_showComment;
@property(nonatomic) _Bool showWriteComment; // @synthesize showWriteComment=_showWriteComment;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) ArticleMomentManager *momentManager; // @synthesize momentManager=_momentManager;
@property(retain, nonatomic) ArticleMomentDetailView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) _Bool fromThread; // @synthesize fromThread=_fromThread;
@property(retain, nonatomic) NSNumber *following; // @synthesize following=_following;
@property(retain, nonatomic) NSNumber *recommendType; // @synthesize recommendType=_recommendType;
@property(copy, nonatomic) NSString *recommendReson; // @synthesize recommendReson=_recommendReson;
@property(nonatomic) unsigned long long gtype; // @synthesize gtype=_gtype;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) ArticleMomentCommentModel *replyMomentCommentModel; // @synthesize replyMomentCommentModel=_replyMomentCommentModel;
@property(retain, nonatomic) ArticleMomentModel *momentModel; // @synthesize momentModel=_momentModel;
@property(retain, nonatomic) id <TTCommentModelProtocol> commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
- (void).cxx_destruct;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 dict:(id)arg3 containExtra:(_Bool)arg4;
- (void)_sendCurrentPageStayTime:(double)arg1;
- (void)trySendCurrentPageStayTime;
- (void)trackStartedByAppWillEnterForground;
- (void)trackEndedByAppWillEnterBackground;
- (void)p_syncCommentModelWithMomentModel;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)arrowButtonClicked;
- (void)viewDidLoad;
- (id)initWithMomentModel:(id)arg1;
- (id)initWithMomentModel:(id)arg1 momentManager:(id)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithMomentModel:(id)arg1 momentManager:(id)arg2;
- (id)initWithComment:(id)arg1 groupModel:(id)arg2 momentModel:(id)arg3 delegate:(id)arg4 showWriteComment:(_Bool)arg5;
- (id)initWithMomentID:(id)arg1;
- (id)initWithRouteParamObj:(id)arg1;
- (void)dealloc;

@end

