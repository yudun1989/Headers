//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSString, UIColor, UIFont;

@interface QZFontListViewCellModel : QzoneModel
{
    _Bool _vip;
    _Bool _canSelected;
    long long _boardType;
    long long _cellIndex;
    NSString *_imageUrl;
    UIFont *_textFont;
    UIColor *_textColor;
    NSString *_text;
    NSString *_priceText;
    long long _status;
    long long _itemType;
}

@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) _Bool canSelected; // @synthesize canSelected=_canSelected;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool vip; // @synthesize vip=_vip;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) long long boardType; // @synthesize boardType=_boardType;

@end

