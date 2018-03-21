//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QQAsynUrlImageView, UIImageView, UILabel, UIView;

@interface SpriteGameListCollectionViewCell : UICollectionViewCell
{
    QQAsynUrlImageView *_gameImageView;
    UIImageView *_leftTopImgView;
    UILabel *_gameNameLbl;
    _Bool _isRecommended;
    UIView *_redPointView;
}

+ (struct CGSize)sizeOfGameImage;
+ (double)bottomLabelHeight;
+ (struct CGSize)sizeOfCell;
@property(retain, nonatomic) UIView *redPointView; // @synthesize redPointView=_redPointView;
@property(readonly, nonatomic) _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
- (void)p_refreshTipsViewWithGameId:(int)arg1;
- (void)dealloc;
- (void)reloadUIWith:(id)arg1;
- (id)newRedPointView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

