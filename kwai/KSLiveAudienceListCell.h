//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KSLiveUser, NSArray, NSIndexPath, UIButton, UIImageView;

@interface KSLiveAudienceListCell : UICollectionViewCell
{
    _Bool _isAnchor;
    KSLiveUser *_user;
    NSIndexPath *_indexPath;
    double _borderedWidth;
    double _avatarWidth;
    UIImageView *_headImageView;
    UIImageView *_borderView;
    NSArray *_borderImagesColor;
    NSArray *_offlineBorderImagesColor;
    NSArray *_coinViewColors;
    UIButton *_coinView;
}

@property(retain, nonatomic) UIButton *coinView; // @synthesize coinView=_coinView;
@property(retain, nonatomic) NSArray *coinViewColors; // @synthesize coinViewColors=_coinViewColors;
@property(retain, nonatomic) NSArray *offlineBorderImagesColor; // @synthesize offlineBorderImagesColor=_offlineBorderImagesColor;
@property(retain, nonatomic) NSArray *borderImagesColor; // @synthesize borderImagesColor=_borderImagesColor;
@property(retain, nonatomic) UIImageView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) double avatarWidth; // @synthesize avatarWidth=_avatarWidth;
@property(nonatomic) double borderedWidth; // @synthesize borderedWidth=_borderedWidth;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) KSLiveUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)_grayImage:(id)arg1 withCacheKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_highlightImage:(id)arg1 withCacheKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

