//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSLabelsFontManger, NSArray, UIImageView;

@interface KSPurchaseHeader : UIView
{
    NSArray *_rechargeHeaderCell;
    UIView *_line;
    UIImageView *_imageView;
    KSLabelsFontManger *_labelsFontManger;
}

@property(retain, nonatomic) KSLabelsFontManger *labelsFontManger; // @synthesize labelsFontManger=_labelsFontManger;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSArray *rechargeHeaderCell; // @synthesize rechargeHeaderCell=_rechargeHeaderCell;
- (void).cxx_destruct;
- (void)clear;
- (void)drawWithHeaderItems:(id)arg1 animation:(_Bool)arg2;
- (id)init;

@end

