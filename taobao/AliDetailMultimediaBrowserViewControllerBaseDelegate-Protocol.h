//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AliDetailMultimediaBrowserViewControllerBase, NSDictionary, NSString, UIView;

@protocol AliDetailMultimediaBrowserViewControllerBaseDelegate <NSObject>

@optional
- (void)photoBrowserDidDismiss:(AliDetailMultimediaBrowserViewControllerBase *)arg1 imageInfo:(NSDictionary *)arg2;
- (void)photoBrowserWillDismiss:(AliDetailMultimediaBrowserViewControllerBase *)arg1 imageInfo:(NSDictionary *)arg2;
- (void)photoBrowserDidAppear:(AliDetailMultimediaBrowserViewControllerBase *)arg1 imageInfo:(NSDictionary *)arg2;
- (void)photoBrowser:(AliDetailMultimediaBrowserViewControllerBase *)arg1 scrollToContentOffset:(struct CGPoint)arg2;
- (void)photoBrowser:(AliDetailMultimediaBrowserViewControllerBase *)arg1 scrollToIndex:(unsigned long long)arg2;
- (UIView *)photoBrowser:(AliDetailMultimediaBrowserViewControllerBase *)arg1 subTitleDescViewForIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(AliDetailMultimediaBrowserViewControllerBase *)arg1 captionForIndex:(unsigned long long)arg2;
@end

