//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TBAddressBookGuideView : UIView
{
    UILabel *_taoLabel;
    UILabel *_phoneLabel;
    UIImageView *_taoImageView;
    UILabel *_taoShareLabel;
    UIButton *_closeButton;
    CDUnknownBlockType _block;
}

+ (void)showGuideViewOnView:(id)arg1 tapCloseButtonBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *taoShareLabel; // @synthesize taoShareLabel=_taoShareLabel;
@property(retain, nonatomic) UIImageView *taoImageView; // @synthesize taoImageView=_taoImageView;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *taoLabel; // @synthesize taoLabel=_taoLabel;
- (void).cxx_destruct;
- (void)hide;
- (void)tapClose:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withTapCloseButtonBlock:(CDUnknownBlockType)arg2;

@end

