//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FullscreenOverlayView.h>

@class UIImageView, UIView, UIWindow;
@protocol FANFConnectWiFiAlertViewDelegate;

@interface FANFConnectWiFiAlertView : FullscreenOverlayView
{
    UIView *_container;
    UIImageView *_bgImgView;
    id <FANFConnectWiFiAlertViewDelegate> _alertdelegate;
    UIWindow *_lastKeyWindow;
}

@property(nonatomic) id <FANFConnectWiFiAlertViewDelegate> delegate; // @synthesize delegate=_alertdelegate;
- (void)cancelButtonClick:(id)arg1;
- (void)dismiss;
- (void)show;
- (id)initWithSSID:(id)arg1 PWD:(id)arg2 withDelegate:(id)arg3;

@end

