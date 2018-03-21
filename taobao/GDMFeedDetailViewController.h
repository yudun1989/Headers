//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMViewController.h"

#import "GDMFDComponentDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GDMDetailButtomBannerView, GDMFDPicIndexManager, GDMFeedDetailRequest, NSArray, NSNumberFormatter, NSString, TBSCPraiseOperation, UIScrollView;

@interface GDMFeedDetailViewController : GDMViewController <GDMFDComponentDelegate, UIScrollViewDelegate>
{
    NSArray *_components;
    UIScrollView *_contentScrollView;
    NSString *_feedId;
    GDMFeedDetailRequest *_request;
    NSString *_targetType;
    NSString *_subType;
    NSString *_sourceId;
    NSString *_spm;
    NSString *_scm;
    long long _commentCnt;
    GDMFDPicIndexManager *_picIndexManager;
    _Bool _isPraised;
    GDMDetailButtomBannerView *_buttomBannerView;
    TBSCPraiseOperation *_praiseOperater;
    NSNumberFormatter *_formatter;
    NSString *_accountId;
    long long _praiseCnt;
}

@property long long praiseCnt; // @synthesize praiseCnt=_praiseCnt;
@property _Bool isPraised; // @synthesize isPraised=_isPraised;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) TBSCPraiseOperation *praiseOperater; // @synthesize praiseOperater=_praiseOperater;
@property(retain, nonatomic) GDMDetailButtomBannerView *buttomBannerView; // @synthesize buttomBannerView=_buttomBannerView;
- (void).cxx_destruct;
- (void)playerStalled;
- (void)playerFailedToPlayToEnd;
- (void)playerDidEndPlaying;
- (void)playerDidResume;
- (void)playerDidPause;
- (void)onMoivePlayCallBack:(id)arg1;
- (void)goToComment:(_Bool)arg1;
- (void)commentClickHandle:(_Bool)arg1;
- (void)shareBtnClicked:(id)arg1;
- (void)praiseBtnClicked:(id)arg1;
- (void)updateFeedPraisedCntBtn:(_Bool)arg1;
- (void)loadPraisedState;
- (void)buttomBannerViewAction:(id)arg1 atIndex:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)GDMFDComponentDidAskForOpenAllComment:(id)arg1;
- (void)GDMFDComponentDidAskForRelayout:(id)arg1;
- (void)startLoadRequest;
- (void)onReloadErrorCallBack;
- (id)utPageName;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)createViewWitComponents;
- (void)configInteractBar;
- (void)setUpButtomBannerView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

