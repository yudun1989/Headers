//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, UIImageView, UILabel;

@interface AWEStoryFilterCollectionViewCell : UICollectionViewCell
{
    UIImageView *_previewImageView;
    UILabel *_nameLabel;
    CAShapeLayer *_shapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void).cxx_destruct;
- (void)reset;
- (void)setSelected:(_Bool)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

