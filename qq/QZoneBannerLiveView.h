//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZIntelligenceBannerBaseView.h>

@class NSMutableArray, QZJAdBannerQueryADBannerUnit;
@protocol QZIntelligenceBannerContainerDelegate;

@interface QZoneBannerLiveView : QZIntelligenceBannerBaseView
{
    int _xo;
    QZJAdBannerQueryADBannerUnit *_bannerUnit;
    _Bool _isSingleLiveBanner;
    NSMutableArray *_bannerItems;
    id <QZIntelligenceBannerContainerDelegate> _delegate;
}

@property(nonatomic) __weak id <QZIntelligenceBannerContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bannerItems; // @dynamic bannerItems;
@property(retain, nonatomic) QZJAdBannerQueryADBannerUnit *bannerUnit; // @dynamic bannerUnit;

@end

