//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VZRefreshControlContent-Protocol.h"

@class AULoadingIndicatorView, NSString;

@interface VZRefreshControlContent : UIView <VZRefreshControlContent>
{
    _Bool _shouldUpdateProgress;
    AULoadingIndicatorView *_loadingIndicator;
}

@property(nonatomic) _Bool shouldUpdateProgress; // @synthesize shouldUpdateProgress=_shouldUpdateProgress;
@property(retain, nonatomic) AULoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void).cxx_destruct;
- (void)updateForPullHeight:(double)arg1;
- (void)updateForState:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

