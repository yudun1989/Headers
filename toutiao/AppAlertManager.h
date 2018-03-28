//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseAlertManager.h"

@class NSDictionary, TTWebImageManager, UIViewController;

@interface AppAlertManager : SSBaseAlertManager
{
    NSDictionary *_localResult;
    UIViewController *_topViewController;
    TTWebImageManager *_imageManager;
}

+ (id)alertManager;
@property(retain, nonatomic) TTWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(retain, nonatomic) NSDictionary *localResult; // @synthesize localResult=_localResult;
- (void).cxx_destruct;
- (void)clickedButtonAtIndex:(long long)arg1 alertModel:(id)arg2;
- (void)tryDownloadImageForAlertModel:(id)arg1;
- (id)handleAlert:(id)arg1;
- (id)parameterDict;
- (id)urlPrefix;
- (void)startAlertWithTopViewController:(id)arg1;
- (void)startAlertWithLocalResult:(id)arg1;
- (id)init;
- (void)dealloc;

@end

