//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBBuyErrorContentViewModel, TBBuyGradientColorButton, TBBuyGradientColorView, UIImageView, UILabel;
@protocol TBExtBuyImageProtocol;

@interface TBBuyErrorContentView : UIView
{
    TBBuyErrorContentViewModel *_model;
    CDUnknownBlockType _dismisss;
    TBBuyGradientColorView *_topView;
    UILabel *_titleLabel;
    UILabel *_errorMsgLabel;
    UILabel *_errorCodeLabel;
    UIImageView *_errorImage;
    TBBuyGradientColorButton *_rightBtn;
    TBBuyGradientColorButton *_leftBtn;
    id <TBExtBuyImageProtocol> _imageLoader;
}

@property(retain, nonatomic) id <TBExtBuyImageProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) TBBuyGradientColorButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) TBBuyGradientColorButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(retain, nonatomic) UILabel *errorCodeLabel; // @synthesize errorCodeLabel=_errorCodeLabel;
@property(retain, nonatomic) UILabel *errorMsgLabel; // @synthesize errorMsgLabel=_errorMsgLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBBuyGradientColorView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType dismisss; // @synthesize dismisss=_dismisss;
@property(retain, nonatomic) TBBuyErrorContentViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clickLeftBtn;
- (void)clickRightBtn;
- (void)configColors;
- (void)setLayoutSubViews;
- (void)setupContentView;
- (id)init;

@end

