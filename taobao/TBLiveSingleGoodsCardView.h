//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveBaseView.h"

@class NSString, UIImageView, UILabel;

@interface TBLiveSingleGoodsCardView : TBLiveBaseView
{
    UIImageView *_goodsImgView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    NSString *_itemId;
    NSString *_itemDetailURL;
}

@property(copy, nonatomic) NSString *itemDetailURL; // @synthesize itemDetailURL=_itemDetailURL;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *goodsImgView; // @synthesize goodsImgView=_goodsImgView;
- (void).cxx_destruct;
- (void)onTapGesture:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)addLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

