//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SXMarquee, UIButton, UIImageView, UILabel;

@interface UserTableViewCell : UITableViewCell
{
    UIImageView *_itemImage;
    UILabel *_itemName;
    UILabel *_subLbl;
    UIImageView *_arrowIcon;
    UIButton *_redStar;
    SXMarquee *_mar3;
}

@property(retain, nonatomic) SXMarquee *mar3; // @synthesize mar3=_mar3;
@property(nonatomic) __weak UIButton *redStar; // @synthesize redStar=_redStar;
@property(nonatomic) __weak UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(nonatomic) __weak UILabel *subLbl; // @synthesize subLbl=_subLbl;
@property(nonatomic) __weak UILabel *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) __weak UIImageView *itemImage; // @synthesize itemImage=_itemImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)adoptionString:(id)arg1;
- (void)hideBalanceAndStar;
- (void)coupons:(id)arg1;
- (void)subTitle:(id)arg1;
- (void)addScrollLabel;
- (void)resetRedStar;
- (void)accordingToBalance:(float)arg1;
- (void)redWaveStar:(long long)arg1;
- (void)updateCell:(id)arg1;
- (void)updateItemImage:(id)arg1;
- (void)awakeFromNib;

@end

