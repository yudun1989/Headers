//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class UIScrollView, UISwipeGestureRecognizer, UIWebView;

@protocol QZoneWebViewControllerDelegate <NSObject>

@optional
- (void)qzoneWebViewDidFinishLoad:(UIWebView *)arg1;
- (void)qzoneWebViewDidSwipe:(UISwipeGestureRecognizer *)arg1;
- (void)qzoneWebViewDidClick;
- (void)qzoneWebViewDidScroll:(UIScrollView *)arg1;
@end

