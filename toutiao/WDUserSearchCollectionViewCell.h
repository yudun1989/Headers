//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SSThemedButton, SSThemedLabel, SSThemedView;
@protocol WDUserSearchCollectionViewCellDelegate;

@interface WDUserSearchCollectionViewCell : UICollectionViewCell
{
    id <WDUserSearchCollectionViewCellDelegate> _delegate;
    SSThemedLabel *_titleLabel;
    SSThemedButton *_closeButton;
    SSThemedView *_rightLine;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) SSThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WDUserSearchCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeAction:(id)arg1;
- (id)text;
- (void)refreshCellWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

