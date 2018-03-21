//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL, TBShopActionService, TBShopCacheService, TBShopContainerComponent, TBShopEffectService, TBShopEngine, TBShopUTService, UIViewController;
@protocol TBShopViewController;

@interface TBShopContext : NSObject
{
    _Bool _jumpLoft;
    NSString *_uniqueToken;
    NSURL *_mainUrl;
    NSMutableDictionary *_queryDic;
    NSString *_shopId;
    NSString *_sellerId;
    NSString *_sellerNick;
    NSString *_originURL;
    NSString *_shopNavi;
    NSString *_mockLoftUrl;
    NSString *_homePageId;
    NSString *_loftPageId;
    TBShopEngine *_engine;
    NSDictionary *_originPageProperties;
    TBShopContainerComponent *_currentContainer;
    TBShopEffectService *_effectService;
    TBShopActionService *_actionService;
    TBShopUTService *_utService;
    TBShopCacheService *_cacheService;
    UIViewController<TBShopViewController> *_mainViewController;
}

@property(nonatomic) __weak UIViewController<TBShopViewController> *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) TBShopCacheService *cacheService; // @synthesize cacheService=_cacheService;
@property(retain, nonatomic) TBShopUTService *utService; // @synthesize utService=_utService;
@property(retain, nonatomic) TBShopActionService *actionService; // @synthesize actionService=_actionService;
@property(retain, nonatomic) TBShopEffectService *effectService; // @synthesize effectService=_effectService;
@property(retain, nonatomic) TBShopContainerComponent *currentContainer; // @synthesize currentContainer=_currentContainer;
@property(retain, nonatomic) NSDictionary *originPageProperties; // @synthesize originPageProperties=_originPageProperties;
@property(retain, nonatomic) TBShopEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *loftPageId; // @synthesize loftPageId=_loftPageId;
@property(retain, nonatomic) NSString *homePageId; // @synthesize homePageId=_homePageId;
@property(nonatomic) _Bool jumpLoft; // @synthesize jumpLoft=_jumpLoft;
@property(retain, nonatomic) NSString *mockLoftUrl; // @synthesize mockLoftUrl=_mockLoftUrl;
@property(retain, nonatomic) NSString *shopNavi; // @synthesize shopNavi=_shopNavi;
@property(retain, nonatomic) NSString *originURL; // @synthesize originURL=_originURL;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSMutableDictionary *queryDic; // @synthesize queryDic=_queryDic;
@property(retain, nonatomic) NSURL *mainUrl; // @synthesize mainUrl=_mainUrl;
@property(readonly, nonatomic) NSString *uniqueToken; // @synthesize uniqueToken=_uniqueToken;
- (void).cxx_destruct;
- (id)defaultUTData;
@property(readonly, nonatomic) NSString *queryString;
- (id)init;

@end

