//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class MSMobileAuthDetailResPB, NSString, UIView;

@interface ASPaymentAuthDetailViewController : DTViewController
{
    _Bool _isCancelSuc;
    MSMobileAuthDetailResPB *_viewInfo;
    NSString *_authID;
    double _offsetY;
    UIView *_authInfoView;
}

@property(retain, nonatomic) UIView *authInfoView; // @synthesize authInfoView=_authInfoView;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSString *authID; // @synthesize authID=_authID;
@property(retain, nonatomic) MSMobileAuthDetailResPB *viewInfo; // @synthesize viewInfo=_viewInfo;
@property(nonatomic) _Bool isCancelSuc; // @synthesize isCancelSuc=_isCancelSuc;
- (void).cxx_destruct;
- (void)requestAuthCancel;
- (void)didReceiveMemoryWarning;
- (void)cancelAuth;
- (void)creatTipsView;
- (void)creatAuthInfoView;
- (void)viewDidLoad;
- (id)initWithDetailInfo:(id)arg1 andAuthID:(id)arg2;

@end

