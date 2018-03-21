//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, QQMessageModel, QQProgressHUD, QQReceiptMsgViewController, QQTabWithInPageControl, UILabel, UIScrollView, UIView;

@interface QQReceiptMsgReadListController : QQViewController <UIScrollViewDelegate>
{
    QQTabWithInPageControl *_tabbar;
    UIView *_tabbarBg;
    UILabel *_blankTipsLabel;
    int _getListSeq;
    NSArray *_readList;
    NSArray *_unreadList;
    UIScrollView *_container;
    NSMutableArray *_tableViewArr;
    _Bool _hasInitialed;
    QQProgressHUD *_hud;
    QQMessageModel *_msgModel;
    QQReceiptMsgViewController *_modelStateHandleDelegate;
}

@property(nonatomic) __weak QQReceiptMsgViewController *modelStateHandleDelegate; // @synthesize modelStateHandleDelegate=_modelStateHandleDelegate;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void).cxx_destruct;
- (void)updateTroopMemberListIfNeededThenRefreshTableView;
- (void)onGetTroopMemberResultCallback:(id)arg1;
- (void)getMemberNickNameFromTroopMemArrary:(id)arg1;
- (void)sortReadList:(id)arg1 unreadList:(id)arg2;
- (void)tabbarItemDidSelected:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)showBlankTipsIfNeeded;
- (void)loadCurrentTableViewData;
- (void)discussGroupReceipMsgreadListReportNoti:(id)arg1;
- (void)layout;
- (void)setupViews;
- (void)setupTabbar;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
