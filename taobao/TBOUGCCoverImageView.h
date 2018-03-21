//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface TBOUGCCoverImageView : UIView
{
    UIButton *_closeBtn;
    id _userInfo;
    NSString *_url;
    id _owner;
    NSString *_price;
    UIImageView *_imageView;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void).cxx_destruct;
- (void)setStyleName:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

