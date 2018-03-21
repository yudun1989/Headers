//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UIViewController;

@interface AliCartStatus : NSObject
{
    _Bool _isEditing;
    _Bool _isManaging;
    _Bool _isFirstRequestFinished;
    _Bool _isFirstRenderFinished;
    _Bool _needRefresh;
    _Bool _memoryFlag;
    _Bool _showedScrollToTopTips;
    _Bool _cacheAppear;
    _Bool _cacheCallback;
    _Bool _isLoading;
    _Bool _tableIsReloading;
    _Bool _isSubShow;
    _Bool _viewAppearing;
    _Bool _showedErrorView;
    _Bool _isPromotionReqest;
    _Bool _canPromotionShowSelf;
    _Bool _mainScrollEnabled;
    _Bool _subScrollEnabled;
    _Bool _needRefreshCoudan;
    _Bool _isClickJiesuan;
    int _editType;
    int _networkType;
    NSIndexPath *_editingIndexPath;
    NSString *_cartClient;
    NSString *_marketTpId;
    NSString *_pushCartId;
    long long _currentPage;
    long long _retryCount;
    long long _fillRetry;
    unsigned long long _cartStartSection;
    NSString *_promotionUrl;
    UIViewController *_viewController;
    double _currentPanY;
    NSString *_promotionNavTitle;
    NSString *_currentClient;
}

@property(nonatomic) _Bool isClickJiesuan; // @synthesize isClickJiesuan=_isClickJiesuan;
@property(retain, nonatomic) NSString *currentClient; // @synthesize currentClient=_currentClient;
@property(retain, nonatomic) NSString *promotionNavTitle; // @synthesize promotionNavTitle=_promotionNavTitle;
@property(nonatomic) _Bool needRefreshCoudan; // @synthesize needRefreshCoudan=_needRefreshCoudan;
@property(nonatomic) double currentPanY; // @synthesize currentPanY=_currentPanY;
@property(nonatomic) _Bool subScrollEnabled; // @synthesize subScrollEnabled=_subScrollEnabled;
@property(nonatomic) _Bool mainScrollEnabled; // @synthesize mainScrollEnabled=_mainScrollEnabled;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *promotionUrl; // @synthesize promotionUrl=_promotionUrl;
@property(nonatomic) _Bool canPromotionShowSelf; // @synthesize canPromotionShowSelf=_canPromotionShowSelf;
@property(nonatomic) _Bool isPromotionReqest; // @synthesize isPromotionReqest=_isPromotionReqest;
@property(nonatomic) unsigned long long cartStartSection; // @synthesize cartStartSection=_cartStartSection;
@property(nonatomic) _Bool showedErrorView; // @synthesize showedErrorView=_showedErrorView;
@property(nonatomic) _Bool viewAppearing; // @synthesize viewAppearing=_viewAppearing;
@property(nonatomic) _Bool isSubShow; // @synthesize isSubShow=_isSubShow;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) int editType; // @synthesize editType=_editType;
@property(nonatomic) long long fillRetry; // @synthesize fillRetry=_fillRetry;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool tableIsReloading; // @synthesize tableIsReloading=_tableIsReloading;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool cacheCallback; // @synthesize cacheCallback=_cacheCallback;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool cacheAppear; // @synthesize cacheAppear=_cacheAppear;
@property(nonatomic) _Bool showedScrollToTopTips; // @synthesize showedScrollToTopTips=_showedScrollToTopTips;
@property(copy, nonatomic) NSString *pushCartId; // @synthesize pushCartId=_pushCartId;
@property(retain, nonatomic) NSString *marketTpId; // @synthesize marketTpId=_marketTpId;
@property(nonatomic) _Bool memoryFlag; // @synthesize memoryFlag=_memoryFlag;
@property(retain, nonatomic) NSString *cartClient; // @synthesize cartClient=_cartClient;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) NSIndexPath *editingIndexPath; // @synthesize editingIndexPath=_editingIndexPath;
@property(nonatomic) _Bool isFirstRenderFinished; // @synthesize isFirstRenderFinished=_isFirstRenderFinished;
@property(nonatomic) _Bool isFirstRequestFinished; // @synthesize isFirstRequestFinished=_isFirstRequestFinished;
@property(nonatomic) _Bool isManaging; // @synthesize isManaging=_isManaging;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
- (void).cxx_destruct;
- (_Bool)canPromotionShow;
- (void)reset;
- (_Bool)showInvalid;
- (id)init;

@end

