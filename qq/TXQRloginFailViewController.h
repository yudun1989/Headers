//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TXQRBaseViewController.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface TXQRloginFailViewController : TXQRBaseViewController
{
    UIImageView *imageView;
    UILabel *messageLabel;
    UIButton *rescanButton;
    NSString *_errorMsg;
}

@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;
- (void)onButtonTap:(id)arg1;
- (void)viewDidLoad;

@end

