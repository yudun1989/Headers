//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface KSMediaEditCell : UICollectionViewCell
{
    UIImageView *_bgView;
    UIImageView *_forgroundView;
    UILabel *_title;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *forgroundView; // @synthesize forgroundView=_forgroundView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

