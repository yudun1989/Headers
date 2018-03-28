//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol TTVVideoDetailNatantVideoBannerDataProtocol <NSObject>
@property(copy, nonatomic) NSString *appName;
@property(readonly, copy, nonatomic) NSString *belowBannerDownloadImgURL;
@property(readonly, copy, nonatomic) NSString *belowBannerOpenImgURL;
@property(readonly, copy, nonatomic) NSString *inBannerDownloadImgURL;
@property(readonly, copy, nonatomic) NSString *inBannerOpenImgURL;
@property(readonly, copy, nonatomic) NSString *iosOpenURL;
- (void)jumpToWebViewWithView:(UIView *)arg1;
- (void)jumpToOtherApp;
- (void)jumpToAppstore;
- (_Bool)installedApp;
- (unsigned long long)getTTVideoBannerType;
- (_Bool)inValid;
@end

