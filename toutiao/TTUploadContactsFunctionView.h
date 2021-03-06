//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTMixedListBaseViewFunctionViewProtocol-Protocol.h"

@class NSString;

@interface TTUploadContactsFunctionView : SSThemedView <TTMixedListBaseViewFunctionViewProtocol>
{
    SSThemedView *_topSeparateLine;
    SSThemedView *_bottomSeparateLine;
}

+ (_Bool)haveBottomPadding;
+ (_Bool)haveTopPadding;
+ (double)functionViewHeight;
+ (void)load;
@property(retain, nonatomic) SSThemedView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) SSThemedView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
- (void).cxx_destruct;
- (void)showBottomSeparatorLine:(_Bool)arg1;
- (void)showTopSeparatorLine:(_Bool)arg1;
- (void)refreshFunctionView;
- (void)clickUploadContactsButton:(id)arg1;
- (void)clickCloseButton:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)createComponent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

