//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BEETypesettingImageView, NSDictionary, UIButton;
@protocol BEEPhotoVerticalPreviewItemViewDelegate;

@interface BEEPhotoVerticalPreviewItemView : UITableViewCell
{
    _Bool _disableEdit;
    UIButton *_closeButton;
    UIButton *_editButton;
    BEETypesettingImageView *_bgImageView;
    NSDictionary *_imageData;
    id <BEEPhotoVerticalPreviewItemViewDelegate> _itemViewDelegate;
}

@property(nonatomic) _Bool disableEdit; // @synthesize disableEdit=_disableEdit;
@property(nonatomic) __weak id <BEEPhotoVerticalPreviewItemViewDelegate> itemViewDelegate; // @synthesize itemViewDelegate=_itemViewDelegate;
@property(retain, nonatomic) NSDictionary *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) BEETypesettingImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)pressedEditButton;
- (void)pressedCloseButton;
- (_Bool)shouldEnableEditForImageData:(id)arg1;
- (void)setImageData:(id)arg1 edit:(_Bool)arg2 business:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

