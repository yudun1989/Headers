//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

#import "ALPCellDidClick-Protocol.h"
#import "ALPTransferBtnClicked-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"

@class ALPFundButtonView, ALPFundManagerHeadView, CDPSpaceView, NSString;

@interface ALPFundManagerViewController : BEEFunctionTableController <ALPCellDidClick, ALPTransferBtnClicked, PromotionCenterDelegate>
{
    _Bool _mktpCommitted;
    CDPSpaceView *_spaceView;
    _Bool _isNotFirstCDP;
    double _assetMaxWidth;
    _Bool _freezeAmountExposureReported;
    _Bool _assetSectionExposureReported;
    _Bool _wishSectionExposureReported;
    ALPFundManagerHeadView *_headerView;
    ALPFundButtonView *_buttonView;
    NSString *_wishUrl;
    NSString *_wishDesc;
}

@property(nonatomic) _Bool wishSectionExposureReported; // @synthesize wishSectionExposureReported=_wishSectionExposureReported;
@property(nonatomic) _Bool assetSectionExposureReported; // @synthesize assetSectionExposureReported=_assetSectionExposureReported;
@property(nonatomic) _Bool freezeAmountExposureReported; // @synthesize freezeAmountExposureReported=_freezeAmountExposureReported;
@property(copy, nonatomic) NSString *wishDesc; // @synthesize wishDesc=_wishDesc;
@property(copy, nonatomic) NSString *wishUrl; // @synthesize wishUrl=_wishUrl;
@property(retain, nonatomic) ALPFundButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) ALPFundManagerHeadView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)headerView:(id)arg1 clickType:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)refreshTableView;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)reloadContent;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isWishSection:(long long)arg1;
- (_Bool)isCDPSection:(long long)arg1;
- (_Bool)isAssetManageSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)assetManagerHeaderCell:(id)arg1;
- (id)assetCell:(id)arg1 atRow:(long long)arg2;
- (void)updateWishUrl;
- (void)updateWishDescription;
- (_Bool)containsWishView;
- (_Bool)containsCDPView;
- (id)r;
- (double)calcMaxWidthForAssets:(id)arg1;
- (id)emptyText;
- (id)busnessName;
- (id)cacheKey;
- (void)loadContent;
- (void)loadSuccess:(id)arg1;
- (id)combineOldData:(id)arg1 newData:(id)arg2;
- (id)loadCache;
- (id)loadOnline;
- (void)loadOnForce;
- (id)buildTableBottomView:(id)arg1;
- (id)tableView;
- (void)buildNavigationRightButtons;
- (void)buildNavigationLeftButtons;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (long long)customStatusBarStytle;
- (void)pulldownDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFirstAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)customServiceClicked;
- (void)didClickProfitDetail;
- (void)headerViewMoreIncomeTipDidClicked;
- (void)buttonView:(id)arg1 didClickTransferBtn:(long long)arg2;
- (void)back:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

