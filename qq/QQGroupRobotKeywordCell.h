//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QQAsynUrlImageView, QQGroupRobotKeyItem, UIImageView, UILabel, UIView;

@interface QQGroupRobotKeywordCell : UICollectionViewCell
{
    UIImageView *_backgroundImageView;
    QQAsynUrlImageView *_iconView;
    UILabel *_textLabel;
    UIView *_maskView;
    QQGroupRobotKeyItem *_keyItem;
}

@property(retain, nonatomic) QQGroupRobotKeyItem *keyItem; // @synthesize keyItem=_keyItem;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

