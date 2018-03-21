//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWUtilScrollController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class EmotionDownloadView, MOBILECHATEmotionPackageDetailVO, NSString, UIView;

@interface EmotionDetailController : WWUtilScrollController <UIActionSheetDelegate>
{
    NSString *_packageId;
    MOBILECHATEmotionPackageDetailVO *_packageDetail;
    _Bool _isUserMadeEmotionPackage;
    UIView *_bottomContentView;
    EmotionDownloadView *_downloadView;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareButtonClicked:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (id)priceText;
- (id)typeText;
- (void)didClickedServiceButton:(id)arg1;
- (void)loadContent;
- (id)cacheKey;
- (id)loadOnline;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupActionView;
- (void)emotionPackageChanged:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 packageId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

