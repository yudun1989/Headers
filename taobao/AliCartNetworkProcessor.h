//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol AliCartNetworkProcessorDelegate;

@interface AliCartNetworkProcessor : NSObject
{
    id <AliCartNetworkProcessorDelegate> _delegate;
    NSString *_cartClient;
}

@property(retain, nonatomic) NSString *cartClient; // @synthesize cartClient=_cartClient;
@property(nonatomic) __weak id <AliCartNetworkProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)registerUpdataSKUCallback;
- (void)registerQueryCouponCallback;
- (void)registerUpdateQuantityCallback;
- (void)registerAddCartCallback;
- (void)registerDeleteItemCallback;
- (void)registerCheckItemCallback;
- (void)registerUnCheckItemCallback;
- (void)registerAddFavoriteCallback;
- (void)registerQueryCacheCallback;
- (void)registerQueryCartCallback:(_Bool)arg1 andPromotionParams:(id)arg2;
- (void)registerCartEngineWithPromotionRequest:(_Bool)arg1 andPromotionParams:(id)arg2;

@end

