//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "TTVVideoDetailNatantVideoBannerDataProtocol-Protocol.h"

@class NSString;

@interface TTVPartnerVideo : GPBMessage <TTVVideoDetailNatantVideoBannerDataProtocol>
{
}

+ (id)descriptor;
- (_Bool)openURL:(id)arg1;
- (void)jumpToWebViewWithView:(id)arg1;
- (void)jumpToOtherApp;
- (void)jumpToAppstore;
- (_Bool)installedApp;
- (unsigned long long)getTTVideoBannerType;
- (_Bool)inValid;
@property(copy, nonatomic) NSString *appName;

// Remaining properties
@property(copy, nonatomic) NSString *belowBannerDownloadImgURL; // @dynamic belowBannerDownloadImgURL;
@property(copy, nonatomic) NSString *belowBannerOpenImgURL; // @dynamic belowBannerOpenImgURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *h5OpenURL; // @dynamic h5OpenURL;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *inBannerDownloadImgURL; // @dynamic inBannerDownloadImgURL;
@property(copy, nonatomic) NSString *inBannerOpenImgURL; // @dynamic inBannerOpenImgURL;
@property(copy, nonatomic) NSString *iosDownloadURL; // @dynamic iosDownloadURL;
@property(copy, nonatomic) NSString *iosOpenURL; // @dynamic iosOpenURL;
@property(readonly) Class superclass;

@end

