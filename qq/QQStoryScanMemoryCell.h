//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;
@protocol QQStoryScanMemoryCellDelegate;

@interface QQStoryScanMemoryCell : UITableViewCell
{
    NSString *_leftTitleStr;
    UILabel *_leftTitle;
    UIImageView *_arrorIcon;
    NSString *_rightTitleStr;
    UILabel *_rightTitle;
    id <QQStoryScanMemoryCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <QQStoryScanMemoryCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)clickRight;
- (void)clickLeft;
- (void)setLeftTitle:(id)arg1 withRightTitle:(id)arg2;
- (void)doInitUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

