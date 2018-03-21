//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/LbsPackPoiDelegate-Protocol.h>
#import <QQMainProject/LbsPackPoiListDelegate-Protocol.h>
#import <QQMainProject/LbsPackSelectDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>

@class LbsPackPoiModel, LbsPackSelectView, NSArray, NSRecursiveLock, NSString, TencentLBSLocation, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UINavigationController;

@interface LbsPackSendPackView : UIView <QQFriendSelectedViewControllerDelegate, LbsPackPoiDelegate, LbsPackPoiListDelegate, LbsPackSelectDelegate>
{
    UINavigationController *_nav;
    UIImageView *_backView;
    LbsPackSelectView *_selectView;
    UILabel *_locationLabel;
    UIButton *_locationBtn;
    UIImageView *_locationArrow;
    UIActivityIndicatorView *_locationIndicator;
    UIButton *_locationRefreshBtn;
    UILabel *_memLabel;
    UIButton *_memBtn;
    UIButton *_sendBtn;
    UIButton *_packRecordBtn;
    UIButton *_closeBtn;
    CDUnknownBlockType _poiListCallBack;
    CDUnknownBlockType _onSentCallBack;
    unsigned long long _poiListState;
    NSArray *_poiList;
    NSRecursiveLock *_poiListLock;
    LbsPackPoiModel *_selectPoi;
    NSString *_selectUin;
    int _selectUinType;
    int _selectAnswer;
    TencentLBSLocation *_lastVerifyLBS;
    TencentLBSLocation *_currentVerifyLBS;
    double _horizontalAccuracy;
    NSString *_encryptSig;
}

- (void).cxx_destruct;
- (void)lbsPackDidSelectIndex:(long long)arg1;
- (void)LbsPackDidSelectSearchPoi:(id)arg1 vc:(id)arg2;
- (void)LbsPackDidSelectPoi:(id)arg1 vc:(id)arg2;
- (void)lbsPackReqPoiList:(CDUnknownBlockType)arg1 forceRefresh:(_Bool)arg2;
- (void)reqPoiList:(id)arg1 errorCode:(int)arg2 errorDesc:(id)arg3;
- (void)reqPoiList;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;
- (void)close;
- (void)gotoPackRecord;
- (long long)getSelectMemNum;
- (void)onSend;
- (void)gotoMemSelectViewController;
- (void)gotoPOIViewController;
- (void)didChangeStatusBarFrame:(id)arg1;
- (void)loadPackRecordBtn;
- (void)loadCloseBtn;
- (void)loadSendBtn;
- (void)loadSelectView;
- (void)refreshMemSelect:(id)arg1;
- (void)loadMemSelect;
- (void)refreshPoiListState;
- (void)refreshLocation:(id)arg1;
- (void)loadLocation;
- (void)loadBackView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 nav:(id)arg2 onSentCallBack:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

