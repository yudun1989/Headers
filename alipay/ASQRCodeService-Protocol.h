//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class AccountQRView, UIView;

@protocol ASQRCodeService <DTService>
- (void)loadDataForQRView:(AccountQRView *)arg1 withExceptionView:(UIView *)arg2;
- (void)showQRCodeOnView:(UIView *)arg1 dismissBlock:(void (^)(void))arg2;
- (void)showQRCodeOnView:(UIView *)arg1;
@end

