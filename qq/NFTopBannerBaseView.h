//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol NFTopBannerViewDelegate;

@interface NFTopBannerBaseView : UIView
{
    long long _topBannerType;
    id <NFTopBannerViewDelegate> _NFTopBannerDelegate;
}

@property(nonatomic) __weak id <NFTopBannerViewDelegate> NFTopBannerDelegate; // @synthesize NFTopBannerDelegate=_NFTopBannerDelegate;
@property(nonatomic) long long topBannerType; // @synthesize topBannerType=_topBannerType;
- (void).cxx_destruct;
- (void)didNFTopBannerClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

