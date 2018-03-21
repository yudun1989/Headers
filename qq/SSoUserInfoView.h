//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, SSoUserInfoHeaderView, UIImage, UIScrollView, UITableView;
@protocol SSoUserInfoViewDelegate;

@interface SSoUserInfoView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    unsigned long long _uin;
    NSString *_nickName;
    SSoUserInfoHeaderView *_headerView;
    _Bool _isQuickLogin;
    _Bool _isAuthorized;
    _Bool _singleAccount;
    _Bool _isShowAccountList;
    UITableView *_mainView;
    UIImage *_appImage;
    NSString *_appName;
    UIImage *_headImage;
    UIImage *_backgroundImage;
    id <SSoUserInfoViewDelegate> _delegate;
    NSArray *_authInfoList;
    NSDictionary *_adsInfo;
    UIImage *_adIcon;
    NSArray *_accountList;
    double _maxHeight;
    UIScrollView *_scrollView;
    UIView *_authView;
}

@property(nonatomic) _Bool isShowAccountList; // @synthesize isShowAccountList=_isShowAccountList;
@property(retain, nonatomic) UIView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool singleAccount; // @synthesize singleAccount=_singleAccount;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) NSArray *accountList; // @synthesize accountList=_accountList;
@property(retain, nonatomic) UIImage *adIcon; // @synthesize adIcon=_adIcon;
@property(retain, nonatomic) NSDictionary *adsInfo; // @synthesize adsInfo=_adsInfo;
@property(nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
@property(retain, nonatomic) NSArray *authInfoList; // @synthesize authInfoList=_authInfoList;
@property(nonatomic) id <SSoUserInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) UIImage *appImage; // @synthesize appImage=_appImage;
@property(retain, nonatomic) UITableView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resortAccountItems;
- (void)deleteAccount:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createUnAuthorizedHeaderView;
- (void)layoutAdView;
- (id)getAppAdInfoView;
- (id)createTableFooterView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 uin:(unsigned long long)arg2 nickName:(id)arg3 isQuickLogin:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

