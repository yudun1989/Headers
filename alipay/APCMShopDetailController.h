//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APCMBaseController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APCMShopInfoView, AUButton, AUNetErrorView, NSString, PMPShopInfo, UITableView;

@interface APCMShopDetailController : APCMBaseController <UITableViewDelegate, UITableViewDataSource>
{
    APCMShopInfoView *_shopInfoView;
    PMPShopInfo *_shopInfo;
    UITableView *_tableView;
    AUNetErrorView *_errorView;
    AUButton *_moreShopButton;
    NSString *_shopId;
    NSString *_source;
    NSString *_sceneCode;
}

@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) AUButton *moreShopButton; // @synthesize moreShopButton=_moreShopButton;
@property(retain, nonatomic) AUNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) PMPShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(retain, nonatomic) APCMShopInfoView *shopInfoView; // @synthesize shopInfoView=_shopInfoView;
- (void).cxx_destruct;
- (void)writeShopExposureLog;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)seeMoreShops;
- (void)showErrorViewWithType:(long long)arg1 info:(id)arg2 buttonText:(id)arg3 buttonAction:(SEL)arg4;
- (void)hideListEmpty;
- (void)handleResp:(id)arg1;
- (void)queryByShopInfo;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1;
- (id)initWithShopInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

