//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBFaceVerifyViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UIImage, UIViewController, UIWindow, WBFaceUserInfo;
@protocol WBFaceVerifyCustomerServiceDelegate;

@interface WBFaceVerifyCustomerService : NSObject <WBFaceVerifyViewControllerDelegate>
{
    _Bool _isShownSuccessPage;
    _Bool _isShownFailurePage;
    _Bool _isUsingSourceImage;
    _Bool _isUsingHDImage;
    id <WBFaceVerifyCustomerServiceDelegate> _delegate;
    UIViewController *_presentedVc;
    UIWindow *_window;
    UIImage *_sourceImage;
    WBFaceUserInfo *_userInfo;
    NSDictionary *_extenalParams;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *extenalParams; // @synthesize extenalParams=_extenalParams;
@property(retain, nonatomic) WBFaceUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(nonatomic) _Bool isUsingHDImage; // @synthesize isUsingHDImage=_isUsingHDImage;
@property(nonatomic) _Bool isUsingSourceImage; // @synthesize isUsingSourceImage=_isUsingSourceImage;
@property(nonatomic) _Bool isShownFailurePage; // @synthesize isShownFailurePage=_isShownFailurePage;
@property(nonatomic) _Bool isShownSuccessPage; // @synthesize isShownSuccessPage=_isShownSuccessPage;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak UIViewController *presentedVc; // @synthesize presentedVc=_presentedVc;
@property(nonatomic) __weak id <WBFaceVerifyCustomerServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearSDKStatus;
- (void)clearTmpDocument;
- (_Bool)_judgeIdentityStringValid:(id)arg1;
- (void)viewControllerDidDismissOut:(id)arg1;
- (void)startFaceVerifyWithType:(long long)arg1 licence:(id)arg2 activeType:(id)arg3 lips:(id)arg4;
- (void)startWBFaceServiceWithUserid:(id)arg1 nonce:(id)arg2 sign:(id)arg3 appid:(id)arg4 userInfo:(id)arg5 apiVersion:(id)arg6 faceverifyType:(long long)arg7 licence:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)startWBFaceServiceWithUserid:(id)arg1 nonce:(id)arg2 sign:(id)arg3 appid:(id)arg4 userInfo:(id)arg5 apiVersion:(id)arg6 faceverifyType:(long long)arg7 licence:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10 externalParams:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

