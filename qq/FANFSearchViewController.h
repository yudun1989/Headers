//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/FANfAnimateHeadViewDelegate-Protocol.h>

@class FANFConnectingIndicator, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface FANFSearchViewController : QQViewController <FANfAnimateHeadViewDelegate>
{
    int _workMode;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_searchTips;
    UILabel *_guideaTips;
    UILabel *_wifiSSID;
    UILabel *_wifiPWD;
    FANFConnectingIndicator *_searchIndicator;
    UIButton *_sendTimeoutBtn;
    NSMutableArray *_arrHeadAndNickView;
    unsigned long long _peerUin;
    long long _lastStatusBarStyle;
    NSMutableDictionary *_dictLayoutMatrix;
}

- (void)onHeadClick:(id)arg1;
- (_Bool)removeContactWithUin:(unsigned long long)arg1;
- (void)updateHeadImage:(unsigned long long)arg1 path:(id)arg2;
- (_Bool)connectWithContact:(unsigned long long)arg1;
- (void)addContactWithUin:(unsigned long long)arg1 nick:(id)arg2;
- (void)relayoutContactHeadViews;
- (void)calcContactsLayoutMatrix;
- (_Bool)isContactAdded:(unsigned long long)arg1;
- (_Bool)hasAnyContacts;
- (void)showAnimation:(_Bool)arg1;
- (void)sendTimeoutBtnClick:(id)arg1;
- (void)activateSearch;
- (void)deactivateSearch;
- (void)resetConnectingTip:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)initSearchView;
- (void)dealloc;
- (id)initWithFiles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

