//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KSAdvPencilColorToolItem, NSString, UIImageView, UIView;

@interface KSAdvPencilColorToolCell : UICollectionViewCell
{
    KSAdvPencilColorToolItem *_pencilColorToolItem;
    UIView *_colorView;
    UIImageView *_selectedView;
    NSString *_selectedKVOKey;
}

@property(retain, nonatomic) NSString *selectedKVOKey; // @synthesize selectedKVOKey=_selectedKVOKey;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) KSAdvPencilColorToolItem *pencilColorToolItem; // @synthesize pencilColorToolItem=_pencilColorToolItem;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

