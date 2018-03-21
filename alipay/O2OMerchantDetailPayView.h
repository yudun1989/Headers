//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class O2ODynamicMerchantItem;
@protocol O2OMerchantDetailPayViewDelegate;

@interface O2OMerchantDetailPayView : UIView
{
    O2ODynamicMerchantItem *_payItem;
    id <O2OMerchantDetailPayViewDelegate> _delegate;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <O2OMerchantDetailPayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) O2ODynamicMerchantItem *payItem; // @synthesize payItem=_payItem;
- (void).cxx_destruct;
- (double)fixedHeight;
- (void)layoutSubviews;
- (void)update;
- (void)contentUpdate;
- (void)renderPayItem:(id)arg1;
- (void)setupBackgroundView;
- (id)initWithPayItem:(id)arg1;
- (void)dealloc;

@end

