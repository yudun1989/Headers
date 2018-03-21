//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class UIButton, UIControl, UIImageView, UILabel;

@interface TBOrderHeadCell : TBOrderBasicCell
{
    UIImageView *_shopIcon;
    UILabel *_shopName;
    UIImageView *_arrow;
    UILabel *_status;
    UILabel *_statusExtra;
    UIButton *_checkButton;
    CDUnknownBlockType _checkboxClick;
    CDUnknownBlockType _onSellerClieck;
    UIControl *_selectMaskView;
    UIControl *_selectSellerMaskView;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UIControl *selectSellerMaskView; // @synthesize selectSellerMaskView=_selectSellerMaskView;
@property(retain, nonatomic) UIControl *selectMaskView; // @synthesize selectMaskView=_selectMaskView;
@property(copy, nonatomic) CDUnknownBlockType onSellerClieck; // @synthesize onSellerClieck=_onSellerClieck;
@property(copy, nonatomic) CDUnknownBlockType checkboxClick; // @synthesize checkboxClick=_checkboxClick;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UILabel *statusExtra; // @synthesize statusExtra=_statusExtra;
@property(retain, nonatomic) UILabel *status; // @synthesize status=_status;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) UIImageView *shopIcon; // @synthesize shopIcon=_shopIcon;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)onSellerCliecked;
- (void)onCheckboxClick;
- (void)refreshSelectedImage;
- (void)layoutSubviews;
- (void)viewLayout;

@end

