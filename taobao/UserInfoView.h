//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface UserInfoView : UIView
{
    UIImageView *_ivHeader;
    UILabel *_lbName;
    UILabel *_lbSku;
}

@property(retain, nonatomic) UILabel *lbSku; // @synthesize lbSku=_lbSku;
@property(retain, nonatomic) UILabel *lbName; // @synthesize lbName=_lbName;
@property(retain, nonatomic) UIImageView *ivHeader; // @synthesize ivHeader=_ivHeader;
- (void).cxx_destruct;
- (void)loadDataWithRater:(id)arg1 skuMap:(id)arg2;
- (id)init;

@end
